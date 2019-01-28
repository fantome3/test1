#ifndef INTERFACEBORNESTATIONNEMENT_H
#define INTERFACEBORNESTATIONNEMENT_H

#include <QtGui/QDialog>
#include "ui_interfacebornestationnement.h"

class interfaceBorneStationnement : public QDialog
{
    Q_OBJECT

public:
    interfaceBorneStationnement(QWidget *parent = 0);
    ~interfaceBorneStationnement();

    QString reqIdentifie() const;
    QString reqDirection() const;
    QString reqNomTopographique() const;
    QString reqLongitude() const;
    QString reqLatitude() const;
    QString reqType() const;
    QString reqLectureMetrique() const;
    QString reqSegmentRue() const;
    QString reqNumBorne() const;
    QString reqCoteRue() const;

	public slots:
		void enregistreStationnement();
		void annuler();

private:
    Ui::interfaceBorneStationnementClass ui;
};

#endif // INTERFACEBORNESTATIONNEMENT_H
