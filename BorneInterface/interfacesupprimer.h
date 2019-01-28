#ifndef INTERFACESUPPRIMER_H
#define INTERFACESUPPRIMER_H

#include <QtGui/QDialog>
#include "ui_interfacesupprimer.h"

class interfaceSupprimer : public QDialog
{
    Q_OBJECT

public:
    interfaceSupprimer(QWidget *parent = 0);
    ~interfaceSupprimer();

    QString ReqIdentifiant() const;

    public slots:
    	void slotsBouttonSupprime();

private:
    Ui::interfaceSupprimerClass ui;
};

#endif // INTERFACESUPPRIMER_H
