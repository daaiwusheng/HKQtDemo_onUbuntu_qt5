/********************************************************************************
** Form generated from reading UI file 'realplay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REALPLAY_H
#define UI_REALPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RealPlayClass
{
public:
    QComboBox *comboBox_windowsnum;
    QLabel *label_3;
    QFrame *line_24;
    QSlider *horizontalSlider_hue;
    QLabel *label_12;
    QFrame *line_27;
    QSlider *horizontalSlider_saturation;
    QFrame *line_9;
    QLabel *label;
    QSlider *horizontalSlider_volume;
    QFrame *line_22;
    QFrame *line_25;
    QFrame *line_2;
    QFrame *line;
    QPushButton *pushButton_largeaperture;
    QFrame *line_5;
    QFrame *line_13;
    QLabel *label_13;
    QSlider *horizontalSlider_contrast;
    QPushButton *pushButton_savefile;
    QFrame *line_12;
    QLabel *label_15;
    QPushButton *pushButton_right;
    QLabel *label_2;
    QFrame *line_11;
    QFrame *line_26;
    QLabel *label_14;
    QFrame *line_3;
    QLabel *label_10;
    QPushButton *pushButton_defaultparameter;
    QPushButton *pushButton_left;
    QLabel *label_11;
    QPushButton *pushButton_forceIframe;
    QPushButton *pushButton_ptzcruisepathcall;
    QFrame *line_8;
    QPushButton *pushButton_down;
    QFrame *line_15;
    QComboBox *comboBox_qualitydemand;
    QLabel *label_9;
    QPushButton *pushButton_ptzcruisepathset;
    QPushButton *pushButton_expandfocus;
    QLabel *label_8;
    QFrame *line_6;
    QFrame *line_10;
    QLabel *label_7;
    QPushButton *pushButton_farfocus;
    QFrame *line_4;
    QPushButton *pushButton_up;
    QFrame *line_19;
    QPushButton *pushButton_nearfocus;
    QPushButton *pushButton_ptzcruisepointset;
    QPushButton *pushButton_scrashPic;
    QLabel *label_6;
    QPushButton *pushButton_trackmemoryrun;
    QFrame *line_14;
    QFrame *line_16;
    QComboBox *comboBox_ptzcruisepoint;
    QPushButton *pushButton_trackmemorystop;
    QLabel *label_5;
    QPushButton *pushButton_narrowfocus;
    QComboBox *comboBox_ptzcruisepath;
    QPushButton *pushButton_trackmemorystart;
    QComboBox *comboBox_ptzspeed;
    QFrame *line_7;
    QPushButton *pushButton_smallaperture;
    QSlider *horizontalSlider_bright;
    QLabel *label_4;
    QPushButton *pushButton_realplay;
    QPushButton *pushButton_ptzcruisepointcall;
    QFrame *line_17;
    QFrame *line_18;
    QFrame *line_20;
    QFrame *line_21;
    QFrame *line_23;
    QFrame *line_28;
    QFrame *line_29;
    QFrame *m_pframePlay;

    void setupUi(QWidget *RealPlayClass)
    {
        if (RealPlayClass->objectName().isEmpty())
            RealPlayClass->setObjectName(QStringLiteral("RealPlayClass"));
        RealPlayClass->resize(869, 655);
        RealPlayClass->setMinimumSize(QSize(869, 655));
        RealPlayClass->setMaximumSize(QSize(869, 655));
        comboBox_windowsnum = new QComboBox(RealPlayClass);
        comboBox_windowsnum->setObjectName(QStringLiteral("comboBox_windowsnum"));
        comboBox_windowsnum->setGeometry(QRect(468, 620, 51, 22));
        label_3 = new QLabel(RealPlayClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(770, 130, 41, 31));
        line_24 = new QFrame(RealPlayClass);
        line_24->setObjectName(QStringLiteral("line_24"));
        line_24->setGeometry(QRect(370, 640, 161, 20));
        line_24->setFrameShape(QFrame::HLine);
        line_24->setFrameShadow(QFrame::Sunken);
        horizontalSlider_hue = new QSlider(RealPlayClass);
        horizontalSlider_hue->setObjectName(QStringLiteral("horizontalSlider_hue"));
        horizontalSlider_hue->setGeometry(QRect(780, 510, 71, 21));
        horizontalSlider_hue->setOrientation(Qt::Horizontal);
        label_12 = new QLabel(RealPlayClass);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(750, 260, 41, 20));
        line_27 = new QFrame(RealPlayClass);
        line_27->setObjectName(QStringLiteral("line_27"));
        line_27->setGeometry(QRect(530, 600, 191, 20));
        line_27->setFrameShape(QFrame::HLine);
        line_27->setFrameShadow(QFrame::Sunken);
        horizontalSlider_saturation = new QSlider(RealPlayClass);
        horizontalSlider_saturation->setObjectName(QStringLiteral("horizontalSlider_saturation"));
        horizontalSlider_saturation->setGeometry(QRect(780, 480, 71, 21));
        horizontalSlider_saturation->setOrientation(Qt::Horizontal);
        line_9 = new QFrame(RealPlayClass);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(690, 420, 21, 181));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);
        label = new QLabel(RealPlayClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 620, 91, 21));
        horizontalSlider_volume = new QSlider(RealPlayClass);
        horizontalSlider_volume->setObjectName(QStringLiteral("horizontalSlider_volume"));
        horizontalSlider_volume->setGeometry(QRect(780, 540, 71, 21));
        horizontalSlider_volume->setOrientation(Qt::Horizontal);
        line_22 = new QFrame(RealPlayClass);
        line_22->setObjectName(QStringLiteral("line_22"));
        line_22->setGeometry(QRect(10, 600, 351, 20));
        line_22->setFrameShape(QFrame::HLine);
        line_22->setFrameShadow(QFrame::Sunken);
        line_25 = new QFrame(RealPlayClass);
        line_25->setObjectName(QStringLiteral("line_25"));
        line_25->setGeometry(QRect(540, 640, 181, 20));
        line_25->setFrameShape(QFrame::HLine);
        line_25->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(RealPlayClass);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 610, 20, 41));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(RealPlayClass);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(700, 410, 151, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_largeaperture = new QPushButton(RealPlayClass);
        pushButton_largeaperture->setObjectName(QStringLiteral("pushButton_largeaperture"));
        pushButton_largeaperture->setGeometry(QRect(730, 170, 31, 31));
        line_5 = new QFrame(RealPlayClass);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(360, 610, 20, 41));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(RealPlayClass);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setGeometry(QRect(840, 10, 20, 401));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);
        label_13 = new QLabel(RealPlayClass);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(740, 310, 91, 20));
        horizontalSlider_contrast = new QSlider(RealPlayClass);
        horizontalSlider_contrast->setObjectName(QStringLiteral("horizontalSlider_contrast"));
        horizontalSlider_contrast->setGeometry(QRect(780, 450, 71, 21));
        horizontalSlider_contrast->setOrientation(Qt::Horizontal);
        pushButton_savefile = new QPushButton(RealPlayClass);
        pushButton_savefile->setObjectName(QStringLiteral("pushButton_savefile"));
        pushButton_savefile->setGeometry(QRect(100, 620, 71, 23));
        line_12 = new QFrame(RealPlayClass);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(694, 10, 12, 401));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);
        label_15 = new QLabel(RealPlayClass);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(740, 0, 71, 20));
        pushButton_right = new QPushButton(RealPlayClass);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
        pushButton_right->setGeometry(QRect(800, 40, 41, 23));
        label_2 = new QLabel(RealPlayClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(770, 89, 41, 31));
        line_11 = new QFrame(RealPlayClass);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(700, 210, 151, 20));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_26 = new QFrame(RealPlayClass);
        line_26->setObjectName(QStringLiteral("line_26"));
        line_26->setGeometry(QRect(370, 600, 161, 20));
        line_26->setFrameShape(QFrame::HLine);
        line_26->setFrameShadow(QFrame::Sunken);
        label_14 = new QLabel(RealPlayClass);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(740, 360, 91, 20));
        line_3 = new QFrame(RealPlayClass);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(710, 610, 20, 41));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(RealPlayClass);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(700, 480, 71, 20));
        pushButton_defaultparameter = new QPushButton(RealPlayClass);
        pushButton_defaultparameter->setObjectName(QStringLiteral("pushButton_defaultparameter"));
        pushButton_defaultparameter->setGeometry(QRect(750, 570, 61, 21));
        pushButton_left = new QPushButton(RealPlayClass);
        pushButton_left->setObjectName(QStringLiteral("pushButton_left"));
        pushButton_left->setGeometry(QRect(710, 40, 41, 23));
        label_11 = new QLabel(RealPlayClass);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(540, 620, 61, 21));
        pushButton_forceIframe = new QPushButton(RealPlayClass);
        pushButton_forceIframe->setObjectName(QStringLiteral("pushButton_forceIframe"));
        pushButton_forceIframe->setGeometry(QRect(250, 620, 101, 23));
        pushButton_ptzcruisepathcall = new QPushButton(RealPlayClass);
        pushButton_ptzcruisepathcall->setObjectName(QStringLiteral("pushButton_ptzcruisepathcall"));
        pushButton_ptzcruisepathcall->setGeometry(QRect(760, 330, 41, 21));
        line_8 = new QFrame(RealPlayClass);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(700, 590, 151, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        pushButton_down = new QPushButton(RealPlayClass);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        pushButton_down->setGeometry(QRect(750, 60, 51, 23));
        line_15 = new QFrame(RealPlayClass);
        line_15->setObjectName(QStringLiteral("line_15"));
        line_15->setGeometry(QRect(700, 0, 41, 20));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        comboBox_qualitydemand = new QComboBox(RealPlayClass);
        comboBox_qualitydemand->setObjectName(QStringLiteral("comboBox_qualitydemand"));
        comboBox_qualitydemand->setGeometry(QRect(600, 620, 111, 22));
        label_9 = new QLabel(RealPlayClass);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(700, 540, 61, 20));
        pushButton_ptzcruisepathset = new QPushButton(RealPlayClass);
        pushButton_ptzcruisepathset->setObjectName(QStringLiteral("pushButton_ptzcruisepathset"));
        pushButton_ptzcruisepathset->setGeometry(QRect(800, 330, 41, 21));
        pushButton_expandfocus = new QPushButton(RealPlayClass);
        pushButton_expandfocus->setObjectName(QStringLiteral("pushButton_expandfocus"));
        pushButton_expandfocus->setGeometry(QRect(810, 90, 31, 31));
        label_8 = new QLabel(RealPlayClass);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(700, 510, 51, 20));
        line_6 = new QFrame(RealPlayClass);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(520, 610, 20, 41));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(RealPlayClass);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(840, 420, 20, 181));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(RealPlayClass);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(700, 450, 61, 20));
        pushButton_farfocus = new QPushButton(RealPlayClass);
        pushButton_farfocus->setObjectName(QStringLiteral("pushButton_farfocus"));
        pushButton_farfocus->setGeometry(QRect(810, 130, 31, 31));
        line_4 = new QFrame(RealPlayClass);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(350, 610, 20, 41));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton_up = new QPushButton(RealPlayClass);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        pushButton_up->setGeometry(QRect(750, 20, 51, 23));
        line_19 = new QFrame(RealPlayClass);
        line_19->setObjectName(QStringLiteral("line_19"));
        line_19->setGeometry(QRect(10, 640, 351, 20));
        line_19->setFrameShape(QFrame::HLine);
        line_19->setFrameShadow(QFrame::Sunken);
        pushButton_nearfocus = new QPushButton(RealPlayClass);
        pushButton_nearfocus->setObjectName(QStringLiteral("pushButton_nearfocus"));
        pushButton_nearfocus->setGeometry(QRect(730, 130, 31, 31));
        pushButton_ptzcruisepointset = new QPushButton(RealPlayClass);
        pushButton_ptzcruisepointset->setObjectName(QStringLiteral("pushButton_ptzcruisepointset"));
        pushButton_ptzcruisepointset->setGeometry(QRect(800, 281, 41, 20));
        pushButton_scrashPic = new QPushButton(RealPlayClass);
        pushButton_scrashPic->setObjectName(QStringLiteral("pushButton_scrashPic"));
        pushButton_scrashPic->setGeometry(QRect(180, 620, 71, 23));
        label_6 = new QLabel(RealPlayClass);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(700, 420, 71, 20));
        pushButton_trackmemoryrun = new QPushButton(RealPlayClass);
        pushButton_trackmemoryrun->setObjectName(QStringLiteral("pushButton_trackmemoryrun"));
        pushButton_trackmemoryrun->setGeometry(QRect(810, 381, 31, 20));
        line_14 = new QFrame(RealPlayClass);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setGeometry(QRect(810, 0, 41, 20));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_16 = new QFrame(RealPlayClass);
        line_16->setObjectName(QStringLiteral("line_16"));
        line_16->setGeometry(QRect(700, 400, 151, 20));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);
        comboBox_ptzcruisepoint = new QComboBox(RealPlayClass);
        comboBox_ptzcruisepoint->setObjectName(QStringLiteral("comboBox_ptzcruisepoint"));
        comboBox_ptzcruisepoint->setGeometry(QRect(710, 280, 45, 21));
        pushButton_trackmemorystop = new QPushButton(RealPlayClass);
        pushButton_trackmemorystop->setObjectName(QStringLiteral("pushButton_trackmemorystop"));
        pushButton_trackmemorystop->setGeometry(QRect(770, 380, 31, 21));
        label_5 = new QLabel(RealPlayClass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(730, 220, 81, 20));
        pushButton_narrowfocus = new QPushButton(RealPlayClass);
        pushButton_narrowfocus->setObjectName(QStringLiteral("pushButton_narrowfocus"));
        pushButton_narrowfocus->setGeometry(QRect(730, 90, 31, 31));
        comboBox_ptzcruisepath = new QComboBox(RealPlayClass);
        comboBox_ptzcruisepath->setObjectName(QStringLiteral("comboBox_ptzcruisepath"));
        comboBox_ptzcruisepath->setGeometry(QRect(710, 330, 45, 21));
        pushButton_trackmemorystart = new QPushButton(RealPlayClass);
        pushButton_trackmemorystart->setObjectName(QStringLiteral("pushButton_trackmemorystart"));
        pushButton_trackmemorystart->setGeometry(QRect(720, 380, 41, 21));
        comboBox_ptzspeed = new QComboBox(RealPlayClass);
        comboBox_ptzspeed->setObjectName(QStringLiteral("comboBox_ptzspeed"));
        comboBox_ptzspeed->setGeometry(QRect(730, 240, 101, 21));
        line_7 = new QFrame(RealPlayClass);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(530, 610, 16, 41));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        pushButton_smallaperture = new QPushButton(RealPlayClass);
        pushButton_smallaperture->setObjectName(QStringLiteral("pushButton_smallaperture"));
        pushButton_smallaperture->setGeometry(QRect(810, 170, 31, 31));
        horizontalSlider_bright = new QSlider(RealPlayClass);
        horizontalSlider_bright->setObjectName(QStringLiteral("horizontalSlider_bright"));
        horizontalSlider_bright->setGeometry(QRect(780, 420, 71, 21));
        horizontalSlider_bright->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(RealPlayClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(770, 170, 41, 31));
        pushButton_realplay = new QPushButton(RealPlayClass);
        pushButton_realplay->setObjectName(QStringLiteral("pushButton_realplay"));
        pushButton_realplay->setGeometry(QRect(20, 620, 71, 23));
        pushButton_ptzcruisepointcall = new QPushButton(RealPlayClass);
        pushButton_ptzcruisepointcall->setObjectName(QStringLiteral("pushButton_ptzcruisepointcall"));
        pushButton_ptzcruisepointcall->setGeometry(QRect(760, 280, 41, 21));
        line_17 = new QFrame(RealPlayClass);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setGeometry(QRect(700, 310, 41, 20));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);
        line_18 = new QFrame(RealPlayClass);
        line_18->setObjectName(QStringLiteral("line_18"));
        line_18->setGeometry(QRect(800, 650, 41, 16));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);
        line_20 = new QFrame(RealPlayClass);
        line_20->setObjectName(QStringLiteral("line_20"));
        line_20->setGeometry(QRect(831, 360, 20, 20));
        line_20->setFrameShape(QFrame::HLine);
        line_20->setFrameShadow(QFrame::Sunken);
        line_21 = new QFrame(RealPlayClass);
        line_21->setObjectName(QStringLiteral("line_21"));
        line_21->setGeometry(QRect(790, 260, 61, 20));
        line_21->setFrameShape(QFrame::HLine);
        line_21->setFrameShadow(QFrame::Sunken);
        line_23 = new QFrame(RealPlayClass);
        line_23->setObjectName(QStringLiteral("line_23"));
        line_23->setGeometry(QRect(700, 360, 41, 20));
        line_23->setFrameShape(QFrame::HLine);
        line_23->setFrameShadow(QFrame::Sunken);
        line_28 = new QFrame(RealPlayClass);
        line_28->setObjectName(QStringLiteral("line_28"));
        line_28->setGeometry(QRect(830, 310, 21, 20));
        line_28->setFrameShape(QFrame::HLine);
        line_28->setFrameShadow(QFrame::Sunken);
        line_29 = new QFrame(RealPlayClass);
        line_29->setObjectName(QStringLiteral("line_29"));
        line_29->setGeometry(QRect(700, 260, 51, 21));
        line_29->setFrameShape(QFrame::HLine);
        line_29->setFrameShadow(QFrame::Sunken);
        m_pframePlay = new QFrame(RealPlayClass);
        m_pframePlay->setObjectName(QStringLiteral("m_pframePlay"));
        m_pframePlay->setGeometry(QRect(10, 20, 681, 571));
        m_pframePlay->setFrameShape(QFrame::StyledPanel);
        m_pframePlay->setFrameShadow(QFrame::Raised);

        retranslateUi(RealPlayClass);

        QMetaObject::connectSlotsByName(RealPlayClass);
    } // setupUi

    void retranslateUi(QWidget *RealPlayClass)
    {
        RealPlayClass->setWindowTitle(QApplication::translate("RealPlayClass", "RealPlay", Q_NULLPTR));
        comboBox_windowsnum->clear();
        comboBox_windowsnum->insertItems(0, QStringList()
         << QApplication::translate("RealPlayClass", "1", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "4", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "9", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "16", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "25", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "36", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("RealPlayClass", "Focus", Q_NULLPTR));
        label_12->setText(QApplication::translate("RealPlayClass", "preset", Q_NULLPTR));
        label->setText(QApplication::translate("RealPlayClass", "Window num", Q_NULLPTR));
        pushButton_largeaperture->setText(QApplication::translate("RealPlayClass", "+", Q_NULLPTR));
        label_13->setText(QApplication::translate("RealPlayClass", "PTZ sequence", Q_NULLPTR));
        pushButton_savefile->setText(QApplication::translate("RealPlayClass", "Record", Q_NULLPTR));
        label_15->setText(QApplication::translate("RealPlayClass", "PTZ control", Q_NULLPTR));
        pushButton_right->setText(QApplication::translate("RealPlayClass", "Right", Q_NULLPTR));
        label_2->setText(QApplication::translate("RealPlayClass", "Zoom", Q_NULLPTR));
        label_14->setText(QApplication::translate("RealPlayClass", "record cruise", Q_NULLPTR));
        label_10->setText(QApplication::translate("RealPlayClass", "Saturation", Q_NULLPTR));
        pushButton_defaultparameter->setText(QApplication::translate("RealPlayClass", "Default", Q_NULLPTR));
        pushButton_left->setText(QApplication::translate("RealPlayClass", "Left", Q_NULLPTR));
        label_11->setText(QApplication::translate("RealPlayClass", "Network", Q_NULLPTR));
        pushButton_forceIframe->setText(QApplication::translate("RealPlayClass", "Create I frame", Q_NULLPTR));
        pushButton_ptzcruisepathcall->setText(QApplication::translate("RealPlayClass", "Call", Q_NULLPTR));
        pushButton_down->setText(QApplication::translate("RealPlayClass", "Down", Q_NULLPTR));
        comboBox_qualitydemand->clear();
        comboBox_qualitydemand->insertItems(0, QStringList()
         << QApplication::translate("RealPlayClass", "Most realtime", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "More realtime", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "Realtime,smooth", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "More smooth", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "Most smooth", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("RealPlayClass", "Volume", Q_NULLPTR));
        pushButton_ptzcruisepathset->setText(QApplication::translate("RealPlayClass", "set", Q_NULLPTR));
        pushButton_expandfocus->setText(QApplication::translate("RealPlayClass", "+", Q_NULLPTR));
        label_8->setText(QApplication::translate("RealPlayClass", "Hue", Q_NULLPTR));
        label_7->setText(QApplication::translate("RealPlayClass", "Contrast", Q_NULLPTR));
        pushButton_farfocus->setText(QApplication::translate("RealPlayClass", "+", Q_NULLPTR));
        pushButton_up->setText(QApplication::translate("RealPlayClass", "Up", Q_NULLPTR));
        pushButton_nearfocus->setText(QApplication::translate("RealPlayClass", "-", Q_NULLPTR));
        pushButton_ptzcruisepointset->setText(QApplication::translate("RealPlayClass", "set", Q_NULLPTR));
        pushButton_scrashPic->setText(QApplication::translate("RealPlayClass", "Snapshot", Q_NULLPTR));
        label_6->setText(QApplication::translate("RealPlayClass", "Brightness", Q_NULLPTR));
        pushButton_trackmemoryrun->setText(QApplication::translate("RealPlayClass", "run", Q_NULLPTR));
        comboBox_ptzcruisepoint->clear();
        comboBox_ptzcruisepoint->insertItems(0, QStringList()
         << QApplication::translate("RealPlayClass", "1", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "2", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "3", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "4", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "5", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "6", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "7", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "8", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "9", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "10", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "11", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "12", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "13", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "14", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "15", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "16", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "17", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "18", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "19", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "20", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "21", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "22", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "23", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "24", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "25", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "26", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "27", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "28", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "29", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "30", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "31", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "32", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "33", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "34", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "35", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "36", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "37", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "38", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "39", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "40", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "41", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "42", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "43", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "44", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "45", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "46", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "47", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "48", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "49", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "50", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "51", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "52", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "53", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "54", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "55", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "56", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "57", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "58", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "59", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "60", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "61", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "62", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "63", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "64", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "65", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "66", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "67", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "68", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "69", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "70", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "71", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "72", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "73", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "74", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "75", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "76", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "77", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "78", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "79", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "80", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "81", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "82", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "83", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "84", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "85", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "86", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "87", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "88", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "89", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "90", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "91", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "92", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "93", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "94", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "95", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "96", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "97", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "98", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "99", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "100", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "101", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "102", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "103", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "104", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "105", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "106", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "107", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "108", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "109", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "110", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "111", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "112", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "113", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "114", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "115", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "116", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "117", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "118", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "119", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "120", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "121", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "122", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "123", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "124", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "125", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "126", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "127", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "128", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "129", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "130", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "131", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "132", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "133", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "134", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "135", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "136", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "137", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "138", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "139", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "140", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "141", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "142", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "143", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "144", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "145", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "146", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "147", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "148", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "149", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "150", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "151", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "152", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "153", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "154", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "155", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "156", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "257", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "158", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "159", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "160", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "161", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "162", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "163", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "164", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "165", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "166", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "167", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "168", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "169", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "170", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "171", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "172", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "173", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "174", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "175", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "176", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "177", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "178", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "179", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "180", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "181", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "182", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "183", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "184", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "185", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "186", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "187", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "188", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "189", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "190", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "191", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "192", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "193", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "194", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "195", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "196", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "197", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "198", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "199", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "200", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "201", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "202", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "203", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "204", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "205", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "206", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "207", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "208", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "209", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "210", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "211", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "212", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "213", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "214", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "215", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "216", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "217", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "218", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "219", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "220", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "221", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "222", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "223", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "224", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "225", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "226", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "227", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "228", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "229", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "230", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "231", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "232", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "233", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "234", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "235", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "236", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "237", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "238", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "239", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "240", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "241", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "242", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "243", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "244", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "245", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "246", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "247", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "248", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "249", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "250", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "251", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "252", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "253", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "254", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "255", Q_NULLPTR)
        );
        pushButton_trackmemorystop->setText(QApplication::translate("RealPlayClass", "stop", Q_NULLPTR));
        label_5->setText(QApplication::translate("RealPlayClass", "PTZ speed", Q_NULLPTR));
        pushButton_narrowfocus->setText(QApplication::translate("RealPlayClass", "-", Q_NULLPTR));
        comboBox_ptzcruisepath->clear();
        comboBox_ptzcruisepath->insertItems(0, QStringList()
         << QApplication::translate("RealPlayClass", "1", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "2", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "3", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "4", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "5", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "6", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "7", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "8", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "9", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "10", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "11", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "12", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "13", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "14", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "15", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "16", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "17", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "18", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "19", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "20", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "21", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "22", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "23", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "24", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "25", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "26", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "27", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "28", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "29", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "30", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "31", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "32", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "33", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "34", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "35", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "36", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "37", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "38", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "39", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "40", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "41", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "42", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "43", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "44", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "45", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "46", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "47", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "48", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "49", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "50", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "51", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "52", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "53", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "54", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "55", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "56", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "57", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "58", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "59", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "60", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "61", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "62", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "63", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "64", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "65", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "66", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "67", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "68", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "69", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "70", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "71", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "72", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "73", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "74", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "75", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "76", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "77", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "78", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "79", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "80", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "81", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "82", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "83", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "84", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "85", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "86", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "87", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "88", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "89", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "90", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "91", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "92", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "93", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "94", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "95", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "96", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "97", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "98", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "99", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "100", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "101", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "102", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "103", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "104", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "105", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "106", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "107", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "108", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "109", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "110", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "111", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "112", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "113", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "114", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "115", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "116", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "117", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "118", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "119", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "120", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "121", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "122", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "123", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "124", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "125", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "126", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "127", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "128", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "129", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "130", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "131", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "132", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "133", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "134", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "135", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "136", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "137", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "138", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "139", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "140", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "141", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "142", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "143", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "144", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "145", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "146", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "147", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "148", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "149", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "150", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "151", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "152", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "153", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "154", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "155", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "156", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "257", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "158", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "159", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "160", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "161", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "162", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "163", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "164", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "165", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "166", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "167", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "168", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "169", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "170", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "171", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "172", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "173", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "174", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "175", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "176", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "177", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "178", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "179", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "180", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "181", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "182", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "183", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "184", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "185", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "186", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "187", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "188", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "189", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "190", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "191", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "192", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "193", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "194", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "195", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "196", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "197", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "198", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "199", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "200", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "201", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "202", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "203", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "204", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "205", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "206", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "207", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "208", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "209", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "210", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "211", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "212", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "213", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "214", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "215", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "216", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "217", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "218", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "219", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "220", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "221", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "222", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "223", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "224", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "225", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "226", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "227", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "228", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "229", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "230", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "231", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "232", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "233", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "234", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "235", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "236", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "237", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "238", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "239", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "240", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "241", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "242", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "243", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "244", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "245", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "246", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "247", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "248", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "249", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "250", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "251", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "252", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "253", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "254", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "255", Q_NULLPTR)
        );
        pushButton_trackmemorystart->setText(QApplication::translate("RealPlayClass", "start", Q_NULLPTR));
        comboBox_ptzspeed->clear();
        comboBox_ptzspeed->insertItems(0, QStringList()
         << QApplication::translate("RealPlayClass", "Default", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "1", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "2", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "3", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "4", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "5", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "6", Q_NULLPTR)
         << QApplication::translate("RealPlayClass", "7", Q_NULLPTR)
        );
        pushButton_smallaperture->setText(QApplication::translate("RealPlayClass", "-", Q_NULLPTR));
        label_4->setText(QApplication::translate("RealPlayClass", "Lris", Q_NULLPTR));
        pushButton_realplay->setText(QApplication::translate("RealPlayClass", "Play", Q_NULLPTR));
        pushButton_ptzcruisepointcall->setText(QApplication::translate("RealPlayClass", "call", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RealPlayClass: public Ui_RealPlayClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REALPLAY_H
