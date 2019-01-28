#include "interfacebornestationnement.h"
#include "BorneException.h"
#include "RegistreBorne.h"
#include "BorneStationnement.h"

#include <QMessageBox>

using namespace bornesQuebec;

interfaceBorneStationnement::interfaceBorneStationnement(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.ajouter, SIGNAL(clicked()), this, SLOT(enregistreStationnement()));
	QObject::connect(ui.annuler, SIGNAL(clicked()), this, SLOT(annuler()));
}

QString interfaceBorneStationnement::reqIdentifie() const {
	return ui.identifiant->text();
}

QString interfaceBorneStationnement::reqDirection() const {
	return ui.direction->text();
}

QString interfaceBorneStationnement::reqNomTopographique() const {
	return ui.nomTopographique->text();
}

QString interfaceBorneStationnement::reqLongitude() const {
	return ui.longitude->text();
}

QString interfaceBorneStationnement::reqLatitude() const {
	return ui.latitude->text();
}

QString interfaceBorneStationnement::reqType() const {
	return ui.type->text();
}

QString interfaceBorneStationnement::reqLectureMetrique() const {
	return ui.lectureMetrique->text();
}

QString interfaceBorneStationnement::reqSegmentRue() const {
	return ui.segmentRue->text();
}

QString interfaceBorneStationnement::reqNumBorne() const {
	return ui.numBorne->text();
}

QString interfaceBorneStationnement::reqCoteRue() const {
	return ui.coteRue->text();
}

/**
 * @fn enregistreStationnement
 * @brief enregistreStationnement est déclancher lors du clic sur le boutton ajouter,
 * 		 en conséquent c'est elle qui va exécuter la fonction ajoutBorne de la classe RegistreBorne.
 * 		 1-> je verifie que les données entrées sont correcte
 * 		 2-> si oui, je transmet le signal à la fenetre mère
 */
void interfaceBorneStationnement::enregistreStationnement(){
		if (ui.identifiant->text().toInt() < 0){
			QString message("L'identifiant doit être supérieur à 0");
			QMessageBox::information(this, "ERREUR", message);
			return;
		}
		if(ui.nomTopographique->text().isEmpty()){
			QString message("Le nom topographique ne doit pas être vide");
			QMessageBox::information(this, "ERREUR", message);
			return;
		 }
		if (ui.lectureMetrique->text().toInt() < 0){
			QString message("La distance doit être supérieur à 0");
			QMessageBox::information(this, "ERREUR", message);
			return;
		}
		if (ui.segmentRue->text().toInt() < 0){
			QString message("Lle segment doit être supérieur à 0");
			QMessageBox::information(this, "ERREUR", message);
			return;
		}
		if(ui.numBorne->text().length() > 4){
			QString message("La taille du numéro doit être inférieur à 4");
			QMessageBox::information(this, "ERREUR", message);
			return;
		 }
		else{
			accept();
		}
}

/**
 * @fn annuler
 * @brief si on clique sur annuller tous les champs deviennent vide
 */
void interfaceBorneStationnement::annuler(){

		ui.identifiant->setText("");

		ui.direction->setText("");

		ui.nomTopographique->setText("");

		ui.longitude->setText("");

		ui.latitude->setText("");

		ui.type->setText("");

		ui.lectureMetrique->setText("");

		ui.segmentRue->setText("");

		ui.numBorne->setText("");

		ui.coteRue->setText("");

}
interfaceBorneStationnement::~interfaceBorneStationnement()
{

}
