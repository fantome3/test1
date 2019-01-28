#ifndef BORNEINTERFACE_H
#define BORNEINTERFACE_H

#include <QtGui/QMainWindow>
#include "ui_borneinterface.h"
#include "RegistreBorne.h"

class BorneInterface : public QMainWindow
{
    Q_OBJECT

public:
    BorneInterface(QWidget *parent = 0);
    ~BorneInterface();
    void affiche() const;

public slots:
	void slotLanceDialogueStationnement();
	void slotLanceDialogueFontaine();
	void slotLanceDialogueSupprimer();

private:
    Ui::BorneInterfaceClass ui;
    bornesQuebec::RegistreBorne registre;
};

#endif // BORNEINTERFACE_H
