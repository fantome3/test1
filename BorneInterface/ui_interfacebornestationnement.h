/********************************************************************************
** Form generated from reading UI file 'interfacebornestationnement.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACEBORNESTATIONNEMENT_H
#define UI_INTERFACEBORNESTATIONNEMENT_H

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

class Ui_interfaceBorneStationnementClass
{
public:
    QLabel *label_6;
    QLabel *label_9;
    QLineEdit *lectureMetrique;
    QLabel *label;
    QLineEdit *direction;
    QLineEdit *longitude;
    QLabel *label_2;
    QLineEdit *numBorne;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *coteRue;
    QLabel *label_10;
    QLineEdit *type;
    QLabel *label_5;
    QLineEdit *identifiant;
    QLabel *label_4;
    QPushButton *ajouter;
    QLineEdit *segmentRue;
    QPushButton *annuler;
    QLabel *label_11;
    QLineEdit *nomTopographique;
    QLabel *label_3;
    QLineEdit *latitude;

    void setupUi(QDialog *interfaceBorneStationnementClass)
    {
        if (interfaceBorneStationnementClass->objectName().isEmpty())
            interfaceBorneStationnementClass->setObjectName(QString::fromUtf8("interfaceBorneStationnementClass"));
        interfaceBorneStationnementClass->resize(440, 580);
        label_6 = new QLabel(interfaceBorneStationnementClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 300, 111, 17));
        label_9 = new QLabel(interfaceBorneStationnementClass);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 500, 111, 17));
        lectureMetrique = new QLineEdit(interfaceBorneStationnementClass);
        lectureMetrique->setObjectName(QString::fromUtf8("lectureMetrique"));
        lectureMetrique->setGeometry(QRect(220, 340, 191, 27));
        label = new QLabel(interfaceBorneStationnementClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 150, 131, 17));
        direction = new QLineEdit(interfaceBorneStationnementClass);
        direction->setObjectName(QString::fromUtf8("direction"));
        direction->setGeometry(QRect(220, 90, 191, 27));
        longitude = new QLineEdit(interfaceBorneStationnementClass);
        longitude->setObjectName(QString::fromUtf8("longitude"));
        longitude->setGeometry(QRect(220, 190, 191, 27));
        label_2 = new QLabel(interfaceBorneStationnementClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 111, 17));
        numBorne = new QLineEdit(interfaceBorneStationnementClass);
        numBorne->setObjectName(QString::fromUtf8("numBorne"));
        numBorne->setGeometry(QRect(220, 440, 191, 27));
        label_7 = new QLabel(interfaceBorneStationnementClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 350, 111, 17));
        label_8 = new QLabel(interfaceBorneStationnementClass);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 400, 111, 17));
        coteRue = new QLineEdit(interfaceBorneStationnementClass);
        coteRue->setObjectName(QString::fromUtf8("coteRue"));
        coteRue->setGeometry(QRect(220, 490, 191, 27));
        label_10 = new QLabel(interfaceBorneStationnementClass);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 450, 131, 17));
        type = new QLineEdit(interfaceBorneStationnementClass);
        type->setObjectName(QString::fromUtf8("type"));
        type->setGeometry(QRect(220, 290, 191, 27));
        label_5 = new QLabel(interfaceBorneStationnementClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 200, 111, 17));
        identifiant = new QLineEdit(interfaceBorneStationnementClass);
        identifiant->setObjectName(QString::fromUtf8("identifiant"));
        identifiant->setGeometry(QRect(220, 40, 191, 27));
        label_4 = new QLabel(interfaceBorneStationnementClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 250, 111, 17));
        ajouter = new QPushButton(interfaceBorneStationnementClass);
        ajouter->setObjectName(QString::fromUtf8("ajouter"));
        ajouter->setGeometry(QRect(330, 540, 80, 28));
        ajouter->setStyleSheet(QString::fromUtf8("background-color: rgb(24, 8, 255);\n"
"font: 10pt \"Noto Sans\";"));
        segmentRue = new QLineEdit(interfaceBorneStationnementClass);
        segmentRue->setObjectName(QString::fromUtf8("segmentRue"));
        segmentRue->setGeometry(QRect(220, 390, 191, 27));
        annuler = new QPushButton(interfaceBorneStationnementClass);
        annuler->setObjectName(QString::fromUtf8("annuler"));
        annuler->setGeometry(QRect(220, 540, 80, 28));
        annuler->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 45, 8);"));
        label_11 = new QLabel(interfaceBorneStationnementClass);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 10, 361, 20));
        nomTopographique = new QLineEdit(interfaceBorneStationnementClass);
        nomTopographique->setObjectName(QString::fromUtf8("nomTopographique"));
        nomTopographique->setGeometry(QRect(220, 140, 191, 27));
        label_3 = new QLabel(interfaceBorneStationnementClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 50, 111, 17));
        latitude = new QLineEdit(interfaceBorneStationnementClass);
        latitude->setObjectName(QString::fromUtf8("latitude"));
        latitude->setGeometry(QRect(220, 240, 191, 27));

        retranslateUi(interfaceBorneStationnementClass);

        QMetaObject::connectSlotsByName(interfaceBorneStationnementClass);
    } // setupUi

    void retranslateUi(QDialog *interfaceBorneStationnementClass)
    {
        interfaceBorneStationnementClass->setWindowTitle(QApplication::translate("interfaceBorneStationnementClass", "Borne Stationnement", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("interfaceBorneStationnementClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Type :</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("interfaceBorneStationnementClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">C\303\264t\303\251 de la Rue :</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("interfaceBorneStationnementClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Nom topographique :</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("interfaceBorneStationnementClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Direction :</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("interfaceBorneStationnementClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Lecture m\303\251trique :</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("interfaceBorneStationnementClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Segment de Rue :</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("interfaceBorneStationnementClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Num\303\251ro de la borne :</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("interfaceBorneStationnementClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Longitude :</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("interfaceBorneStationnementClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Latitude :</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ajouter->setText(QApplication::translate("interfaceBorneStationnementClass", "Ajouter", 0, QApplication::UnicodeUTF8));
        annuler->setText(QApplication::translate("interfaceBorneStationnementClass", "Annuler", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("interfaceBorneStationnementClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-style:italic; color:#aa0000;\">Entrez les informations de la borne stationnement</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("interfaceBorneStationnementClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Identifiant :</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class interfaceBorneStationnementClass: public Ui_interfaceBorneStationnementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACEBORNESTATIONNEMENT_H
