/********************************************************************************
** Form generated from reading UI file 'interfacesupprimer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACESUPPRIMER_H
#define UI_INTERFACESUPPRIMER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_interfaceSupprimerClass
{
public:
    QLabel *label_2;
    QPushButton *boutton_supprimer;
    QLineEdit *identifiant;
    QLabel *label;

    void setupUi(QDialog *interfaceSupprimerClass)
    {
        if (interfaceSupprimerClass->objectName().isEmpty())
            interfaceSupprimerClass->setObjectName(QString::fromUtf8("interfaceSupprimerClass"));
        interfaceSupprimerClass->resize(400, 300);
        label_2 = new QLabel(interfaceSupprimerClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 281, 31));
        boutton_supprimer = new QPushButton(interfaceSupprimerClass);
        boutton_supprimer->setObjectName(QString::fromUtf8("boutton_supprimer"));
        boutton_supprimer->setGeometry(QRect(259, 227, 101, 31));
        boutton_supprimer->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 53, 36);\n"
"font: 9pt \"Noto Serif Armenian\";"));
        identifiant = new QLineEdit(interfaceSupprimerClass);
        identifiant->setObjectName(QString::fromUtf8("identifiant"));
        identifiant->setGeometry(QRect(130, 140, 231, 31));
        identifiant->setStyleSheet(QString::fromUtf8("selection-color:  rgb(184, 217, 35);\n"
"border-color: rgb(252, 152, 11);\n"
"font: italic 10pt \"Noto Sans\";"));
        label = new QLabel(interfaceSupprimerClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 301, 20));

        retranslateUi(interfaceSupprimerClass);

        QMetaObject::connectSlotsByName(interfaceSupprimerClass);
    } // setupUi

    void retranslateUi(QDialog *interfaceSupprimerClass)
    {
        interfaceSupprimerClass->setWindowTitle(QApplication::translate("interfaceSupprimerClass", "Supprimer Borne", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("interfaceSupprimerClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">entrer l'identifiant de la borne a supprimer :</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        boutton_supprimer->setToolTip(QApplication::translate("interfaceSupprimerClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Serif Armenian'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; font-style:italic;\">supprimer</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        boutton_supprimer->setText(QApplication::translate("interfaceSupprimerClass", "supprimer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("interfaceSupprimerClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">Supprimer une Borne du Registre</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class interfaceSupprimerClass: public Ui_interfaceSupprimerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACESUPPRIMER_H
