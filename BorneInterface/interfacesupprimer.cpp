#include "interfacesupprimer.h"

#include <QMessageBox>

interfaceSupprimer::interfaceSupprimer(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.boutton_supprimer, SIGNAL(clicked()), this, SLOT(slotsBouttonSupprime()));
}

/**
 * @brief accesseur du champ de texte identifiant
 * @return QString
 */
QString interfaceSupprimer::ReqIdentifiant() const{
	return ui.identifiant->text();
}

/**
 * @fn slotsBouttonSupprime
 * @brief on définit l'action de l'écouteur
 */
void interfaceSupprimer::slotsBouttonSupprime(){
	if (ui.identifiant->text().toInt() < 0){
		QString message("L'identifiant doit être supérieur à 0");
		QMessageBox::information(this, "ERREUR", message);
		return;
	} else {
		accept();
	}
}
interfaceSupprimer::~interfaceSupprimer()
{

}
