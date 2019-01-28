#ifndef INTERFACEBORNEFONTAINE_H
#define INTERFACEBORNEFONTAINE_H

#include <QtGui/QDialog>
#include "ui_interfacebornefontaine.h"

class interfaceBorneFontaine : public QDialog
{
    Q_OBJECT

public:
    interfaceBorneFontaine(QWidget *parent = 0);
    ~interfaceBorneFontaine();

    QString reqIdentifie() const;
    QString reqDirection() const;
    QString reqNomTopographique() const;
    QString reqLongitude() const;
    QString reqLatitude() const;
    QString reqVille() const;
    QString reqArrondissement() const;

public slots:
	void enregistrementFontaine();
	void effacer();

private:
    Ui::interfaceBorneFontaineClass ui;
};

#endif // INTERFACEBORNEFONTAINE_H
