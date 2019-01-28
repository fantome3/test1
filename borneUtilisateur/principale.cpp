/*
 * principale.cpp
 *
 *  Created on: 2018-11-09
 *      Author: etudiant
 */
#include <iostream>
#include <sstream>
#include "Borne.h"
#include "RegistreBorne.h"
#include "BorneFontaine.h"
#include "BorneStationnement.h"
#include "ContratException.h"
#include "validationFormat.h"
#include <string>

/**
 * @namespace std
 * @namespace util
 * @brief permet l'utilisation de l'espace nom std et util
 */
using namespace std;

/**
 * @fn int main()
 * @brief entrée du programme
 * @return 0 = arrêt normal du programme
 */
int main(){

	int nombreDeBorne;
	char choixBorne;

	int identifiant;
	std::string direction;
	std::string nomTopographique;
	double longitude;
	double latitude;

	std::string ville;
	std::string arrondissement;

	std::string type;
	double lectureMetrique;
	int segmentRue;
	std::string numBorne ;
	std::string coteRue;

	std::string nomRegistre;

	try{
		cout << "Bonjour!! *** entrer le nombre de borne à creer ***" << endl;
		cin >> nombreDeBorne;
		cin.ignore();

		cout << "********création d'un registre pour ajouter nos objets********" << endl;

		do{
			cout << "entrer le nom du registre" << endl;
			getline(cin, nomRegistre);
		}while(nomRegistre.empty());

		bornesQuebec::RegistreBorne registre(nomRegistre);

		while( nombreDeBorne > 0 ){
			cout << "**** Taper f(ou s) pour borne fontaine (ou pour borne stationnement) ****" << endl;
			cin >> choixBorne;

			do{
				cout << "entrer l'identifiant de la borne" << endl;
				cin >> identifiant;
				cin.ignore();
			}while(identifiant <= 0);

			do{
				cout << "entrer la direction " <<endl;
				getline(cin, direction);
			}while(!util::validerPointCardinal(direction));

			do{
				cout << "entrer le nom topographique " << endl;
				getline(cin, nomTopographique);
			}while(nomTopographique.empty());

			cout << "entrer la longitude " << endl;
			cin >> longitude;

			cout << "entrer la latitude " << endl;
			cin >> latitude;
			cin.ignore();

			if(choixBorne == 'f'){

				do{
					cout << "entrer le nom de la ville" << endl;
					getline(cin, ville);
				}while(ville.empty());

				do{
					cout << "entrer le nom de l'arrondissement de la ville " << endl;
					getline(cin, arrondissement);

				}while(ville.compare("Quebec") && !arrondissement.empty());


				bornesQuebec::BorneFontaine borneFontaine(identifiant, direction, nomTopographique, longitude,
						latitude, ville, arrondissement);
				cout << "=======>l'objet borneFontaine créé avec succès" << endl;

				registre.ajouteBorne(borneFontaine);

			}else if(choixBorne == 's'){

				do{
					cout << "entrer le type de la borne (paiement ou stationnement)" <<endl;
					getline(cin, type);
					if(type != "paiement" && type != "stationnement")
						cout << "désolez!!! le type doit être paiement ou stationnement" << endl;
				}while(type != "paiement" && type != "stationnement");

				do{
					cout << "entrer la distance mesurée à partir du début du tronçon" <<endl;
					cin >> lectureMetrique;
				}while(lectureMetrique <= 0);

				do{
					cout << "entrer L’identifiant du segment de voie publique " << endl;
					cin >> segmentRue;
					cin.ignore();
				}while(segmentRue <= 0);

				do{
					cout << "entrer le numéro de la borne " << endl;
					getline(cin, numBorne);
				}while(numBorne.length() > 4 && util::verifiEntier(numBorne));

				do{
					cout << "entrer le côté de la rue " <<endl;
					getline(cin, coteRue);
				}while(!util::validerPointCardinal(coteRue));

				bornesQuebec::BorneStationnement borneStation(identifiant, direction, nomTopographique, longitude,
						latitude, type, lectureMetrique, segmentRue, numBorne, coteRue);
				cout << "=======>l'objet borneStationnement créé avec succès" << endl;

				registre.ajouteBorne(borneStation);

			}else{
				cout << "vous avez fais un mauvais choix dès le départ, veuillez choisir entre 'f' et 's'" << endl;
				nombreDeBorne ++;
			}

			nombreDeBorne --;
		}
		cout << "|*|_||_||_||_||_||_||_||_||_||_||_||_|| ||_||_||_||_||_||_||_||_||_||_||_||_|*|" << endl;

		cout << registre.reqRegistreBorneFormate();

	}catch (ContratException& e)
	{
		cout << e.reqTexteException() << endl;
	}
	return 0;
}
