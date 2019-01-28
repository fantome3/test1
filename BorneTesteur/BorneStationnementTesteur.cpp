/*
 * TesteurStationnement.cpp
 *
 *  Created on: 2018-11-09
 *      Author: etudiant
 */

#include <gtest/gtest.h>
#include "BorneStationnement.h"

using namespace bornesQuebec;

/**
 * @test Test du constructeur
 *       cas valides: Creation d'un objet BorneFontaine et vérification de l'assignation de tous les attributs
 *       cas invalide:
 *       	lectureMetrique < 0
 *       	segmentRue < 0
 *       	numBorne la taille est supérieur a 4
 *       	coteRue si se n'est pas un point cardinal
 *       	p_type si différent de paiement et de stationnement
 */
TEST(borneStationnement, constructeurValide){
	BorneStationnement stationnement(300070, "Nord", "Boulevard René-Levesque Est",
			-71.226669, 46.814323, "stationnement", 23.7, 20, "2172", "Nord");
	ASSERT_EQ("stationnement", stationnement.reqType());
	ASSERT_GE(23.7, stationnement.reqLectureMetrique());
	ASSERT_GE(20, stationnement.reqSegmentRue());
	ASSERT_LE("2172", stationnement.reqNumBorne());
	ASSERT_EQ("Nord", stationnement.reqCoteRue());
}

//!type invalide
TEST(borneStationnement, parametreType){
	ASSERT_THROW(new BorneStationnement(300070, "Nord", "Boulevard René-Levesque Est",
			-71.226669, 46.814323, "station", 23.7, 20, "2172", "Nord"), PreconditionException)
					<< "valeur attendue: stationnement\n" << "valeur entrée: station\n";
}

//!lecture metrique invalide
TEST(borneStationnement, parametreLectureMetrique){
	ASSERT_THROW(new BorneStationnement(300070, "Nord", "Boulevard René-Levesque Est",
				-71.226669, 46.814323, "stationnement", 0, 20, "2172", "Nord"), PreconditionException);
}

//!segment rue invalide
TEST(borneStationnement, parametreSegmentRue){
	ASSERT_THROW(new BorneStationnement(300070, "Nord", "Boulevard René-Levesque Est",
				-71.226669, 46.814323, "stationnement", 23.7, -20, "2172", "Nord"), PreconditionException);
}

//!numero borne invalide
TEST(borneStationnement, parametreNumBorne){
	ASSERT_THROW(new BorneStationnement(300070, "Nord", "Boulevard René-Levesque Est",
				-71.226669, 46.814323, "stationnement", 23.7, 20, "217652", "Nord"), PreconditionException);
}

//!coté rue invalide
TEST(borneStationnement, parametreCoteRue){
	ASSERT_THROW(new BorneStationnement(300070, "Nord", "Boulevard René-Levesque Est",
				-71.226669, 46.814323, "stationnement", 23.7, 20, "2172", "Nor"), PreconditionException);
}

/**
 * @class MethodeStationnement
 * @brief creation d'un Fixture pour les tests sur borneStationnement
 */
class MethodeStationnement : public ::testing::Test{
public:
	MethodeStationnement() :
		f_borneStationnementTest(300070, "Nord", "Boulevard René-Levesque Est",
				-71.226669, 46.814323, "stationnement", 23.7, 20, "2172", "Nord")
	{};
	BorneStationnement f_borneStationnementTest;
};

/**
 * @brief Test de la méthode reqCoteRue() const
 * 		cas valide vérifier le retour de CoteRue
 */
TEST_F(MethodeStationnement, retourCoteRue){
	ASSERT_EQ("Nord", f_borneStationnementTest.reqCoteRue());
}

/**
 * @brief Test de la méthode reqLectureMetrique() const
 * 		cas valide vérifier le retour LectureMetrique
 */
TEST_F(MethodeStationnement, retourLectureMetrique){
	ASSERT_EQ(23.7 ,f_borneStationnementTest.reqLectureMetrique());
}

/**
 * @brief Test de la méthode reqSegmentRue() const
 * 		cas valide vérifier le retour SegmentRue
 */
TEST_F(MethodeStationnement, retourSegmentRue){
	ASSERT_EQ(20, f_borneStationnementTest.reqSegmentRue());
}

/**
 * @brief Test de la méthode reqNumeroBorne() const
 * 		cas valide vérifier le retour NumeroBorne
 */
TEST_F(MethodeStationnement, retourNumeroBorne){
	ASSERT_EQ("2172", f_borneStationnementTest.reqNumBorne());
}

/**
 * @brief Test de la méthode reqType() const
 * 		cas valide vérifier le retour type
 */
TEST_F(MethodeStationnement, retourType){
	ASSERT_EQ("stationnement", f_borneStationnementTest.reqType());
}

/**
 * @brief on test si notre clone est identique
 */
TEST_F(MethodeStationnement, retourDuClone){
	BorneStationnement bs(300070, "Nord", "Boulevard René-Levesque Est",
				-71.226669, 46.814323, "stationnement", 23.7, 20, "2172", "Nord");
	ASSERT_EQ(bs.reqLatitude(), f_borneStationnementTest.clone()->reqLatitude());
	ASSERT_EQ(bs.reqLongitude(), f_borneStationnementTest.clone()->reqLongitude());
	ASSERT_EQ(bs.reqNomTopographique(), f_borneStationnementTest.clone()->reqNomTopographique());
	ASSERT_EQ(bs.reqDirection(), f_borneStationnementTest.clone()->reqDirection());
	ASSERT_EQ(bs.reqIdentifiant(), f_borneStationnementTest.clone()->reqIdentifiant());
}

/**
 * \brief  Test de la méthode std::string reqBorneFormatee()
 *        cas valide reqBorneFormate: Borne connue dont on connaît le format.
 *        cas invalide Aucun d'identifié
 */
TEST_F(MethodeStationnement, AfficheBorneStationnement){
	std::ostringstream valeurs;
	valeurs << "Borne de stationnement"<< std::endl
			<< "----------------------------------------------" << std::endl
			<< "Identifiant de la borne : 300070" << std::endl
			<< "Direction          : Nord" << std::endl
			<< "Nom topographique  : Boulevard René-Levesque Est" << std::endl
			<< "Longitude          : -71.226669" << std::endl
			<< "Latitude           : 46.814323" << std::endl
			<< "Distance mesurée    : 23.700000" << std::endl
			<< "Segment de Rue     : 20" << std::endl
			<< "Numero de la borne  : 2172" << std::endl
			<< "Cote de la rue     : Nord" << std::endl
			<< "----------------------------------------------" << std::endl;
	ASSERT_EQ(valeurs.str(), f_borneStationnementTest.reqBorneFormate());
}
