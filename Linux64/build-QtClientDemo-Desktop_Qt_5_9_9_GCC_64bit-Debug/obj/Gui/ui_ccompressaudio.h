/********************************************************************************
** Form generated from reading UI file 'ccompressaudio.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCOMPRESSAUDIO_H
#define UI_CCOMPRESSAUDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CCompressAudioClass
{
public:
    QPushButton *btnExit;
    QPushButton *btnSave;
    QPushButton *btnRefresh;
    QComboBox *comboAudioType;
    QLabel *label;

    void setupUi(QDialog *CCompressAudioClass)
    {
        if (CCompressAudioClass->objectName().isEmpty())
            CCompressAudioClass->setObjectName(QStringLiteral("CCompressAudioClass"));
        CCompressAudioClass->resize(412, 271);
        btnExit = new QPushButton(CCompressAudioClass);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setGeometry(QRect(280, 200, 75, 23));
        btnSave = new QPushButton(CCompressAudioClass);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setGeometry(QRect(190, 200, 75, 23));
        btnRefresh = new QPushButton(CCompressAudioClass);
        btnRefresh->setObjectName(QStringLiteral("btnRefresh"));
        btnRefresh->setGeometry(QRect(60, 200, 75, 23));
        comboAudioType = new QComboBox(CCompressAudioClass);
        comboAudioType->setObjectName(QStringLiteral("comboAudioType"));
        comboAudioType->setGeometry(QRect(215, 100, 141, 31));
        label = new QLabel(CCompressAudioClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 100, 181, 31));

        retranslateUi(CCompressAudioClass);

        QMetaObject::connectSlotsByName(CCompressAudioClass);
    } // setupUi

    void retranslateUi(QDialog *CCompressAudioClass)
    {
        CCompressAudioClass->setWindowTitle(QApplication::translate("CCompressAudioClass", "CCompressAudio", Q_NULLPTR));
        btnExit->setText(QApplication::translate("CCompressAudioClass", "Cannel", Q_NULLPTR));
        btnSave->setText(QApplication::translate("CCompressAudioClass", "Confirm", Q_NULLPTR));
        btnRefresh->setText(QApplication::translate("CCompressAudioClass", "Update", Q_NULLPTR));
        label->setText(QApplication::translate("CCompressAudioClass", "Audio talk code", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CCompressAudioClass: public Ui_CCompressAudioClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCOMPRESSAUDIO_H
