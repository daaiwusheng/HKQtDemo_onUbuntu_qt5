/********************************************************************************
** Form generated from reading UI file 'formatdisk.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMATDISK_H
#define UI_FORMATDISK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_FormatDiskClass
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton_format;
    QPushButton *pushButton_exit;
    QSlider *horizontalSlider;

    void setupUi(QDialog *FormatDiskClass)
    {
        if (FormatDiskClass->objectName().isEmpty())
            FormatDiskClass->setObjectName(QStringLiteral("FormatDiskClass"));
        FormatDiskClass->resize(379, 241);
        comboBox = new QComboBox(FormatDiskClass);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(150, 40, 151, 22));
        label = new QLabel(FormatDiskClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 91, 31));
        pushButton_format = new QPushButton(FormatDiskClass);
        pushButton_format->setObjectName(QStringLiteral("pushButton_format"));
        pushButton_format->setGeometry(QRect(40, 100, 75, 23));
        pushButton_exit = new QPushButton(FormatDiskClass);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(220, 100, 81, 23));
        horizontalSlider = new QSlider(FormatDiskClass);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(40, 140, 261, 21));
        horizontalSlider->setOrientation(Qt::Horizontal);

        retranslateUi(FormatDiskClass);

        QMetaObject::connectSlotsByName(FormatDiskClass);
    } // setupUi

    void retranslateUi(QDialog *FormatDiskClass)
    {
        FormatDiskClass->setWindowTitle(QApplication::translate("FormatDiskClass", "FormatDisk", Q_NULLPTR));
        label->setText(QApplication::translate("FormatDiskClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Disk</span></p></body></html>", Q_NULLPTR));
        pushButton_format->setText(QApplication::translate("FormatDiskClass", "Format", Q_NULLPTR));
        pushButton_exit->setText(QApplication::translate("FormatDiskClass", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormatDiskClass: public Ui_FormatDiskClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMATDISK_H
