/*
 * BorneFontaineTesteur.cpp
 *
 *  Created on: 2018-11-10
 *      Author: etudiant
 */

#include <gtest/gtest.h>
#include "BorneFontaine.h"

/**
 * @brief permet l'utilisation de l'espace nom bornesQuebec
 * @namespace bornesQuebec
 */
using namespace bornesQuebec;

/**
 * @test Test du constructeur
 *       cas valides: Creation d'un objet BorneFontaine et vérification de l'assignation de tous les attributs
 *       cas invalide:
 *       	arrondissement non vide si la ville est Quebec
 *       	arrondissement vide si la ville n'est pas Quebec
 *       	m_ville vide
 */
TEST(BorneFontaine, parametreValide){
	BorneFontaine borneFontaine(103270, "", "Boulevard de l'Ormière", -71.35887584,
			46.83814462, "Quebec", "La Haute-Saint-Charles");
	ASSERT_EQ("Quebec", borneFontaine.reqVille());
	ASSERT_EQ("La Haute-Saint-Charles", borneFontaine.reqArrondissement());
}

//!ville invalide
TEST(BorneFontaine, parametreVilleInValide){
	ASSERT_THROW(new BorneFontaine(103270, "", "Boulevard de l'Ormière", -71.35887584,
			46.83814462, "", "La Haute-Saint-Charles"), PreconditionException);
}

//!Arrondissement invalide
TEST(BorneFontaine, parametreArrondissementInValide1){
	ASSERT_THROW(new BorneFontaine(103270, "", "Boulevard de l'Ormière", -71.35887584,
			46.83814462, "Quebec", ""), PreconditionException);
}
TEST(BorneFontaine, parametreArrondissementInValide2){
	ASSERT_THROW(new BorneFontaine(103270, "", "Boulevard de l'Ormière", -71.35887584,
			46.83814462, "Montréal", "Université de Montréeal"), PreconditionException);
}

/**
 * @class MethodeBorneFontaine
 * @brief Fixture pour les tests comparaisons sur les methodes de retour
 */
class MethodeBorneFontaine : public ::testing::Test
{
public:
	MethodeBorneFontaine():f_borne(103270, "", "Boulevard de l'Ormière", -71.350887,
			46.838146, "Quebec", "La Haute-Saint-Charles")
	{
	};
	BorneFontaine f_borne;
};

/**
 * @brief Test de la méthode int reqArrondissement() const
 * 		cas valide vérifier le retour de l'identifiant
 */

TEST_F(MethodeBorneFontaine, RetourneArrondissement){
	ASSERT_EQ("La Haute-Saint-Charles", f_borne.reqArrondissement());
}

/**
 * @brief Test de la méthode reqVille() const
 * 		cas valide vérifier le retour de la Ville
 */

TEST_F(MethodeBorneFontaine, RetourneVille){
	ASSERT_EQ("Quebec", f_borne.reqVille());
}

/**
 * @brief on test si notre clone est identique
 */
TEST_F(MethodeBorneFontaine, verifieClone){
	BorneFontaine bs(103270, "", "Boulevard de l'Ormière", -71.350887,
			46.838146, "Quebec", "La Haute-Saint-Charles");
	ASSERT_EQ(bs.reqLatitude(), f_borne.clone()->reqLatitude());
	ASSERT_EQ(bs.reqLongitude(), f_borne.clone()->reqLongitude());
	ASSERT_EQ(bs.reqNomTopographique(), f_borne.clone()->reqNomTopographique());
	ASSERT_EQ(bs.reqDirection(), f_borne.clone()->reqDirection());
	ASSERT_EQ(bs.reqIdentifiant(), f_borne.clone()->reqIdentifiant());
}

/**
 * \brief  Test de la méthode std::string Borne::reqBorneFormatee()
 *        cas valide reqBorneFormate: Borne connue dont on connaît le format.
 *        cas invalide Aucun d'identifié
 */
TEST_F(MethodeBorneFontaine, AfficheBorneFontaine){
	std::stringstream os;
	os << "Borne-fontaine" << std::endl
		<< "----------------------------------------------" << std::endl
	   	<< "Identifiant de la borne : 103270\nDirection          : \n"
		<< "Nom topographique  : Boulevard de l'Ormière\nLongitude          : -71.350887\n"
		<< "Latitude           : 46.838146\nVille               : Quebec\n"
		<< "Arrondissement     : La Haute-Saint-Charles\n"
		<< "----------------------------------------------" << std::endl;
	ASSERT_EQ(os.str(),f_borne.reqBorneFormate());
}
