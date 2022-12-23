/********************************************************************************
** Form generated from reading UI file 'calarminptz.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALARMINPTZ_H
#define UI_CALARMINPTZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAlarmInPTZClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *rBtnPreset;
    QLineEdit *editPresetNo;
    QRadioButton *rBtnCruise;
    QLineEdit *editCruiseNo;
    QRadioButton *rBtnPtzTrack;
    QLineEdit *editPtzTrackNO;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *comboChannel;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QPushButton *btnSave;
    QPushButton *btnExit;

    void setupUi(QDialog *CAlarmInPTZClass)
    {
        if (CAlarmInPTZClass->objectName().isEmpty())
            CAlarmInPTZClass->setObjectName(QStringLiteral("CAlarmInPTZClass"));
        CAlarmInPTZClass->resize(400, 300);
        layoutWidget = new QWidget(CAlarmInPTZClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 90, 232, 111));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rBtnPreset = new QRadioButton(layoutWidget);
        rBtnPreset->setObjectName(QStringLiteral("rBtnPreset"));

        gridLayout->addWidget(rBtnPreset, 0, 0, 1, 1);

        editPresetNo = new QLineEdit(layoutWidget);
        editPresetNo->setObjectName(QStringLiteral("editPresetNo"));

        gridLayout->addWidget(editPresetNo, 0, 1, 1, 1);

        rBtnCruise = new QRadioButton(layoutWidget);
        rBtnCruise->setObjectName(QStringLiteral("rBtnCruise"));

        gridLayout->addWidget(rBtnCruise, 1, 0, 1, 1);

        editCruiseNo = new QLineEdit(layoutWidget);
        editCruiseNo->setObjectName(QStringLiteral("editCruiseNo"));

        gridLayout->addWidget(editCruiseNo, 1, 1, 1, 1);

        rBtnPtzTrack = new QRadioButton(layoutWidget);
        rBtnPtzTrack->setObjectName(QStringLiteral("rBtnPtzTrack"));

        gridLayout->addWidget(rBtnPtzTrack, 2, 0, 1, 1);

        editPtzTrackNO = new QLineEdit(layoutWidget);
        editPtzTrackNO->setObjectName(QStringLiteral("editPtzTrackNO"));

        gridLayout->addWidget(editPtzTrackNO, 2, 1, 1, 1);

        layoutWidget1 = new QWidget(CAlarmInPTZClass);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 40, 221, 31));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        comboChannel = new QComboBox(layoutWidget1);
        comboChannel->setObjectName(QStringLiteral("comboChannel"));

        gridLayout_2->addWidget(comboChannel, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(CAlarmInPTZClass);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(100, 230, 181, 27));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        btnSave = new QPushButton(layoutWidget2);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        gridLayout_3->addWidget(btnSave, 0, 0, 1, 1);

        btnExit = new QPushButton(layoutWidget2);
        btnExit->setObjectName(QStringLiteral("btnExit"));

        gridLayout_3->addWidget(btnExit, 0, 1, 1, 1);


        retranslateUi(CAlarmInPTZClass);

        QMetaObject::connectSlotsByName(CAlarmInPTZClass);
    } // setupUi

    void retranslateUi(QDialog *CAlarmInPTZClass)
    {
        CAlarmInPTZClass->setWindowTitle(QApplication::translate("CAlarmInPTZClass", "CAlarmInPTZ", Q_NULLPTR));
        rBtnPreset->setText(QApplication::translate("CAlarmInPTZClass", "Preset", Q_NULLPTR));
        rBtnCruise->setText(QApplication::translate("CAlarmInPTZClass", "Sequence", Q_NULLPTR));
        rBtnPtzTrack->setText(QApplication::translate("CAlarmInPTZClass", "Cruise", Q_NULLPTR));
        label->setText(QApplication::translate("CAlarmInPTZClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Channel No.</p></body></html>", Q_NULLPTR));
        btnSave->setText(QApplication::translate("CAlarmInPTZClass", "Confirm", Q_NULLPTR));
        btnExit->setText(QApplication::translate("CAlarmInPTZClass", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CAlarmInPTZClass: public Ui_CAlarmInPTZClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALARMINPTZ_H
