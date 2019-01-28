/*
 * BorneStationnement.cpp
 *
 *  Created on: 2018-11-09
 *      Author: etudiant
 */

#include <sstream>
#include "BorneStationnement.h"
#include <iomanip>
#include <iostream>

using namespace util;

namespace bornesQuebec {

/**
 * @class BorneStationnement
 * @brief on crée notre objet a base de la classe Borne
 *
 * @param p_identifiant
 * @param p_direction
 * @param p_nomTopographique
 * @param p_longitude
 * @param p_latitude
 * @param p_type
 * @param p_lectureMetrique
 * @param p_segmentRue
 * @param p_numBorne
 * @param p_coteRue
 */
BorneStationnement::BorneStationnement(int p_identifiant, const std::string& p_direction, const std::string& p_nomTopographique, double p_longitude,
		double p_latitude, const std::string& p_type, double p_lectureMetrique, int p_segmentRue, const std::string& p_numBorne, const std::string& p_coteRue)
:Borne(p_identifiant, p_direction, p_nomTopographique, p_longitude, p_latitude),
 m_type(p_type), m_lectureMetrique(p_lectureMetrique), m_segmentRue(p_segmentRue), m_numBorne(p_numBorne), m_coteRue(p_coteRue)
{
	PRECONDITION(BorneStationnement::validerType(p_type));
	PRECONDITION(p_lectureMetrique > 0);
	PRECONDITION(p_segmentRue > 0);
	PRECONDITION(p_numBorne.length() <= 4);
	PRECONDITION(util::validerPointCardinal(p_coteRue));

	POSTCONDITION(m_type == p_type);
	POSTCONDITION(m_lectureMetrique == p_lectureMetrique);
	POSTCONDITION(m_segmentRue == p_segmentRue);
	POSTCONDITION(m_numBorne == p_numBorne);
	POSTCONDITION(m_coteRue == p_coteRue);

	INVARIANTS();
}

/**
 * @fn reqCoteRue
 * @return une chaine de caractère
 */
const std::string& BorneStationnement::reqCoteRue() const {
	return m_coteRue;
}

/**
 * @fn reqLectureMetrique
 * @return double
 */
double BorneStationnement::reqLectureMetrique() const {
	return m_lectureMetrique;
}

/**
 * @fn reqNumBorne
 * @return une chaine de caractère
 */
const std::string& BorneStationnement::reqNumBorne() const {
	return m_numBorne;
}

/**
 * @fn reqSegmentRue
 * @return int
 */
int BorneStationnement::reqSegmentRue() const {
	return m_segmentRue;
}

/**
 * @fn reqNumBorne
 * @return une chaine de caractère
 */
const std::string& BorneStationnement::reqType() const {
	return m_type;
}

/**
 * @fn validerType
 * @param p_type
 * @return boolleen
 */
bool BorneStationnement::validerType(const std::string& p_type){
	bool resultat { false };
	if(p_type == "stationnement" || p_type == "paiement")
		resultat = true;
	return resultat;
}

/**
 * @fn std::string Borne::reqBorneFormate() const
 * @brief affiche les valeurs ou attribut d'une borne
 * @return une chaîne de caractère
 */
std::string BorneStationnement::reqBorneFormate() const{
	//! on instancie un objet std::ostringstream
		std::ostringstream valeurs;
		valeurs << "Borne de " << reqType() << std::endl
				<< "----------------------------------------------" << std::endl
				<< "Identifiant de la borne : " << reqIdentifiant() << std::endl
				<< "Direction          : " << reqDirection() << std::endl
				<< "Nom topographique  : " << reqNomTopographique() << std::endl
				<< "Longitude          : " << std::fixed << reqLongitude() << std::endl
				<< "Latitude           : " << std::fixed << reqLatitude()<< std::endl
				<<"Distance mesurée    : " << std::fixed << reqLectureMetrique() << std::endl
				<< "Segment de Rue     : " << reqSegmentRue() << std::endl
				<<"Numero de la borne  : " << reqNumBorne() << std::endl
				<< "Cote de la rue     : " << reqCoteRue() << std::endl
				<< "----------------------------------------------" << std::endl;

		return valeurs.str();
}

/**
 * @brief faire une copie allouée sur le monceau de l'objet courant
 * @return Copie du constructeur
 */
Borne* BorneStationnement::clone() const{

	return new BorneStationnement(*this);

}
/**
 * @brief on vérifie nos invariants
 */
void BorneStationnement::verifieInvariant() const
{
	INVARIANT(m_type == "stationnement" || m_type == "paiement");
	INVARIANT(m_lectureMetrique > 0);
	INVARIANT(m_segmentRue > 0);
	INVARIANT(m_numBorne.length() >= 0 || m_numBorne.length() <= 4);
	INVARIANT(util::validerPointCardinal(m_coteRue));
}

/**
 * @brief destructeur de notre class
 */
BorneStationnement::~BorneStationnement() {

}

} /* namespace bornesQuebec */
