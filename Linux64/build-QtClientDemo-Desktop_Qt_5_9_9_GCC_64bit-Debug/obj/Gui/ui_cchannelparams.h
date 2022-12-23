/********************************************************************************
** Form generated from reading UI file 'cchannelparams.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCHANNELPARAMS_H
#define UI_CCHANNELPARAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CChannelParamsClass
{
public:
    QLabel *label_2;
    QComboBox *comboChannelNo;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_6;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_7;
    QComboBox *comboStreamType;
    QComboBox *comboVideoBit;
    QComboBox *comboAudioEncType;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLineEdit *editChannelName;
    QLabel *label;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_13;
    QLabel *label_13;
    QLineEdit *editVideoBit;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_5;
    QComboBox *comboPicQuality;
    QComboBox *comboVideoFrameRate;
    QComboBox *comboVideoEncType;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QComboBox *comboPressType;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboResolution;
    QLineEdit *editIntervalFrameI;
    QWidget *layoutWidget7;
    QGridLayout *gridLayout_11;
    QLabel *label_17;
    QLabel *label_18;
    QWidget *layoutWidget8;
    QGridLayout *gridLayout_12;
    QComboBox *comboBitrateType;
    QComboBox *comboIntervalBPFrame;
    QLabel *label_5;
    QFrame *line;
    QLabel *label_6;
    QFrame *line_2;
    QLabel *label_7;
    QFrame *line_3;
    QWidget *layoutWidget9;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout;
    QCheckBox *checkboVideoRecord;
    QPushButton *btnRemoteRecord;
    QGridLayout *gridLayout_8;
    QLabel *label_20;
    QLineEdit *editDurationTime;
    QLabel *label_16;
    QWidget *layoutWidget10;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_10;
    QLabel *label_19;
    QComboBox *comboPreRecordTime;
    QCheckBox *checkboRedundancy;
    QWidget *layoutWidget11;
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_14;
    QLabel *label_22;
    QComboBox *comboRecordDelay;
    QCheckBox *checkAudioRec;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_18;
    QCheckBox *checkMotion;
    QPushButton *btnMotion;
    QCheckBox *checkHide;
    QPushButton *btnHide;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_24;
    QCheckBox *checkboShowChanName;
    QGridLayout *gridLayout_25;
    QLabel *label_31;
    QLineEdit *editShowNameTopLeftX;
    QLabel *label_32;
    QLineEdit *editShowNameTopLeftY;
    QLabel *label_34;
    QWidget *layoutWidget12;
    QGridLayout *gridLayout_17;
    QCheckBox *checkShelter;
    QPushButton *btnShelter;
    QCheckBox *checkboVILost;
    QPushButton *btnVILost;
    QWidget *layoutWidget13;
    QGridLayout *gridLayout_19;
    QLabel *label_23;
    QLineEdit *editBrightness;
    QLabel *label_26;
    QLineEdit *editContrast;
    QLabel *label_24;
    QLineEdit *editSaturation;
    QLabel *label_25;
    QLineEdit *editHue;
    QWidget *layoutWidget14;
    QGridLayout *gridLayout_21;
    QCheckBox *checkShowOsd;
    QGridLayout *gridLayout_20;
    QLabel *label_27;
    QLineEdit *editOSDTopLeftX;
    QLabel *label_28;
    QLineEdit *editOSDTopLeftY;
    QWidget *layoutWidget15;
    QGridLayout *gridLayout_22;
    QCheckBox *checkDispWeek;
    QLabel *label_21;
    QComboBox *comboHourOsdType;
    QWidget *layoutWidget16;
    QGridLayout *gridLayout_23;
    QLabel *label_29;
    QComboBox *comboOSDAttrib;
    QLabel *label_30;
    QComboBox *comboOSDType;
    QWidget *layoutWidget17;
    QGridLayout *gridLayout_27;
    QLabel *label_36;
    QLineEdit *editShowStringTopLeftX;
    QLabel *label_35;
    QLineEdit *editShowStringTopLeftY;
    QWidget *layoutWidget18;
    QGridLayout *gridLayout_28;
    QLabel *label_37;
    QLineEdit *editString;
    QWidget *layoutWidget19;
    QGridLayout *gridLayout_29;
    QGridLayout *gridLayout_26;
    QLabel *label_33;
    QComboBox *comboStringNo;
    QCheckBox *checkShowString;

    void setupUi(QWidget *CChannelParamsClass)
    {
        if (CChannelParamsClass->objectName().isEmpty())
            CChannelParamsClass->setObjectName(QStringLiteral("CChannelParamsClass"));
        CChannelParamsClass->resize(671, 621);
        label_2 = new QLabel(CChannelParamsClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 10, 61, 21));
        comboChannelNo = new QComboBox(CChannelParamsClass);
        comboChannelNo->setObjectName(QStringLiteral("comboChannelNo"));
        comboChannelNo->setGeometry(QRect(176, 10, 101, 21));
        layoutWidget_4 = new QWidget(CChannelParamsClass);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(171, 101, 74, 77));
        gridLayout_6 = new QGridLayout(layoutWidget_4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_6->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(layoutWidget_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_6->addWidget(label_11, 1, 0, 1, 1);

        label_12 = new QLabel(layoutWidget_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_6->addWidget(label_12, 2, 0, 1, 1);

        layoutWidget_5 = new QWidget(CChannelParamsClass);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(240, 100, 71, 77));
        gridLayout_7 = new QGridLayout(layoutWidget_5);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        comboStreamType = new QComboBox(layoutWidget_5);
        comboStreamType->setObjectName(QStringLiteral("comboStreamType"));

        gridLayout_7->addWidget(comboStreamType, 0, 0, 1, 1);

        comboVideoBit = new QComboBox(layoutWidget_5);
        comboVideoBit->setObjectName(QStringLiteral("comboVideoBit"));

        gridLayout_7->addWidget(comboVideoBit, 1, 0, 1, 1);

        comboAudioEncType = new QComboBox(layoutWidget_5);
        comboAudioEncType->setObjectName(QStringLiteral("comboAudioEncType"));

        gridLayout_7->addWidget(comboAudioEncType, 2, 0, 1, 1);

        line_4 = new QFrame(CChannelParamsClass);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(20, 350, 641, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(CChannelParamsClass);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(20, 420, 641, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(CChannelParamsClass);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(180, 470, 481, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(CChannelParamsClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 10, 189, 23));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        editChannelName = new QLineEdit(layoutWidget);
        editChannelName->setObjectName(QStringLiteral("editChannelName"));

        gridLayout_2->addWidget(editChannelName, 0, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        layoutWidget1 = new QWidget(CChannelParamsClass);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(310, 130, 71, 23));
        gridLayout_13 = new QGridLayout(layoutWidget1);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_13->addWidget(label_13, 0, 1, 1, 1);

        editVideoBit = new QLineEdit(layoutWidget1);
        editVideoBit->setObjectName(QStringLiteral("editVideoBit"));

        gridLayout_13->addWidget(editVideoBit, 0, 0, 1, 1);

        layoutWidget2 = new QWidget(CChannelParamsClass);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(100, 101, 71, 77));
        gridLayout_5 = new QGridLayout(layoutWidget2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        comboPicQuality = new QComboBox(layoutWidget2);
        comboPicQuality->setObjectName(QStringLiteral("comboPicQuality"));

        gridLayout_5->addWidget(comboPicQuality, 0, 0, 1, 1);

        comboVideoFrameRate = new QComboBox(layoutWidget2);
        comboVideoFrameRate->setObjectName(QStringLiteral("comboVideoFrameRate"));

        gridLayout_5->addWidget(comboVideoFrameRate, 1, 0, 1, 1);

        comboVideoEncType = new QComboBox(layoutWidget2);
        comboVideoEncType->setObjectName(QStringLiteral("comboVideoEncType"));

        gridLayout_5->addWidget(comboVideoEncType, 2, 0, 1, 1);

        layoutWidget3 = new QWidget(CChannelParamsClass);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 101, 74, 77));
        gridLayout_4 = new QGridLayout(layoutWidget3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 2, 0, 1, 1);

        layoutWidget4 = new QWidget(CChannelParamsClass);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(30, 70, 241, 23));
        gridLayout_3 = new QGridLayout(layoutWidget4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        comboPressType = new QComboBox(layoutWidget4);
        comboPressType->setObjectName(QStringLiteral("comboPressType"));

        gridLayout_3->addWidget(comboPressType, 0, 1, 1, 1);

        layoutWidget5 = new QWidget(CChannelParamsClass);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(380, 100, 104, 51));
        verticalLayout = new QVBoxLayout(layoutWidget5);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget5);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout->addWidget(label_14);

        label_15 = new QLabel(layoutWidget5);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout->addWidget(label_15);

        layoutWidget6 = new QWidget(CChannelParamsClass);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(451, 101, 71, 50));
        verticalLayout_2 = new QVBoxLayout(layoutWidget6);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboResolution = new QComboBox(layoutWidget6);
        comboResolution->setObjectName(QStringLiteral("comboResolution"));

        verticalLayout_2->addWidget(comboResolution);

        editIntervalFrameI = new QLineEdit(layoutWidget6);
        editIntervalFrameI->setObjectName(QStringLiteral("editIntervalFrameI"));

        verticalLayout_2->addWidget(editIntervalFrameI);

        layoutWidget7 = new QWidget(CChannelParamsClass);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(523, 101, 74, 51));
        gridLayout_11 = new QGridLayout(layoutWidget7);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget7);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_11->addWidget(label_17, 0, 0, 1, 1);

        label_18 = new QLabel(layoutWidget7);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_11->addWidget(label_18, 1, 0, 1, 1);

        layoutWidget8 = new QWidget(CChannelParamsClass);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(591, 101, 71, 50));
        gridLayout_12 = new QGridLayout(layoutWidget8);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        comboBitrateType = new QComboBox(layoutWidget8);
        comboBitrateType->setObjectName(QStringLiteral("comboBitrateType"));

        gridLayout_12->addWidget(comboBitrateType, 0, 0, 1, 1);

        comboIntervalBPFrame = new QComboBox(layoutWidget8);
        comboIntervalBPFrame->setObjectName(QStringLiteral("comboIntervalBPFrame"));

        gridLayout_12->addWidget(comboIntervalBPFrame, 1, 0, 1, 1);

        label_5 = new QLabel(CChannelParamsClass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(21, 40, 171, 21));
        line = new QFrame(CChannelParamsClass);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(199, 40, 461, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(CChannelParamsClass);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 185, 121, 21));
        line_2 = new QFrame(CChannelParamsClass);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(139, 186, 521, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(CChannelParamsClass);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(21, 269, 131, 21));
        line_3 = new QFrame(CChannelParamsClass);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(149, 270, 511, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        layoutWidget9 = new QWidget(CChannelParamsClass);
        layoutWidget9->setObjectName(QStringLiteral("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(30, 210, 211, 56));
        gridLayout_9 = new QGridLayout(layoutWidget9);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkboVideoRecord = new QCheckBox(layoutWidget9);
        checkboVideoRecord->setObjectName(QStringLiteral("checkboVideoRecord"));

        gridLayout->addWidget(checkboVideoRecord, 0, 0, 1, 1);

        btnRemoteRecord = new QPushButton(layoutWidget9);
        btnRemoteRecord->setObjectName(QStringLiteral("btnRemoteRecord"));

        gridLayout->addWidget(btnRemoteRecord, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_20 = new QLabel(layoutWidget9);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_8->addWidget(label_20, 0, 0, 1, 1);

        editDurationTime = new QLineEdit(layoutWidget9);
        editDurationTime->setObjectName(QStringLiteral("editDurationTime"));

        gridLayout_8->addWidget(editDurationTime, 0, 1, 1, 1);

        label_16 = new QLabel(layoutWidget9);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_8->addWidget(label_16, 0, 2, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 1, 0, 1, 1);

        layoutWidget10 = new QWidget(CChannelParamsClass);
        layoutWidget10->setObjectName(QStringLiteral("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(260, 210, 161, 61));
        gridLayout_15 = new QGridLayout(layoutWidget10);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_19 = new QLabel(layoutWidget10);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_10->addWidget(label_19, 0, 0, 1, 1);

        comboPreRecordTime = new QComboBox(layoutWidget10);
        comboPreRecordTime->setObjectName(QStringLiteral("comboPreRecordTime"));

        gridLayout_10->addWidget(comboPreRecordTime, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_10, 0, 0, 1, 1);

        checkboRedundancy = new QCheckBox(layoutWidget10);
        checkboRedundancy->setObjectName(QStringLiteral("checkboRedundancy"));

        gridLayout_15->addWidget(checkboRedundancy, 1, 0, 1, 1);

        layoutWidget11 = new QWidget(CChannelParamsClass);
        layoutWidget11->setObjectName(QStringLiteral("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(450, 210, 151, 61));
        gridLayout_16 = new QGridLayout(layoutWidget11);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label_22 = new QLabel(layoutWidget11);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_14->addWidget(label_22, 0, 0, 1, 1);

        comboRecordDelay = new QComboBox(layoutWidget11);
        comboRecordDelay->setObjectName(QStringLiteral("comboRecordDelay"));

        gridLayout_14->addWidget(comboRecordDelay, 0, 1, 1, 1);


        gridLayout_16->addLayout(gridLayout_14, 0, 0, 1, 1);

        checkAudioRec = new QCheckBox(layoutWidget11);
        checkAudioRec->setObjectName(QStringLiteral("checkAudioRec"));

        gridLayout_16->addWidget(checkAudioRec, 1, 0, 1, 1);

        layoutWidget_2 = new QWidget(CChannelParamsClass);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(260, 300, 191, 54));
        gridLayout_18 = new QGridLayout(layoutWidget_2);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        checkMotion = new QCheckBox(layoutWidget_2);
        checkMotion->setObjectName(QStringLiteral("checkMotion"));

        gridLayout_18->addWidget(checkMotion, 0, 0, 1, 1);

        btnMotion = new QPushButton(layoutWidget_2);
        btnMotion->setObjectName(QStringLiteral("btnMotion"));

        gridLayout_18->addWidget(btnMotion, 0, 1, 1, 1);

        checkHide = new QCheckBox(layoutWidget_2);
        checkHide->setObjectName(QStringLiteral("checkHide"));

        gridLayout_18->addWidget(checkHide, 1, 0, 1, 1);

        btnHide = new QPushButton(layoutWidget_2);
        btnHide->setObjectName(QStringLiteral("btnHide"));

        gridLayout_18->addWidget(btnHide, 1, 1, 1, 1);

        layoutWidget_3 = new QWidget(CChannelParamsClass);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 440, 309, 25));
        gridLayout_24 = new QGridLayout(layoutWidget_3);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        gridLayout_24->setContentsMargins(0, 0, 0, 0);
        checkboShowChanName = new QCheckBox(layoutWidget_3);
        checkboShowChanName->setObjectName(QStringLiteral("checkboShowChanName"));

        gridLayout_24->addWidget(checkboShowChanName, 0, 0, 1, 1);

        gridLayout_25 = new QGridLayout();
        gridLayout_25->setSpacing(6);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        label_31 = new QLabel(layoutWidget_3);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_25->addWidget(label_31, 0, 0, 1, 1);

        editShowNameTopLeftX = new QLineEdit(layoutWidget_3);
        editShowNameTopLeftX->setObjectName(QStringLiteral("editShowNameTopLeftX"));

        gridLayout_25->addWidget(editShowNameTopLeftX, 0, 1, 1, 1);

        label_32 = new QLabel(layoutWidget_3);
        label_32->setObjectName(QStringLiteral("label_32"));

        gridLayout_25->addWidget(label_32, 0, 2, 1, 1);

        editShowNameTopLeftY = new QLineEdit(layoutWidget_3);
        editShowNameTopLeftY->setObjectName(QStringLiteral("editShowNameTopLeftY"));

        gridLayout_25->addWidget(editShowNameTopLeftY, 0, 3, 1, 1);


        gridLayout_24->addLayout(gridLayout_25, 0, 1, 1, 1);

        label_34 = new QLabel(CChannelParamsClass);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(20, 470, 151, 21));
        layoutWidget12 = new QWidget(CChannelParamsClass);
        layoutWidget12->setObjectName(QStringLiteral("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(30, 300, 221, 54));
        gridLayout_17 = new QGridLayout(layoutWidget12);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        checkShelter = new QCheckBox(layoutWidget12);
        checkShelter->setObjectName(QStringLiteral("checkShelter"));

        gridLayout_17->addWidget(checkShelter, 0, 0, 1, 1);

        btnShelter = new QPushButton(layoutWidget12);
        btnShelter->setObjectName(QStringLiteral("btnShelter"));

        gridLayout_17->addWidget(btnShelter, 0, 1, 1, 1);

        checkboVILost = new QCheckBox(layoutWidget12);
        checkboVILost->setObjectName(QStringLiteral("checkboVILost"));

        gridLayout_17->addWidget(checkboVILost, 1, 0, 1, 1);

        btnVILost = new QPushButton(layoutWidget12);
        btnVILost->setObjectName(QStringLiteral("btnVILost"));

        gridLayout_17->addWidget(btnVILost, 1, 1, 1, 1);

        layoutWidget13 = new QWidget(CChannelParamsClass);
        layoutWidget13->setObjectName(QStringLiteral("layoutWidget13"));
        layoutWidget13->setGeometry(QRect(460, 300, 206, 50));
        gridLayout_19 = new QGridLayout(layoutWidget13);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        gridLayout_19->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget13);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_19->addWidget(label_23, 0, 0, 1, 1);

        editBrightness = new QLineEdit(layoutWidget13);
        editBrightness->setObjectName(QStringLiteral("editBrightness"));

        gridLayout_19->addWidget(editBrightness, 0, 1, 1, 1);

        label_26 = new QLabel(layoutWidget13);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_19->addWidget(label_26, 0, 2, 1, 1);

        editContrast = new QLineEdit(layoutWidget13);
        editContrast->setObjectName(QStringLiteral("editContrast"));

        gridLayout_19->addWidget(editContrast, 0, 3, 1, 1);

        label_24 = new QLabel(layoutWidget13);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_19->addWidget(label_24, 1, 0, 1, 1);

        editSaturation = new QLineEdit(layoutWidget13);
        editSaturation->setObjectName(QStringLiteral("editSaturation"));

        gridLayout_19->addWidget(editSaturation, 1, 1, 1, 1);

        label_25 = new QLabel(layoutWidget13);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_19->addWidget(label_25, 1, 2, 1, 1);

        editHue = new QLineEdit(layoutWidget13);
        editHue->setObjectName(QStringLiteral("editHue"));

        gridLayout_19->addWidget(editHue, 1, 3, 1, 1);

        layoutWidget14 = new QWidget(CChannelParamsClass);
        layoutWidget14->setObjectName(QStringLiteral("layoutWidget14"));
        layoutWidget14->setGeometry(QRect(30, 360, 281, 25));
        gridLayout_21 = new QGridLayout(layoutWidget14);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        checkShowOsd = new QCheckBox(layoutWidget14);
        checkShowOsd->setObjectName(QStringLiteral("checkShowOsd"));

        gridLayout_21->addWidget(checkShowOsd, 0, 0, 1, 1);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setSpacing(6);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        label_27 = new QLabel(layoutWidget14);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_20->addWidget(label_27, 0, 0, 1, 1);

        editOSDTopLeftX = new QLineEdit(layoutWidget14);
        editOSDTopLeftX->setObjectName(QStringLiteral("editOSDTopLeftX"));

        gridLayout_20->addWidget(editOSDTopLeftX, 0, 1, 1, 1);

        label_28 = new QLabel(layoutWidget14);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_20->addWidget(label_28, 0, 2, 1, 1);

        editOSDTopLeftY = new QLineEdit(layoutWidget14);
        editOSDTopLeftY->setObjectName(QStringLiteral("editOSDTopLeftY"));

        gridLayout_20->addWidget(editOSDTopLeftY, 0, 3, 1, 1);


        gridLayout_21->addLayout(gridLayout_20, 0, 1, 1, 1);

        layoutWidget15 = new QWidget(CChannelParamsClass);
        layoutWidget15->setObjectName(QStringLiteral("layoutWidget15"));
        layoutWidget15->setGeometry(QRect(30, 390, 281, 31));
        gridLayout_22 = new QGridLayout(layoutWidget15);
        gridLayout_22->setSpacing(6);
        gridLayout_22->setContentsMargins(11, 11, 11, 11);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        gridLayout_22->setContentsMargins(0, 0, 0, 0);
        checkDispWeek = new QCheckBox(layoutWidget15);
        checkDispWeek->setObjectName(QStringLiteral("checkDispWeek"));

        gridLayout_22->addWidget(checkDispWeek, 0, 0, 1, 1);

        label_21 = new QLabel(layoutWidget15);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_22->addWidget(label_21, 0, 1, 1, 1);

        comboHourOsdType = new QComboBox(layoutWidget15);
        comboHourOsdType->setObjectName(QStringLiteral("comboHourOsdType"));

        gridLayout_22->addWidget(comboHourOsdType, 0, 2, 1, 1);

        layoutWidget16 = new QWidget(CChannelParamsClass);
        layoutWidget16->setObjectName(QStringLiteral("layoutWidget16"));
        layoutWidget16->setGeometry(QRect(340, 360, 284, 61));
        gridLayout_23 = new QGridLayout(layoutWidget16);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        gridLayout_23->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(layoutWidget16);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_23->addWidget(label_29, 0, 0, 1, 1);

        comboOSDAttrib = new QComboBox(layoutWidget16);
        comboOSDAttrib->setObjectName(QStringLiteral("comboOSDAttrib"));

        gridLayout_23->addWidget(comboOSDAttrib, 0, 1, 1, 1);

        label_30 = new QLabel(layoutWidget16);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_23->addWidget(label_30, 1, 0, 1, 1);

        comboOSDType = new QComboBox(layoutWidget16);
        comboOSDType->setObjectName(QStringLiteral("comboOSDType"));

        gridLayout_23->addWidget(comboOSDType, 1, 1, 1, 1);

        layoutWidget17 = new QWidget(CChannelParamsClass);
        layoutWidget17->setObjectName(QStringLiteral("layoutWidget17"));
        layoutWidget17->setGeometry(QRect(30, 530, 281, 23));
        gridLayout_27 = new QGridLayout(layoutWidget17);
        gridLayout_27->setSpacing(6);
        gridLayout_27->setContentsMargins(11, 11, 11, 11);
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        gridLayout_27->setContentsMargins(0, 0, 0, 0);
        label_36 = new QLabel(layoutWidget17);
        label_36->setObjectName(QStringLiteral("label_36"));

        gridLayout_27->addWidget(label_36, 0, 0, 1, 1);

        editShowStringTopLeftX = new QLineEdit(layoutWidget17);
        editShowStringTopLeftX->setObjectName(QStringLiteral("editShowStringTopLeftX"));

        gridLayout_27->addWidget(editShowStringTopLeftX, 0, 1, 1, 1);

        label_35 = new QLabel(layoutWidget17);
        label_35->setObjectName(QStringLiteral("label_35"));

        gridLayout_27->addWidget(label_35, 0, 2, 1, 1);

        editShowStringTopLeftY = new QLineEdit(layoutWidget17);
        editShowStringTopLeftY->setObjectName(QStringLiteral("editShowStringTopLeftY"));

        gridLayout_27->addWidget(editShowStringTopLeftY, 0, 3, 1, 1);

        layoutWidget18 = new QWidget(CChannelParamsClass);
        layoutWidget18->setObjectName(QStringLiteral("layoutWidget18"));
        layoutWidget18->setGeometry(QRect(370, 530, 241, 23));
        gridLayout_28 = new QGridLayout(layoutWidget18);
        gridLayout_28->setSpacing(6);
        gridLayout_28->setContentsMargins(11, 11, 11, 11);
        gridLayout_28->setObjectName(QStringLiteral("gridLayout_28"));
        gridLayout_28->setContentsMargins(0, 0, 0, 0);
        label_37 = new QLabel(layoutWidget18);
        label_37->setObjectName(QStringLiteral("label_37"));

        gridLayout_28->addWidget(label_37, 0, 0, 1, 1);

        editString = new QLineEdit(layoutWidget18);
        editString->setObjectName(QStringLiteral("editString"));

        gridLayout_28->addWidget(editString, 0, 1, 1, 1);

        layoutWidget19 = new QWidget(CChannelParamsClass);
        layoutWidget19->setObjectName(QStringLiteral("layoutWidget19"));
        layoutWidget19->setGeometry(QRect(30, 500, 282, 25));
        gridLayout_29 = new QGridLayout(layoutWidget19);
        gridLayout_29->setSpacing(6);
        gridLayout_29->setContentsMargins(11, 11, 11, 11);
        gridLayout_29->setObjectName(QStringLiteral("gridLayout_29"));
        gridLayout_29->setContentsMargins(0, 0, 0, 0);
        gridLayout_26 = new QGridLayout();
        gridLayout_26->setSpacing(6);
        gridLayout_26->setObjectName(QStringLiteral("gridLayout_26"));
        label_33 = new QLabel(layoutWidget19);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_26->addWidget(label_33, 0, 0, 1, 1);

        comboStringNo = new QComboBox(layoutWidget19);
        comboStringNo->setObjectName(QStringLiteral("comboStringNo"));

        gridLayout_26->addWidget(comboStringNo, 0, 1, 1, 1);


        gridLayout_29->addLayout(gridLayout_26, 0, 0, 1, 1);

        checkShowString = new QCheckBox(layoutWidget19);
        checkShowString->setObjectName(QStringLiteral("checkShowString"));

        gridLayout_29->addWidget(checkShowString, 0, 1, 1, 1);


        retranslateUi(CChannelParamsClass);

        QMetaObject::connectSlotsByName(CChannelParamsClass);
    } // setupUi

    void retranslateUi(QWidget *CChannelParamsClass)
    {
        CChannelParamsClass->setWindowTitle(QApplication::translate("CChannelParamsClass", "CChannelParams", Q_NULLPTR));
        label_2->setText(QApplication::translate("CChannelParamsClass", "channel No.", Q_NULLPTR));
        label_10->setText(QApplication::translate("CChannelParamsClass", "stream mode", Q_NULLPTR));
        label_11->setText(QApplication::translate("CChannelParamsClass", "max bitrate", Q_NULLPTR));
        label_12->setText(QApplication::translate("CChannelParamsClass", "audio format", Q_NULLPTR));
        label->setText(QApplication::translate("CChannelParamsClass", "channel name", Q_NULLPTR));
        label_13->setText(QApplication::translate("CChannelParamsClass", "kbps", Q_NULLPTR));
        label_4->setText(QApplication::translate("CChannelParamsClass", "image", Q_NULLPTR));
        label_8->setText(QApplication::translate("CChannelParamsClass", "frame rate", Q_NULLPTR));
        label_9->setText(QApplication::translate("CChannelParamsClass", "video format", Q_NULLPTR));
        label_3->setText(QApplication::translate("CChannelParamsClass", "encoding parameter type", Q_NULLPTR));
        label_14->setText(QApplication::translate("CChannelParamsClass", "resolution", Q_NULLPTR));
        label_15->setText(QApplication::translate("CChannelParamsClass", "I frame", Q_NULLPTR));
        label_17->setText(QApplication::translate("CChannelParamsClass", "bitrate", Q_NULLPTR));
        label_18->setText(QApplication::translate("CChannelParamsClass", "BP frame ", Q_NULLPTR));
        label_5->setText(QApplication::translate("CChannelParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt; color:#0000ff;\">encoding parameter setup</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("CChannelParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#0000ff;\">record parameter</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("CChannelParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#0000ff;\">image parameter setup</span></p></body></html>", Q_NULLPTR));
        checkboVideoRecord->setText(QApplication::translate("CChannelParamsClass", "schedule record", Q_NULLPTR));
        btnRemoteRecord->setText(QApplication::translate("CChannelParamsClass", "setup", Q_NULLPTR));
        label_20->setText(QApplication::translate("CChannelParamsClass", "save duration", Q_NULLPTR));
        label_16->setText(QApplication::translate("CChannelParamsClass", "day", Q_NULLPTR));
        label_19->setText(QApplication::translate("CChannelParamsClass", "pre-record", Q_NULLPTR));
        checkboRedundancy->setText(QApplication::translate("CChannelParamsClass", "redundancy record", Q_NULLPTR));
        label_22->setText(QApplication::translate("CChannelParamsClass", "delay record", Q_NULLPTR));
        checkAudioRec->setText(QApplication::translate("CChannelParamsClass", "record audio", Q_NULLPTR));
        checkMotion->setText(QApplication::translate("CChannelParamsClass", "motion detect", Q_NULLPTR));
        btnMotion->setText(QApplication::translate("CChannelParamsClass", "setup", Q_NULLPTR));
        checkHide->setText(QApplication::translate("CChannelParamsClass", "mask alarm", Q_NULLPTR));
        btnHide->setText(QApplication::translate("CChannelParamsClass", "setup", Q_NULLPTR));
        checkboShowChanName->setText(QApplication::translate("CChannelParamsClass", "diaplay channel name", Q_NULLPTR));
        label_31->setText(QApplication::translate("CChannelParamsClass", "X", Q_NULLPTR));
        label_32->setText(QApplication::translate("CChannelParamsClass", "Y", Q_NULLPTR));
        label_34->setText(QApplication::translate("CChannelParamsClass", "add OSD", Q_NULLPTR));
        checkShelter->setText(QApplication::translate("CChannelParamsClass", "mask", Q_NULLPTR));
        btnShelter->setText(QApplication::translate("CChannelParamsClass", "setup", Q_NULLPTR));
        checkboVILost->setText(QApplication::translate("CChannelParamsClass", "video loss alarm", Q_NULLPTR));
        btnVILost->setText(QApplication::translate("CChannelParamsClass", "setup", Q_NULLPTR));
        label_23->setText(QApplication::translate("CChannelParamsClass", "brightness", Q_NULLPTR));
        label_26->setText(QApplication::translate("CChannelParamsClass", "contrast", Q_NULLPTR));
        label_24->setText(QApplication::translate("CChannelParamsClass", "saturation", Q_NULLPTR));
        label_25->setText(QApplication::translate("CChannelParamsClass", "hue", Q_NULLPTR));
        checkShowOsd->setText(QApplication::translate("CChannelParamsClass", "display OSD", Q_NULLPTR));
        label_27->setText(QApplication::translate("CChannelParamsClass", "X", Q_NULLPTR));
        label_28->setText(QApplication::translate("CChannelParamsClass", "Y", Q_NULLPTR));
        checkDispWeek->setText(QApplication::translate("CChannelParamsClass", "display week", Q_NULLPTR));
        label_21->setText(QApplication::translate("CChannelParamsClass", "time format", Q_NULLPTR));
        label_29->setText(QApplication::translate("CChannelParamsClass", "OS property", Q_NULLPTR));
        label_30->setText(QApplication::translate("CChannelParamsClass", "date format", Q_NULLPTR));
        label_36->setText(QApplication::translate("CChannelParamsClass", "X", Q_NULLPTR));
        label_35->setText(QApplication::translate("CChannelParamsClass", "Y", Q_NULLPTR));
        label_37->setText(QApplication::translate("CChannelParamsClass", "contest", Q_NULLPTR));
        label_33->setText(QApplication::translate("CChannelParamsClass", "display area   ", Q_NULLPTR));
        checkShowString->setText(QApplication::translate("CChannelParamsClass", "enable diaplay", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CChannelParamsClass: public Ui_CChannelParamsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCHANNELPARAMS_H
