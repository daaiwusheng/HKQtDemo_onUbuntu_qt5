/********************************************************************************
** Form generated from reading UI file 'cremoteparams.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREMOTEPARAMS_H
#define UI_CREMOTEPARAMS_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRemoteParamsClass
{
public:
    QTabWidget *tabWidget;
    QWidget *widgetDevice;
    QPushButton *btnAdancedNet;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *editSoftV;
    QLabel *label_3;
    QLineEdit *editHardV;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *editPrePaneV;
    QLineEdit *editDPSSoftV;
    QLabel *label;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *editDeviceIP;
    QLabel *label_16;
    QLineEdit *editDeviceMask;
    QLabel *label_17;
    QLineEdit *editGateWay;
    QLabel *label_18;
    QLineEdit *editDNSIP1;
    QLabel *label_19;
    QLineEdit *editDNSIP2;
    QLabel *label_20;
    QLineEdit *editMAC;
    QComboBox *comboNetCardType;
    QCheckBox *checkboDHCP;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_8;
    QLabel *label_5;
    QFrame *line;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_9;
    QLabel *label_6;
    QFrame *line_2;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLineEdit *editDeviceName;
    QLabel *label_9;
    QLineEdit *editChannelNum;
    QLabel *label_10;
    QLineEdit *editAlarmInNum;
    QLabel *label_11;
    QComboBox *comboRecyle;
    QGridLayout *gridLayout_4;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *editHDNum;
    QLabel *label_24;
    QLineEdit *editAlarmOutNum;
    QLabel *label_25;
    QLineEdit *editYKQID;
    QComboBox *comboDeviceType;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_7;
    QLabel *label_26;
    QGridLayout *gridLayout_6;
    QLabel *label_21;
    QComboBox *comboMajorScale;
    QLabel *label_27;
    QComboBox *comboMinorScale;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_5;
    QLabel *label_12;
    QLineEdit *editDeviceSerialNO;
    QWidget *layoutWidget7;
    QGridLayout *gridLayout_10;
    QLabel *label_7;
    QFrame *line_3;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_12;
    QLabel *label_28;
    QLineEdit *editPrivateDNS;
    QLabel *label_29;
    QLineEdit *editDevicePort;
    QLabel *label_30;
    QLineEdit *editHttpPort;
    QLabel *label_31;
    QLineEdit *editMulitcastIP;
    QLabel *label_32;
    QLineEdit *editAlarmIP;
    QLabel *label_33;
    QLineEdit *editAlarmPort;
    QLabel *label_34;
    QLineEdit *editMTU;
    QPushButton *btnNFS;
    QPushButton *btnZoneDst;
    QPushButton *btnRtsp;
    QPushButton *btnCompressAudio;
    QWidget *widgetChannel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vLayChannel;
    QWidget *widgetSerial;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayoutserialparams;
    QWidget *widgetAlarm;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayoutAlarmParams;
    QWidget *widgetUser;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *vLayUser;
    QWidget *tab;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_ExceptionConfig;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *vLayATM;
    QPushButton *btnRefresh;
    QPushButton *btnSaveParams;

    void setupUi(QWidget *CRemoteParamsClass)
    {
        if (CRemoteParamsClass->objectName().isEmpty())
            CRemoteParamsClass->setObjectName(QStringLiteral("CRemoteParamsClass"));
        CRemoteParamsClass->resize(721, 633);
        tabWidget = new QTabWidget(CRemoteParamsClass);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 721, 591));
        QFont font;
        font.setPointSize(9);
        tabWidget->setFont(font);
        widgetDevice = new QWidget();
        widgetDevice->setObjectName(QStringLiteral("widgetDevice"));
        btnAdancedNet = new QPushButton(widgetDevice);
        btnAdancedNet->setObjectName(QStringLiteral("btnAdancedNet"));
        btnAdancedNet->setGeometry(QRect(20, 520, 121, 31));
        layoutWidget = new QWidget(widgetDevice);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 220, 651, 51));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        editSoftV = new QLineEdit(layoutWidget);
        editSoftV->setObjectName(QStringLiteral("editSoftV"));

        gridLayout->addWidget(editSoftV, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        editHardV = new QLineEdit(layoutWidget);
        editHardV->setObjectName(QStringLiteral("editHardV"));

        gridLayout->addWidget(editHardV, 0, 3, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        editPrePaneV = new QLineEdit(layoutWidget);
        editPrePaneV->setObjectName(QStringLiteral("editPrePaneV"));

        gridLayout->addWidget(editPrePaneV, 1, 3, 1, 1);

        editDPSSoftV = new QLineEdit(layoutWidget);
        editDPSSoftV->setObjectName(QStringLiteral("editDPSSoftV"));

        gridLayout->addWidget(editDPSSoftV, 1, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        layoutWidget1 = new QWidget(widgetDevice);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 300, 291, 206));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 1, 0, 1, 1);

        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_3->addWidget(label_15, 2, 0, 1, 1);

        editDeviceIP = new QLineEdit(layoutWidget1);
        editDeviceIP->setObjectName(QStringLiteral("editDeviceIP"));

        gridLayout_3->addWidget(editDeviceIP, 2, 2, 1, 1);

        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_3->addWidget(label_16, 3, 0, 1, 1);

        editDeviceMask = new QLineEdit(layoutWidget1);
        editDeviceMask->setObjectName(QStringLiteral("editDeviceMask"));

        gridLayout_3->addWidget(editDeviceMask, 3, 2, 1, 1);

        label_17 = new QLabel(layoutWidget1);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_3->addWidget(label_17, 4, 0, 1, 1);

        editGateWay = new QLineEdit(layoutWidget1);
        editGateWay->setObjectName(QStringLiteral("editGateWay"));

        gridLayout_3->addWidget(editGateWay, 4, 2, 1, 1);

        label_18 = new QLabel(layoutWidget1);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_3->addWidget(label_18, 5, 0, 1, 1);

        editDNSIP1 = new QLineEdit(layoutWidget1);
        editDNSIP1->setObjectName(QStringLiteral("editDNSIP1"));

        gridLayout_3->addWidget(editDNSIP1, 5, 2, 1, 1);

        label_19 = new QLabel(layoutWidget1);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_3->addWidget(label_19, 6, 0, 1, 1);

        editDNSIP2 = new QLineEdit(layoutWidget1);
        editDNSIP2->setObjectName(QStringLiteral("editDNSIP2"));

        gridLayout_3->addWidget(editDNSIP2, 6, 2, 1, 1);

        label_20 = new QLabel(layoutWidget1);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_3->addWidget(label_20, 7, 0, 1, 1);

        editMAC = new QLineEdit(layoutWidget1);
        editMAC->setObjectName(QStringLiteral("editMAC"));

        gridLayout_3->addWidget(editMAC, 7, 2, 1, 1);

        comboNetCardType = new QComboBox(layoutWidget1);
        comboNetCardType->setObjectName(QStringLiteral("comboNetCardType"));

        gridLayout_3->addWidget(comboNetCardType, 0, 2, 1, 1);

        checkboDHCP = new QCheckBox(layoutWidget1);
        checkboDHCP->setObjectName(QStringLiteral("checkboDHCP"));

        gridLayout_3->addWidget(checkboDHCP, 1, 2, 1, 1);

        layoutWidget2 = new QWidget(widgetDevice);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 11, 641, 31));
        gridLayout_8 = new QGridLayout(layoutWidget2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_8->addWidget(label_5, 0, 0, 1, 1);

        line = new QFrame(layoutWidget2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line, 0, 1, 1, 1);

        layoutWidget3 = new QWidget(widgetDevice);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(9, 190, 651, 21));
        gridLayout_9 = new QGridLayout(layoutWidget3);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_9->addWidget(label_6, 0, 0, 1, 1);

        line_2 = new QFrame(layoutWidget3);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line_2, 0, 1, 1, 1);

        layoutWidget4 = new QWidget(widgetDevice);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(11, 43, 641, 111));
        gridLayout_11 = new QGridLayout(layoutWidget4);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        editDeviceName = new QLineEdit(layoutWidget4);
        editDeviceName->setObjectName(QStringLiteral("editDeviceName"));

        gridLayout_2->addWidget(editDeviceName, 0, 1, 1, 1);

        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        editChannelNum = new QLineEdit(layoutWidget4);
        editChannelNum->setObjectName(QStringLiteral("editChannelNum"));

        gridLayout_2->addWidget(editChannelNum, 1, 1, 1, 1);

        label_10 = new QLabel(layoutWidget4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        editAlarmInNum = new QLineEdit(layoutWidget4);
        editAlarmInNum->setObjectName(QStringLiteral("editAlarmInNum"));

        gridLayout_2->addWidget(editAlarmInNum, 2, 1, 1, 1);

        label_11 = new QLabel(layoutWidget4);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        comboRecyle = new QComboBox(layoutWidget4);
        comboRecyle->setObjectName(QStringLiteral("comboRecyle"));

        gridLayout_2->addWidget(comboRecyle, 3, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_22 = new QLabel(layoutWidget4);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_4->addWidget(label_22, 0, 0, 1, 1);

        label_23 = new QLabel(layoutWidget4);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_4->addWidget(label_23, 1, 0, 1, 1);

        editHDNum = new QLineEdit(layoutWidget4);
        editHDNum->setObjectName(QStringLiteral("editHDNum"));

        gridLayout_4->addWidget(editHDNum, 1, 1, 1, 1);

        label_24 = new QLabel(layoutWidget4);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_4->addWidget(label_24, 2, 0, 1, 1);

        editAlarmOutNum = new QLineEdit(layoutWidget4);
        editAlarmOutNum->setObjectName(QStringLiteral("editAlarmOutNum"));

        gridLayout_4->addWidget(editAlarmOutNum, 2, 1, 1, 1);

        label_25 = new QLabel(layoutWidget4);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_4->addWidget(label_25, 3, 0, 1, 1);

        editYKQID = new QLineEdit(layoutWidget4);
        editYKQID->setObjectName(QStringLiteral("editYKQID"));

        gridLayout_4->addWidget(editYKQID, 3, 1, 1, 1);

        comboDeviceType = new QComboBox(layoutWidget4);
        comboDeviceType->setObjectName(QStringLiteral("comboDeviceType"));

        gridLayout_4->addWidget(comboDeviceType, 0, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_4, 0, 1, 1, 1);

        layoutWidget5 = new QWidget(widgetDevice);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(365, 160, 298, 25));
        gridLayout_7 = new QGridLayout(layoutWidget5);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layoutWidget5);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_7->addWidget(label_26, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_21 = new QLabel(layoutWidget5);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_6->addWidget(label_21, 0, 0, 1, 1);

        comboMajorScale = new QComboBox(layoutWidget5);
        comboMajorScale->setObjectName(QStringLiteral("comboMajorScale"));

        gridLayout_6->addWidget(comboMajorScale, 0, 1, 1, 1);

        label_27 = new QLabel(layoutWidget5);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_6->addWidget(label_27, 0, 2, 1, 1);

        comboMinorScale = new QComboBox(layoutWidget5);
        comboMinorScale->setObjectName(QStringLiteral("comboMinorScale"));

        gridLayout_6->addWidget(comboMinorScale, 0, 3, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 1, 1, 1);

        layoutWidget6 = new QWidget(widgetDevice);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(12, 160, 321, 23));
        gridLayout_5 = new QGridLayout(layoutWidget6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget6);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_5->addWidget(label_12, 0, 0, 1, 1);

        editDeviceSerialNO = new QLineEdit(layoutWidget6);
        editDeviceSerialNO->setObjectName(QStringLiteral("editDeviceSerialNO"));

        gridLayout_5->addWidget(editDeviceSerialNO, 0, 1, 1, 1);

        layoutWidget7 = new QWidget(widgetDevice);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(11, 280, 651, 20));
        gridLayout_10 = new QGridLayout(layoutWidget7);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget7);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_10->addWidget(label_7, 0, 0, 1, 1);

        line_3 = new QFrame(layoutWidget7);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_3, 0, 1, 1, 1);

        layoutWidget_2 = new QWidget(widgetDevice);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(330, 300, 311, 185));
        gridLayout_12 = new QGridLayout(layoutWidget_2);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(layoutWidget_2);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_12->addWidget(label_28, 0, 0, 1, 1);

        editPrivateDNS = new QLineEdit(layoutWidget_2);
        editPrivateDNS->setObjectName(QStringLiteral("editPrivateDNS"));

        gridLayout_12->addWidget(editPrivateDNS, 0, 1, 1, 1);

        label_29 = new QLabel(layoutWidget_2);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_12->addWidget(label_29, 1, 0, 1, 1);

        editDevicePort = new QLineEdit(layoutWidget_2);
        editDevicePort->setObjectName(QStringLiteral("editDevicePort"));

        gridLayout_12->addWidget(editDevicePort, 1, 1, 1, 1);

        label_30 = new QLabel(layoutWidget_2);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_12->addWidget(label_30, 2, 0, 1, 1);

        editHttpPort = new QLineEdit(layoutWidget_2);
        editHttpPort->setObjectName(QStringLiteral("editHttpPort"));

        gridLayout_12->addWidget(editHttpPort, 2, 1, 1, 1);

        label_31 = new QLabel(layoutWidget_2);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_12->addWidget(label_31, 3, 0, 1, 1);

        editMulitcastIP = new QLineEdit(layoutWidget_2);
        editMulitcastIP->setObjectName(QStringLiteral("editMulitcastIP"));

        gridLayout_12->addWidget(editMulitcastIP, 3, 1, 1, 1);

        label_32 = new QLabel(layoutWidget_2);
        label_32->setObjectName(QStringLiteral("label_32"));

        gridLayout_12->addWidget(label_32, 4, 0, 1, 1);

        editAlarmIP = new QLineEdit(layoutWidget_2);
        editAlarmIP->setObjectName(QStringLiteral("editAlarmIP"));

        gridLayout_12->addWidget(editAlarmIP, 4, 1, 1, 1);

        label_33 = new QLabel(layoutWidget_2);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_12->addWidget(label_33, 5, 0, 1, 1);

        editAlarmPort = new QLineEdit(layoutWidget_2);
        editAlarmPort->setObjectName(QStringLiteral("editAlarmPort"));

        gridLayout_12->addWidget(editAlarmPort, 5, 1, 1, 1);

        label_34 = new QLabel(layoutWidget_2);
        label_34->setObjectName(QStringLiteral("label_34"));

        gridLayout_12->addWidget(label_34, 6, 0, 1, 1);

        editMTU = new QLineEdit(layoutWidget_2);
        editMTU->setObjectName(QStringLiteral("editMTU"));

        gridLayout_12->addWidget(editMTU, 6, 1, 1, 1);

        btnNFS = new QPushButton(widgetDevice);
        btnNFS->setObjectName(QStringLiteral("btnNFS"));
        btnNFS->setGeometry(QRect(150, 520, 71, 31));
        btnZoneDst = new QPushButton(widgetDevice);
        btnZoneDst->setObjectName(QStringLiteral("btnZoneDst"));
        btnZoneDst->setGeometry(QRect(220, 520, 71, 31));
        btnRtsp = new QPushButton(widgetDevice);
        btnRtsp->setObjectName(QStringLiteral("btnRtsp"));
        btnRtsp->setGeometry(QRect(290, 520, 81, 31));
        btnCompressAudio = new QPushButton(widgetDevice);
        btnCompressAudio->setObjectName(QStringLiteral("btnCompressAudio"));
        btnCompressAudio->setGeometry(QRect(380, 520, 161, 31));
        tabWidget->addTab(widgetDevice, QString());
        widgetChannel = new QWidget();
        widgetChannel->setObjectName(QStringLiteral("widgetChannel"));
        verticalLayoutWidget = new QWidget(widgetChannel);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 671, 621));
        vLayChannel = new QVBoxLayout(verticalLayoutWidget);
        vLayChannel->setObjectName(QStringLiteral("vLayChannel"));
        vLayChannel->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(widgetChannel, QString());
        widgetSerial = new QWidget();
        widgetSerial->setObjectName(QStringLiteral("widgetSerial"));
        verticalLayoutWidget_6 = new QWidget(widgetSerial);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(30, 20, 571, 521));
        verticalLayoutserialparams = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayoutserialparams->setObjectName(QStringLiteral("verticalLayoutserialparams"));
        verticalLayoutserialparams->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(widgetSerial, QString());
        widgetAlarm = new QWidget();
        widgetAlarm->setObjectName(QStringLiteral("widgetAlarm"));
        verticalLayoutWidget_5 = new QWidget(widgetAlarm);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(0, 0, 631, 561));
        verticalLayoutAlarmParams = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayoutAlarmParams->setObjectName(QStringLiteral("verticalLayoutAlarmParams"));
        verticalLayoutAlarmParams->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(widgetAlarm, QString());
        widgetUser = new QWidget();
        widgetUser->setObjectName(QStringLiteral("widgetUser"));
        verticalLayoutWidget_3 = new QWidget(widgetUser);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 0, 671, 621));
        vLayUser = new QVBoxLayout(verticalLayoutWidget_3);
        vLayUser->setObjectName(QStringLiteral("vLayUser"));
        vLayUser->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(widgetUser, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayoutWidget_4 = new QWidget(tab);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(0, 10, 671, 521));
        verticalLayout_ExceptionConfig = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_ExceptionConfig->setObjectName(QStringLiteral("verticalLayout_ExceptionConfig"));
        verticalLayout_ExceptionConfig->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayoutWidget_7 = new QWidget(tab_2);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(0, 0, 691, 561));
        vLayATM = new QVBoxLayout(verticalLayoutWidget_7);
        vLayATM->setObjectName(QStringLiteral("vLayATM"));
        vLayATM->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab_2, QString());
        btnRefresh = new QPushButton(CRemoteParamsClass);
        btnRefresh->setObjectName(QStringLiteral("btnRefresh"));
        btnRefresh->setGeometry(QRect(450, 592, 75, 31));
        btnSaveParams = new QPushButton(CRemoteParamsClass);
        btnSaveParams->setObjectName(QStringLiteral("btnSaveParams"));
        btnSaveParams->setGeometry(QRect(530, 592, 131, 31));

        retranslateUi(CRemoteParamsClass);

        tabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(CRemoteParamsClass);
    } // setupUi

    void retranslateUi(QWidget *CRemoteParamsClass)
    {
        CRemoteParamsClass->setWindowTitle(QApplication::translate("CRemoteParamsClass", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btnAdancedNet->setText(QApplication::translate("CRemoteParamsClass", "Advanced network", Q_NULLPTR));
        label_3->setText(QApplication::translate("CRemoteParamsClass", "Hardware version", Q_NULLPTR));
        label_2->setText(QApplication::translate("CRemoteParamsClass", "DSP software ", Q_NULLPTR));
        label_4->setText(QApplication::translate("CRemoteParamsClass", "Front panel", Q_NULLPTR));
        label->setText(QApplication::translate("CRemoteParamsClass", "Firmware version", Q_NULLPTR));
        label_13->setText(QApplication::translate("CRemoteParamsClass", "Network adapter", Q_NULLPTR));
        label_14->setText(QApplication::translate("CRemoteParamsClass", "Enable get IP address auto", Q_NULLPTR));
        label_15->setText(QApplication::translate("CRemoteParamsClass", "IP address", Q_NULLPTR));
        label_16->setText(QApplication::translate("CRemoteParamsClass", "Subnet mask", Q_NULLPTR));
        label_17->setText(QApplication::translate("CRemoteParamsClass", "Gateway address", Q_NULLPTR));
        label_18->setText(QApplication::translate("CRemoteParamsClass", "Prefered DDNS", Q_NULLPTR));
        label_19->setText(QApplication::translate("CRemoteParamsClass", "Alternate DDNS", Q_NULLPTR));
        label_20->setText(QApplication::translate("CRemoteParamsClass", "Physical address", Q_NULLPTR));
        checkboDHCP->setText(QString());
        label_5->setText(QApplication::translate("CRemoteParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt; color:#0000ff;\">Basic config info</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("CRemoteParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt; color:#0000ff;\">Device version</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("CRemoteParamsClass", "Device name", Q_NULLPTR));
        label_9->setText(QApplication::translate("CRemoteParamsClass", "Channel num", Q_NULLPTR));
        label_10->setText(QApplication::translate("CRemoteParamsClass", "Alarm in num", Q_NULLPTR));
        label_11->setText(QApplication::translate("CRemoteParamsClass", "Loop record", Q_NULLPTR));
        label_22->setText(QApplication::translate("CRemoteParamsClass", "Device type", Q_NULLPTR));
        label_23->setText(QApplication::translate("CRemoteParamsClass", "Disk num", Q_NULLPTR));
        label_24->setText(QApplication::translate("CRemoteParamsClass", "Alarm out num", Q_NULLPTR));
        label_25->setText(QApplication::translate("CRemoteParamsClass", "IR control ID", Q_NULLPTR));
        label_26->setText(QApplication::translate("CRemoteParamsClass", "Enable preview", Q_NULLPTR));
        label_21->setText(QApplication::translate("CRemoteParamsClass", "Main", Q_NULLPTR));
        label_27->setText(QApplication::translate("CRemoteParamsClass", "Spot", Q_NULLPTR));
        label_12->setText(QApplication::translate("CRemoteParamsClass", "Device SN", Q_NULLPTR));
        label_7->setText(QApplication::translate("CRemoteParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">Network config info</span></p></body></html>", Q_NULLPTR));
        label_28->setText(QApplication::translate("CRemoteParamsClass", "Private domain", Q_NULLPTR));
        label_29->setText(QApplication::translate("CRemoteParamsClass", "Communicate port", Q_NULLPTR));
        label_30->setText(QApplication::translate("CRemoteParamsClass", "HTTP port", Q_NULLPTR));
        label_31->setText(QApplication::translate("CRemoteParamsClass", "Multicast", Q_NULLPTR));
        label_32->setText(QApplication::translate("CRemoteParamsClass", "Alarm host address", Q_NULLPTR));
        label_33->setText(QApplication::translate("CRemoteParamsClass", "Alarm host port", Q_NULLPTR));
        label_34->setText(QApplication::translate("CRemoteParamsClass", "MTU size", Q_NULLPTR));
        btnNFS->setText(QApplication::translate("CRemoteParamsClass", "NFS setup", Q_NULLPTR));
        btnZoneDst->setText(QApplication::translate("CRemoteParamsClass", "Time zone", Q_NULLPTR));
        btnRtsp->setText(QApplication::translate("CRemoteParamsClass", "RTSP setup", Q_NULLPTR));
        btnCompressAudio->setText(QApplication::translate("CRemoteParamsClass", "Audio talk code setup", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widgetDevice), QApplication::translate("CRemoteParamsClass", "Device setup", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widgetChannel), QApplication::translate("CRemoteParamsClass", "Channel setup", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widgetSerial), QApplication::translate("CRemoteParamsClass", "Serial port setup", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widgetAlarm), QApplication::translate("CRemoteParamsClass", "Alarm setup", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widgetUser), QApplication::translate("CRemoteParamsClass", "User setup", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CRemoteParamsClass", "Exception setup", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CRemoteParamsClass", "Transaction setup", Q_NULLPTR));
        btnRefresh->setText(QApplication::translate("CRemoteParamsClass", "Updata", Q_NULLPTR));
        btnSaveParams->setText(QApplication::translate("CRemoteParamsClass", "Save parameter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CRemoteParamsClass: public Ui_CRemoteParamsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREMOTEPARAMS_H
