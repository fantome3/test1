/**
 * @file Borne.cpp
 * @brief classe qui modélise tous les types de bornes présents dans la ville de Québec
 * @date Created on: 2018-10-14
 * @author     Author: Jires Djoko
 */
#include <string>
#include <sstream>
#include "Borne.h"

/**
 * @brief permet l'utilisation de l'espace nom std
 * @namespace std
 */
using namespace std;
namespace bornesQuebec{
/**
 * @class Borne
 * @brief constructeur par défaut qui initialise les paramètres à sa création
 * @param p_numBorne numéro de borne
 * @param p_coteRue côté de la rue
 * @param p_lectureMetrique représente la distance mesurée
 * @param p_segmentRue représente le segment de rue
 * @param p_direction est la direction(N,O,E,S)
 * @param p_nomTopographique nom topographique de la borne
 */
Borne::Borne(int p_identifiant, const string& p_direction, const string& p_nomTopographique,
		double p_longitude, double p_latitude)
:m_identifiant(p_identifiant), m_direction(p_direction), m_nomTopographique(p_nomTopographique),
 m_longitude(p_longitude), m_latitude(p_latitude)
{
	PRECONDITION(p_identifiant > 0);
	PRECONDITION(!p_nomTopographique.empty());
	PRECONDITION(util::validerPointCardinal(p_direction));

	POSTCONDITION(reqIdentifiant() == p_identifiant);
	POSTCONDITION(reqDirection() == p_direction);
	POSTCONDITION(reqNomTopographique() == p_nomTopographique);
	POSTCONDITION(reqLatitude() == p_latitude);
	POSTCONDITION(reqLongitude() == p_longitude);

	INVARIANTS();
}

/**
 * @fn const std::string& Borne::reqIdentifiant
 * @brief methode d'acces à la variable m_identifiant
 * @return int
 */
int Borne::reqIdentifiant() const {
	return m_identifiant;
}

/**
 * @fn const std::string& Borne::reqLatitude
 * @brief methode d'accès à la variable m_latitude
 * @return double
 */
double Borne::reqLatitude() const {
	return m_latitude;
}

/**
 * @fn const std::string& Borne::reqLongitude
 * @brief methode d'acces à la variable longitude
 * @return double
 */
double Borne::reqLongitude() const {
	return m_longitude;
}

/**
 * @fn const std::string& Borne::reqDirection
 * @brief methode d'acces à la variable direction
 * @return une chaîne de caractère
 */
const std::string& Borne::reqDirection() const {
	return m_direction;
}

/**
 * @fn const std::string& Borne::reqNomTopographique() const
 * @brief methode d'acces à la variable nomTopographique
 * @return une chaîne de caractère
 */
const std::string& Borne::reqNomTopographique() const {
	return m_nomTopographique;
}

/**
 * @fn void Borne::asNomTopographique(const std::string& nomTopographique)
 * @brief méthode d'assignation de la variable nomTopographique
 * @param nomTopographique
 */
void Borne::asNomTopographique(const std::string& p_nomTopographique) {
	PRECONDITION(!p_nomTopographique.empty());

	m_nomTopographique = p_nomTopographique;

	POSTCONDITION(m_nomTopographique == p_nomTopographique);

	INVARIANTS();
}

/**
 * @fn operator==
 * @brief compare 2 objets de type borne
 * @param borne
 * @return booleen
 */
bool Borne::operator==(const Borne& borne) const {

	return m_identifiant==borne.m_identifiant &&
			m_direction==borne.m_direction &&
			m_nomTopographique==borne.m_nomTopographique &&
			m_longitude==borne.m_longitude &&
			m_latitude==borne.m_latitude;
}

/**
 * \brief: Verifier les invariants de la classe
 */
void Borne::verifieInvariant() const{
	INVARIANT(util::validerPointCardinal(m_direction));
	INVARIANT(!m_nomTopographique.empty());
	INVARIANT(m_identifiant > 0);
}

/**
 * @brief destructeur virtuel
 */
Borne::~Borne(){

}

}/* namespace bornesQuebec */
