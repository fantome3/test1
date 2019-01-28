/*
 * validationFormat.cpp
 *
 *  Created on: 2018-09-18
 *      Author: etudiant
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "validationFormat.h"

using namespace std;

namespace util {

/*
* Méthode qui permet de convertir une chaîne de caractères
* de la forme 123,456 en double.
* \param[in] p_chaine la chaîne de caractères à convertir.
* \return un double résultat de la conversion.
*/
double convertirChaineEnDouble(std::string& p_chaine){
	//on remplace la , en .
	for (unsigned int i = 0; i < p_chaine.length(); i++)
	{
		if (p_chaine[i] == ',')
		{
			p_chaine[i] = '.';
		}
	}
	istringstream is(p_chaine);
	double chaineConvertiEnDouble;

	is >> chaineConvertiEnDouble;

	return chaineConvertiEnDouble;
}
/*
 * fonction qui recherche la présence
 *  des pranthèses, de "POINT" , et la présence des 2 coordonnées de POINT
 *\param p_geom chaine de caractère de format a valider
 *\var m_positionParantheseOuvrante,m_positionParantheseFermente, positionPoint, infos
 *  */
bool formatPoint(const std::string& p_geom){
	bool m_valide=false;

	string m_infos;

	int i=0;//i est le nombre de paramètre de la foction POINT

	int m_positionParantheseOuvrante=p_geom.find('(');

	int m_positionParantheseFermente=p_geom.find(')');

	int m_positionPoint=p_geom.find("POINT");

	stringstream ligne(p_geom);

	// compte le nombre d'argument de POINT
	while(getline(ligne,m_infos,' '))
			i++;

	//on verifi que nos parantheses, nos 2 arguments et la chaine "POINT" existent bien
	if(m_positionPoint!=-1 && m_positionParantheseFermente!=-1 && m_positionParantheseOuvrante!=-1 && i==3)
		m_valide=true;

	return m_valide;
}

/*
 * creation de la fonction validerGeom qui permet de valider la longitude et la lattitude
 * \param[in] p_geom la chaine de caracteres à valider
 * \variable longitude,latitude, chaine, chaine1, chaine2, valide
 * \return un booléen resultat du type de format
 * */
bool validerGeom(const std::string& p_geom){

	string chaine1,chaine2,temporaire;

	bool valide = formatPoint(p_geom);//recoit la valeur de retour du type de notre format

	temporaire = p_geom.substr(7, p_geom.length()-1);

	istringstream chaine(temporaire);

	chaine>>chaine1;
	chaine>>chaine2;

	//on vérifie si la conversion a échouer
	if(convertirChaineEnDouble(chaine2)==0 || convertirChaineEnDouble(chaine1)==0)
		valide=false;

	return valide;
}

/*
 * fonction verifie qu'un fichier reponde aux caractéristiques du fichier "CVS"
 * \param p_ligne la ligne a vérifier
 * \var nombreSeparateur, verifie
 * \return un booléen resultat du type de format CVS
 * */
bool verifiFichierCVS(string& p_ligne){

	//je initialise le nombre de séparateur '|' à 0
	int m_nombreSeparateur=0;

	bool verifie=true, temporaire=true;

	string m_souschaine;

	stringstream chaine(p_ligne);

	while(getline(chaine,m_souschaine,'|')){

		m_nombreSeparateur++;

		//vérifie qu'il n'y a pas de chaine vide autre que celui situer a la 5ièm position
		if(m_souschaine=="" && m_nombreSeparateur!=5)
				temporaire=false;
		if(!temporaire)
			verifie=temporaire;
	}

	//si le nombre de separateur est différent de 9 alors on renvoie faux sinon vrai
	if(m_nombreSeparateur!=9)
		verifie=false;

	return verifie;
}

/*
 * Cette fonction permet d’extraire des informations relatives à des bornes
 *   de paiement contenues dans une chaîne de caractères reçue en paramètre
 *\param[1] p_ligne la chaine de caractere a traiter
 *\param[2] p_parametres le flux dans lequel on stock les informations extraites
 *\var verifie, infos
 * */
bool valideLigneCVS(std::string& p_ligne, ostringstream& p_parametres){

	bool verifie=true;

	int m_compteur=0;

	stringstream chaine(p_ligne);

	std::string m_infos="";

	//on verifie si notre ligne est de type CVS
	if(!verifiFichierCVS(p_ligne))
		verifie=false;

	//on copie le contenu de la variable infos dans p_parametres en fonction du reste de mots

	while(getline(chaine,m_infos,'|')){
		if(m_compteur==8){
			p_parametres << m_infos;
		}
		else{
			p_parametres << m_infos+",";
		}
		m_compteur++;
	}

	return verifie;
}

/*
 * on verifie que tous les identifiants snt présents.on se rssure aussi qu'il ya 3{ et 3}
 * on peut après le format de la valeur POINT.
 *\PARAM line chaine de caractere a traiter
 *\VAR m_positionMot
 *\RETURN
 * */
bool valideFormatGEOJSON(std::string& p_line){

	bool validation=true;

	int m_positionMot;

	//on cherche si les attributs de propriétés existent
	for(int i=0;i<8;i++){
		m_positionMot=p_line.find("\""+ATTRIBUT_EXTRAIT[i]+"\"");
		if(m_positionMot==-1)
			validation=false;//si le mot existe
	}

	//on cherche si les valeurs attributs de propriétés existent
	for(int i=0;i<8;i++){
			m_positionMot=p_line.find(VALEUR_ATTRIBUT[i]);
			if(m_positionMot==-1)
				validation=false;//si le mot existe
		}

	return validation;
}

/*Cette fonction permet d’extraire les informations relatives à des bornes de stationnement contenues dans
 * une chaîne de caractères reçue en paramètre et le stock ds la varible p_attributs.
 * si le fichier est de type GEOJSON la foction retourne true, false sinon.
 *\param[1] p_enregistrement la chaîne de caractères a traiter
 *\param[2] p_attributs un flux de sortie dans lequel on stock les informations extraites de p_enregistrement
 *\var souschaine,infos,valide,i
 *\return un booléen resultat du type de format GEOJSON
 * */
bool valideStationnementGEOJSON(std::string& p_enregistrement, std::ostringstream& p_attributs){

	string souschaine,infos,sentinelle;

	bool valide=valideFormatGEOJSON(p_enregistrement);

	stringstream ligneFlux(p_enregistrement);

	//on recupère la partie du flux contenant les information importante
	while(getline(ligneFlux,souschaine,'{'));

	stringstream nouvelleLigneFlux(souschaine);

	//on recupère chaque attribut et sa valeur
	while(getline(nouvelleLigneFlux,infos,',')){

		stringstream nouveau(infos);string attribut;
		while(getline(nouveau,attribut,':')){
			//on saute les attributs non désirés
			if(attribut.find("NO_CIVIQ") != -1 || attribut.find("ID_VOIE_PUB") != -1)
				sentinelle = "saut";
		}
		if(sentinelle != "saut"){
			if (attribut.find("null") != -1)
				p_attributs << "null,";
			else if (attribut.length() > 30)
				p_attributs << attribut.substr(2,attribut.length()-12);
			else
				p_attributs << attribut.substr(2,attribut.length()-3) + ",";
		}

		sentinelle = "annuler";

	}

	return valide;
}

/**
 * @fn valideStationnement
 * @brief extrait les champs de valeur des attributs de p_enregistrement
 * @param p_enregistrement
 * @param p_attributs
 * @return une chaine de caractère
 */
string valideStationnement(std::string& p_enregistrement, std::ostringstream& p_attributs){

	char caractere[5] = {'D', 'N', 'L', 'L', 'V'};
	int indice=0;
		string ligneSeparerDe2point,valeurBrute,attribut;
		stringstream valeur (p_enregistrement);
		for(int i = 0; i < 7; i++){
			getline(valeur, ligneSeparerDe2point,':');
			if(i > 1){
				valeurBrute=ligneSeparerDe2point.substr(1,ligneSeparerDe2point.length()-1);
				stringstream valeur2(valeurBrute);
				getline(valeur2, attribut, caractere[indice]);
				if(indice < 4)
					p_attributs << attribut.substr(0, attribut.length()-1)+",";
				else
					p_attributs << attribut.substr(0, attribut.length()-1);
				indice++;
			}
		}
	return p_attributs.str();
}

/**
 * @fn validerPointCardinal
 * @param p_cardinalite
 * @return bollen
 */
bool validerPointCardinal(const std::string& p_cardinalite){
	bool valide { false };
	for(int i = 0; i < 6; i++)
		if(!p_cardinalite.compare(CARDINAUX[i]))
			valide = true;
	return valide;
}

/**
 * @fn int verifiEntier(const string& p_valeur)
 * @param p_valeur
 * @return un entier
 */
bool verifiEntier(const string& p_valeur){
	istringstream os(p_valeur);
	//bool valide = false;
	int entier;
	os >> entier;
	return (entier == 0) ? false : true;
}


bool verifierVille(const std::string p_ville, const std::string p_ardsmt){

	bool valeur = false;

	if(!p_ville.empty()){
		valeur = true;
	}else{
		if(p_ville == "Québec"){
			if(!p_ardsmt.empty())
				valeur = true;
		}else{
			if(p_ardsmt.empty())
				valeur = true;
		}
	}

	return valeur;
}
}
