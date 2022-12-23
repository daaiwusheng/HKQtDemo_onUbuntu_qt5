/********************************************************************************
** Form generated from reading UI file 'cserialparams.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSERIALPARAMS_H
#define UI_CSERIALPARAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSerialParams
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBox232BAUD;
    QComboBox *comboBox232DATABIT;
    QComboBox *comboBox232STOPBIT;
    QComboBox *comboBox232CHECKBIT;
    QComboBox *comboBox232FLOW;
    QComboBox *comboBox232workstate;
    QPushButton *pushButtonPPPSETUP;
    QGroupBox *groupBox_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *comboBox485STOPBIT;
    QComboBox *comboBox485CHECKBIT;
    QComboBox *comboBox485FLOW;
    QComboBox *comboBox485BAUD;
    QComboBox *comboBox485DATABIT;
    QLabel *label_13;
    QLabel *label_14;
    QComboBox *comboBoxDECODETYPE;
    QLineEdit *lineEditDECODEADDRESS;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QComboBox *comboBoxChanIndex;
    QPushButton *pushButton232refresh;
    QPushButton *pushButtonsave;

    void setupUi(QWidget *CSerialParams)
    {
        if (CSerialParams->objectName().isEmpty())
            CSerialParams->setObjectName(QStringLiteral("CSerialParams"));
        CSerialParams->resize(586, 503);
        groupBox = new QGroupBox(CSerialParams);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 551, 181));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 61, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(133, 30, 71, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(243, 30, 71, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(353, 30, 71, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(453, 30, 71, 21));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 100, 91, 21));
        comboBox232BAUD = new QComboBox(groupBox);
        comboBox232BAUD->setObjectName(QStringLiteral("comboBox232BAUD"));
        comboBox232BAUD->setGeometry(QRect(20, 60, 81, 22));
        comboBox232BAUD->setIconSize(QSize(16, 16));
        comboBox232DATABIT = new QComboBox(groupBox);
        comboBox232DATABIT->setObjectName(QStringLiteral("comboBox232DATABIT"));
        comboBox232DATABIT->setGeometry(QRect(130, 60, 81, 25));
        comboBox232STOPBIT = new QComboBox(groupBox);
        comboBox232STOPBIT->setObjectName(QStringLiteral("comboBox232STOPBIT"));
        comboBox232STOPBIT->setGeometry(QRect(230, 60, 91, 25));
        comboBox232CHECKBIT = new QComboBox(groupBox);
        comboBox232CHECKBIT->setObjectName(QStringLiteral("comboBox232CHECKBIT"));
        comboBox232CHECKBIT->setGeometry(QRect(340, 60, 91, 25));
        comboBox232FLOW = new QComboBox(groupBox);
        comboBox232FLOW->setObjectName(QStringLiteral("comboBox232FLOW"));
        comboBox232FLOW->setGeometry(QRect(450, 60, 81, 25));
        comboBox232workstate = new QComboBox(groupBox);
        comboBox232workstate->setObjectName(QStringLiteral("comboBox232workstate"));
        comboBox232workstate->setGeometry(QRect(110, 100, 171, 25));
        pushButtonPPPSETUP = new QPushButton(groupBox);
        pushButtonPPPSETUP->setObjectName(QStringLiteral("pushButtonPPPSETUP"));
        pushButtonPPPSETUP->setEnabled(false);
        pushButtonPPPSETUP->setGeometry(QRect(40, 140, 211, 23));
        groupBox_2 = new QGroupBox(CSerialParams);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 210, 551, 231));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(450, 60, 71, 21));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(240, 60, 71, 21));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(350, 60, 71, 21));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(27, 60, 61, 21));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(130, 60, 71, 21));
        comboBox485STOPBIT = new QComboBox(groupBox_2);
        comboBox485STOPBIT->setObjectName(QStringLiteral("comboBox485STOPBIT"));
        comboBox485STOPBIT->setGeometry(QRect(240, 90, 81, 25));
        comboBox485CHECKBIT = new QComboBox(groupBox_2);
        comboBox485CHECKBIT->setObjectName(QStringLiteral("comboBox485CHECKBIT"));
        comboBox485CHECKBIT->setGeometry(QRect(340, 90, 91, 25));
        comboBox485FLOW = new QComboBox(groupBox_2);
        comboBox485FLOW->setObjectName(QStringLiteral("comboBox485FLOW"));
        comboBox485FLOW->setGeometry(QRect(450, 90, 81, 25));
        comboBox485BAUD = new QComboBox(groupBox_2);
        comboBox485BAUD->setObjectName(QStringLiteral("comboBox485BAUD"));
        comboBox485BAUD->setGeometry(QRect(10, 90, 91, 25));
        comboBox485DATABIT = new QComboBox(groupBox_2);
        comboBox485DATABIT->setObjectName(QStringLiteral("comboBox485DATABIT"));
        comboBox485DATABIT->setGeometry(QRect(130, 90, 81, 25));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 150, 101, 21));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(270, 150, 101, 21));
        comboBoxDECODETYPE = new QComboBox(groupBox_2);
        comboBoxDECODETYPE->setObjectName(QStringLiteral("comboBoxDECODETYPE"));
        comboBoxDECODETYPE->setGeometry(QRect(120, 150, 101, 25));
        lineEditDECODEADDRESS = new QLineEdit(groupBox_2);
        lineEditDECODEADDRESS->setObjectName(QStringLiteral("lineEditDECODEADDRESS"));
        lineEditDECODEADDRESS->setGeometry(QRect(390, 150, 113, 25));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 181, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);

        comboBoxChanIndex = new QComboBox(layoutWidget);
        comboBoxChanIndex->setObjectName(QStringLiteral("comboBoxChanIndex"));

        horizontalLayout->addWidget(comboBoxChanIndex);

        pushButton232refresh = new QPushButton(CSerialParams);
        pushButton232refresh->setObjectName(QStringLiteral("pushButton232refresh"));
        pushButton232refresh->setGeometry(QRect(100, 460, 75, 25));
        pushButtonsave = new QPushButton(CSerialParams);
        pushButtonsave->setObjectName(QStringLiteral("pushButtonsave"));
        pushButtonsave->setGeometry(QRect(330, 460, 75, 25));

        retranslateUi(CSerialParams);

        QMetaObject::connectSlotsByName(CSerialParams);
    } // setupUi

    void retranslateUi(QWidget *CSerialParams)
    {
        CSerialParams->setWindowTitle(QApplication::translate("CSerialParams", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CSerialParams", "232 setup", Q_NULLPTR));
        label->setText(QApplication::translate("CSerialParams", "Port speed", Q_NULLPTR));
        label_2->setText(QApplication::translate("CSerialParams", "Data bit", Q_NULLPTR));
        label_3->setText(QApplication::translate("CSerialParams", "Stop bit", Q_NULLPTR));
        label_4->setText(QApplication::translate("CSerialParams", "Parity", Q_NULLPTR));
        label_5->setText(QApplication::translate("CSerialParams", "Flow control", Q_NULLPTR));
        label_6->setText(QApplication::translate("CSerialParams", "Operation mode", Q_NULLPTR));
        comboBox232BAUD->clear();
        comboBox232BAUD->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "50", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "75", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "110", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "150", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "300", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "600", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "1200", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "2400", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "4800", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "9600", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "19200", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "38400", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "57600", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "76800", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "115.2k", Q_NULLPTR)
        );
        comboBox232DATABIT->clear();
        comboBox232DATABIT->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "5", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "6", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "7", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "8", Q_NULLPTR)
        );
        comboBox232STOPBIT->clear();
        comboBox232STOPBIT->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "1", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "2", Q_NULLPTR)
        );
        comboBox232CHECKBIT->clear();
        comboBox232CHECKBIT->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "None", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Odd", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Even", Q_NULLPTR)
        );
        comboBox232FLOW->clear();
        comboBox232FLOW->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "None", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Software", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Hardware", Q_NULLPTR)
        );
        comboBox232workstate->clear();
        comboBox232workstate->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "Narrow-band transmission", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Console", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Transpsrent channel", Q_NULLPTR)
        );
        pushButtonPPPSETUP->setText(QApplication::translate("CSerialParams", "Narrowband transparent setup", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("CSerialParams", "RS485 setup", Q_NULLPTR));
        label_8->setText(QApplication::translate("CSerialParams", "Flow control", Q_NULLPTR));
        label_9->setText(QApplication::translate("CSerialParams", "Stop bit", Q_NULLPTR));
        label_10->setText(QApplication::translate("CSerialParams", "Parity", Q_NULLPTR));
        label_11->setText(QApplication::translate("CSerialParams", "Port speed", Q_NULLPTR));
        label_12->setText(QApplication::translate("CSerialParams", "Data bit", Q_NULLPTR));
        comboBox485STOPBIT->clear();
        comboBox485STOPBIT->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "1", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "2", Q_NULLPTR)
        );
        comboBox485CHECKBIT->clear();
        comboBox485CHECKBIT->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "None", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Odd", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Even", Q_NULLPTR)
        );
        comboBox485FLOW->clear();
        comboBox485FLOW->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "None", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Software", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Hardware", Q_NULLPTR)
        );
        comboBox485BAUD->clear();
        comboBox485BAUD->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "50", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "75", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "110", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "150", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "300", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "600", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "1200", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "2400", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "4800", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "9600", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "19200", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "38400", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "57600", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "76800", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "115.2k", Q_NULLPTR)
        );
        comboBox485DATABIT->clear();
        comboBox485DATABIT->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "5", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "6", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "7", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "8", Q_NULLPTR)
        );
        label_13->setText(QApplication::translate("CSerialParams", "Decoder model", Q_NULLPTR));
        label_14->setText(QApplication::translate("CSerialParams", "Decoder IP", Q_NULLPTR));
        comboBoxDECODETYPE->clear();
        comboBoxDECODETYPE->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "YouLi", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "LiLin-1016", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "LiLin-820", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Pelco-p", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "DM DynaColor", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "HD600", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "JC-4116", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Pelco-d WX", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Pelco-d PICO", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "VCOM_VC_2000", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "NETSTREAMER", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "SAE", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "SAMSUNG", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "KALATEL_KTD_312", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "CELOTEX", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "TLPELCO_P", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "TL_HHX2000", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "BBV", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "RM110", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "KC3360S", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "ACES", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "ALSON", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "INV3609HD", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "HOWELL", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "TC_PELCO_P", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "TC_PELCO_D", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "AUTO_M", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "AUTO_H", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "ANTEN", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "CHANGLIN", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "DELTADOME", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "XYM_12", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "ADR8060", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "EVI", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Demo_Speed", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "DM_PELCO_D", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "ST_832", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "LC_D2104", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "HUNTER", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "A01", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "TECHWIN", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "WEIHAN", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "LG", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "D_MAX", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "PANASONIC", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "KTD_348", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "INFINOVA", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "PIH-7625", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "IDOME/IVIEW/LCU", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Dennar_dDome", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Philips", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "SAMPLE", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "PLD", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "PARCO", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "HY", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "NAIJIE", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "YH_06", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "SP9096X", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "M_PANEL", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "M_MV2050", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "SAE_QUICK", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "RED_APPLE", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "NKO8G", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "DH_CC440", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "TX_CONTROL_232", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "VCL_SPEED_DOME", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "ST_2C160", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "TDWY", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "TWHC", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "USNT", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "KLT_NVD2200PS", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "VIDO_B01", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "LG_MULTIX", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "ENKEL", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "YT_PELCOD", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "HIKVISION", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "PE60", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "LiAo", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "NK16", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "DaLi", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "HN_4304", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "VIDEOTEC", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "HNDCB", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Lion_2007", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "LG_LVC_C372", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "Gold_Video", Q_NULLPTR)
         << QApplication::translate("CSerialParams", "NVD1600PS", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("CSerialParams", "Channel No.", Q_NULLPTR));
        pushButton232refresh->setText(QApplication::translate("CSerialParams", "Update", Q_NULLPTR));
        pushButtonsave->setText(QApplication::translate("CSerialParams", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CSerialParams: public Ui_CSerialParams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSERIALPARAMS_H
