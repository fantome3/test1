/********************************************************************************
** Form generated from reading UI file 'borneinterface.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORNEINTERFACE_H
#define UI_BORNEINTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BorneInterfaceClass
{
public:
    QAction *actionSupprimer;
    QAction *actionQuitter;
    QAction *actionBorne_station;
    QAction *actionBorne_fontaine;
    QWidget *centralwidget;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QMenu *menuOp_ration_sur_le_Registre;
    QMenu *menuAjouter_une_Borne;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BorneInterfaceClass)
    {
        if (BorneInterfaceClass->objectName().isEmpty())
            BorneInterfaceClass->setObjectName(QString::fromUtf8("BorneInterfaceClass"));
        BorneInterfaceClass->resize(712, 314);
        actionSupprimer = new QAction(BorneInterfaceClass);
        actionSupprimer->setObjectName(QString::fromUtf8("actionSupprimer"));
        actionQuitter = new QAction(BorneInterfaceClass);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionBorne_station = new QAction(BorneInterfaceClass);
        actionBorne_station->setObjectName(QString::fromUtf8("actionBorne_station"));
        actionBorne_fontaine = new QAction(BorneInterfaceClass);
        actionBorne_fontaine->setObjectName(QString::fromUtf8("actionBorne_fontaine"));
        centralwidget = new QWidget(BorneInterfaceClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 10, 261, 20));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(130, 40, 461, 211));
        BorneInterfaceClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BorneInterfaceClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 712, 25));
        menuOp_ration_sur_le_Registre = new QMenu(menubar);
        menuOp_ration_sur_le_Registre->setObjectName(QString::fromUtf8("menuOp_ration_sur_le_Registre"));
        menuAjouter_une_Borne = new QMenu(menuOp_ration_sur_le_Registre);
        menuAjouter_une_Borne->setObjectName(QString::fromUtf8("menuAjouter_une_Borne"));
        BorneInterfaceClass->setMenuBar(menubar);
        statusbar = new QStatusBar(BorneInterfaceClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BorneInterfaceClass->setStatusBar(statusbar);

        menubar->addAction(menuOp_ration_sur_le_Registre->menuAction());
        menuOp_ration_sur_le_Registre->addAction(menuAjouter_une_Borne->menuAction());
        menuOp_ration_sur_le_Registre->addSeparator();
        menuOp_ration_sur_le_Registre->addAction(actionSupprimer);
        menuOp_ration_sur_le_Registre->addSeparator();
        menuOp_ration_sur_le_Registre->addAction(actionQuitter);
        menuAjouter_une_Borne->addAction(actionBorne_station);
        menuAjouter_une_Borne->addAction(actionBorne_fontaine);

        retranslateUi(BorneInterfaceClass);
        QObject::connect(actionQuitter, SIGNAL(destroyed(QObject*)), BorneInterfaceClass, SLOT(close()));

        QMetaObject::connectSlotsByName(BorneInterfaceClass);
    } // setupUi

    void retranslateUi(QMainWindow *BorneInterfaceClass)
    {
        BorneInterfaceClass->setWindowTitle(QApplication::translate("BorneInterfaceClass", "TP4 : Gestion des bornes dans la ville de Qu\303\251bec", 0, QApplication::UnicodeUTF8));
        actionSupprimer->setText(QApplication::translate("BorneInterfaceClass", "Supprimer une Borne", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("BorneInterfaceClass", "Quitter", 0, QApplication::UnicodeUTF8));
        actionBorne_station->setText(QApplication::translate("BorneInterfaceClass", "Borne Stationnement", 0, QApplication::UnicodeUTF8));
        actionBorne_fontaine->setText(QApplication::translate("BorneInterfaceClass", "Borne Fontaine", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BorneInterfaceClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; text-decoration: underline;\">BORNES PRESENTES DANS LE </span><span style=\" font-size:10pt; font-weight:600; text-decoration: underline;\">REGISTRE </span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        menuOp_ration_sur_le_Registre->setTitle(QApplication::translate("BorneInterfaceClass", "Op\303\251ration sur le Registre", 0, QApplication::UnicodeUTF8));
        menuAjouter_une_Borne->setTitle(QApplication::translate("BorneInterfaceClass", "Ajouter une Borne", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BorneInterfaceClass: public Ui_BorneInterfaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORNEINTERFACE_H
