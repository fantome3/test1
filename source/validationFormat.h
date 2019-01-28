/*
 * validationFormat.h
 *
 *  Created on: 2018-09-18
 *      Author: etudiant
 */

#ifndef VALIDATIONFORMAT_H_
#define VALIDATIONFORMAT_H_
#include <string>

namespace util{

//on déclare le tableau contenant les propriétées GEOJSON a rechercher
static const std::string CARDINAUX[6] =
{"Nord","Sud","Est","Ouest","null",""};

static const std::string ATTRIBUT_EXTRAIT[8] =
{"ID","COTE_RUE","LECT_MET","SEGMENT_RU","DIRECTION","NOM_TOPOG","NO_BORNE","GEOM"};

static const std::string ATTRIBUT_GEOJSON[10] =
{"ID", "COTE_RUE", "LECT_MET", "SEGMENT_RU", "DIRECTION", "NOM_TOPOG", "NO_BORNE", "NO_CIVIQ", "ID_VOIE_PUB ","GEOM"};

static const std::string VALEUR_ATTRIBUT[8] =
{"300070","Ouest","208","105","null","Avenue Louis-St-Laurent","2371","POINT (249714.049 5185174.046)"};

//on déclare les prototypes de fonction définies daans le fichier validationFormat.cpp

double convertirChaineEnDouble(std::string& p_chaine);
bool formatPoint(const std::string& p_geom);
bool validerGeom(const std::string& p_geom);
bool valideLigneCVS(std::string& p_ligne, std::ostringstream& p_parametres);
bool validerPointCardinal(const std::string& p_cardinalite);
bool verifiEntier(const std::string& p_valeur);
bool verifierVille(const std::string p_ville, const std::string p_ardsmt);
bool valideStationnementGEOJSON(std::string& p_enregistrement, std::ostringstream& p_attributs);
std::string valideStationnement(std::string& p_enregistrement, std::ostringstream& p_attributs);
}

#endif /* VALIDATIONFORMAT_H_ */
