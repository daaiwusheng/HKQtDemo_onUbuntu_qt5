/********************************************************************************
** Form generated from reading UI file 'qtclientdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCLIENTDEMO_H
#define UI_QTCLIENTDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtClientDemoClass
{
public:
    QWidget *centralwidget;
    QFrame *line_25;
    QPushButton *Manage_pushButton;
    QPushButton *pushButton_logaramsave;
    QFrame *line_9;
    QPushButton *Other_pushButton;
    QFrame *line_12;
    QFrame *line_10;
    QFrame *line_13;
    QPushButton *Exit_pushButton;
    QFrame *line_7;
    QFrame *line_3;
    QTreeView *DVRsets_treeView;
    QPushButton *PlayBack_pushButton;
    QRadioButton *radioButton_alarminfo;
    QFrame *line;
    QRadioButton *radioButton_locallog;
    QPushButton *pushButton_logaramclear;
    QLabel *CurrDataTime_label;
    QPushButton *pushButton_logaramtest;
    QFrame *line_8;
    QFrame *line_22;
    QFrame *line_6;
    QFrame *line_11;
    QFrame *line_14;
    QFrame *line_24;
    QPushButton *Preview_pushButton;
    QFrame *line_23;
    QPushButton *pushButton_logaramlistconf;
    QPushButton *Configure_pushButton;
    QFrame *line_2;
    QWidget *verticalLayout;
    QVBoxLayout *vboxLayout;
    QLabel *m_labelNetSDKVersion;
    QLabel *m_labelPlayerSDKVersion;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QtClientDemoClass)
    {
        if (QtClientDemoClass->objectName().isEmpty())
            QtClientDemoClass->setObjectName(QStringLiteral("QtClientDemoClass"));
        QtClientDemoClass->resize(1049, 877);
        QtClientDemoClass->setMinimumSize(QSize(1049, 877));
        QtClientDemoClass->setMaximumSize(QSize(1049, 877));
        centralwidget = new QWidget(QtClientDemoClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        line_25 = new QFrame(centralwidget);
        line_25->setObjectName(QStringLiteral("line_25"));
        line_25->setGeometry(QRect(200, 820, 841, 20));
        line_25->setFrameShape(QFrame::HLine);
        line_25->setFrameShadow(QFrame::Sunken);
        Manage_pushButton = new QPushButton(centralwidget);
        Manage_pushButton->setObjectName(QStringLiteral("Manage_pushButton"));
        Manage_pushButton->setGeometry(QRect(540, 20, 91, 41));
        pushButton_logaramsave = new QPushButton(centralwidget);
        pushButton_logaramsave->setObjectName(QStringLiteral("pushButton_logaramsave"));
        pushButton_logaramsave->setGeometry(QRect(950, 770, 75, 23));
        line_9 = new QFrame(centralwidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(900, 60, 141, 21));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        Other_pushButton = new QPushButton(centralwidget);
        Other_pushButton->setObjectName(QStringLiteral("Other_pushButton"));
        Other_pushButton->setGeometry(QRect(660, 20, 91, 41));
        line_12 = new QFrame(centralwidget);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(160, 10, 20, 61));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(centralwidget);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(170, 60, 721, 20));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(centralwidget);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setGeometry(QRect(880, 10, 20, 61));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);
        Exit_pushButton = new QPushButton(centralwidget);
        Exit_pushButton->setObjectName(QStringLiteral("Exit_pushButton"));
        Exit_pushButton->setGeometry(QRect(780, 20, 91, 41));
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(1030, 10, 20, 61));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 10, 20, 61));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        DVRsets_treeView = new QTreeView(centralwidget);
        DVRsets_treeView->setObjectName(QStringLiteral("DVRsets_treeView"));
        DVRsets_treeView->setGeometry(QRect(10, 80, 171, 751));
        PlayBack_pushButton = new QPushButton(centralwidget);
        PlayBack_pushButton->setObjectName(QStringLiteral("PlayBack_pushButton"));
        PlayBack_pushButton->setGeometry(QRect(420, 20, 91, 41));
        radioButton_alarminfo = new QRadioButton(centralwidget);
        radioButton_alarminfo->setObjectName(QStringLiteral("radioButton_alarminfo"));
        radioButton_alarminfo->setGeometry(QRect(940, 745, 101, 20));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 60, 151, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        radioButton_locallog = new QRadioButton(centralwidget);
        radioButton_locallog->setObjectName(QStringLiteral("radioButton_locallog"));
        radioButton_locallog->setGeometry(QRect(850, 745, 91, 17));
        pushButton_logaramclear = new QPushButton(centralwidget);
        pushButton_logaramclear->setObjectName(QStringLiteral("pushButton_logaramclear"));
        pushButton_logaramclear->setGeometry(QRect(850, 770, 75, 23));
        CurrDataTime_label = new QLabel(centralwidget);
        CurrDataTime_label->setObjectName(QStringLiteral("CurrDataTime_label"));
        CurrDataTime_label->setGeometry(QRect(930, 10, 91, 51));
        pushButton_logaramtest = new QPushButton(centralwidget);
        pushButton_logaramtest->setObjectName(QStringLiteral("pushButton_logaramtest"));
        pushButton_logaramtest->setGeometry(QRect(950, 800, 75, 23));
        line_8 = new QFrame(centralwidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(900, 0, 141, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_22 = new QFrame(centralwidget);
        line_22->setObjectName(QStringLiteral("line_22"));
        line_22->setGeometry(QRect(1030, 740, 20, 91));
        line_22->setFrameShape(QFrame::VLine);
        line_22->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(890, 10, 20, 61));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(centralwidget);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(170, 0, 721, 20));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(centralwidget);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setGeometry(QRect(10, 0, 151, 20));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_24 = new QFrame(centralwidget);
        line_24->setObjectName(QStringLiteral("line_24"));
        line_24->setGeometry(QRect(200, 730, 841, 20));
        line_24->setFrameShape(QFrame::HLine);
        line_24->setFrameShadow(QFrame::Sunken);
        Preview_pushButton = new QPushButton(centralwidget);
        Preview_pushButton->setObjectName(QStringLiteral("Preview_pushButton"));
        Preview_pushButton->setGeometry(QRect(300, 20, 91, 41));
        line_23 = new QFrame(centralwidget);
        line_23->setObjectName(QStringLiteral("line_23"));
        line_23->setGeometry(QRect(190, 740, 21, 91));
        line_23->setFrameShape(QFrame::VLine);
        line_23->setFrameShadow(QFrame::Sunken);
        pushButton_logaramlistconf = new QPushButton(centralwidget);
        pushButton_logaramlistconf->setObjectName(QStringLiteral("pushButton_logaramlistconf"));
        pushButton_logaramlistconf->setGeometry(QRect(850, 803, 75, 23));
        Configure_pushButton = new QPushButton(centralwidget);
        Configure_pushButton->setObjectName(QStringLiteral("Configure_pushButton"));
        Configure_pushButton->setGeometry(QRect(180, 20, 91, 41));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(150, 10, 20, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QWidget(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setGeometry(QRect(200, 739, 631, 91));
        vboxLayout = new QVBoxLayout(verticalLayout);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        m_labelNetSDKVersion = new QLabel(centralwidget);
        m_labelNetSDKVersion->setObjectName(QStringLiteral("m_labelNetSDKVersion"));
        m_labelNetSDKVersion->setGeometry(QRect(20, 20, 131, 17));
        m_labelPlayerSDKVersion = new QLabel(centralwidget);
        m_labelPlayerSDKVersion->setObjectName(QStringLiteral("m_labelPlayerSDKVersion"));
        m_labelPlayerSDKVersion->setGeometry(QRect(20, 40, 131, 17));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(190, 80, 851, 651));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        QtClientDemoClass->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(QtClientDemoClass);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        QtClientDemoClass->setStatusBar(statusbar);

        retranslateUi(QtClientDemoClass);

        QMetaObject::connectSlotsByName(QtClientDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtClientDemoClass)
    {
        QtClientDemoClass->setWindowTitle(QApplication::translate("QtClientDemoClass", "MainWindow", Q_NULLPTR));
        Manage_pushButton->setText(QApplication::translate("QtClientDemoClass", "Management", Q_NULLPTR));
        pushButton_logaramsave->setText(QApplication::translate("QtClientDemoClass", "Save", Q_NULLPTR));
        Other_pushButton->setText(QApplication::translate("QtClientDemoClass", "Other", Q_NULLPTR));
        Exit_pushButton->setText(QApplication::translate("QtClientDemoClass", "Exit", Q_NULLPTR));
        PlayBack_pushButton->setText(QApplication::translate("QtClientDemoClass", "Playback", Q_NULLPTR));
        radioButton_alarminfo->setText(QApplication::translate("QtClientDemoClass", "Alarm info", Q_NULLPTR));
        radioButton_locallog->setText(QApplication::translate("QtClientDemoClass", "Local log", Q_NULLPTR));
        pushButton_logaramclear->setText(QApplication::translate("QtClientDemoClass", "Clean", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CurrDataTime_label->setToolTip(QApplication::translate("QtClientDemoClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        CurrDataTime_label->setWhatsThis(QApplication::translate("QtClientDemoClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        CurrDataTime_label->setText(QApplication::translate("QtClientDemoClass", "TextLabel", Q_NULLPTR));
        pushButton_logaramtest->setText(QApplication::translate("QtClientDemoClass", "Test", Q_NULLPTR));
        Preview_pushButton->setText(QApplication::translate("QtClientDemoClass", "Preview", Q_NULLPTR));
        pushButton_logaramlistconf->setText(QApplication::translate("QtClientDemoClass", "List config", Q_NULLPTR));
        Configure_pushButton->setText(QApplication::translate("QtClientDemoClass", "Configure", Q_NULLPTR));
        m_labelNetSDKVersion->setText(QApplication::translate("QtClientDemoClass", "HCNetSDK", Q_NULLPTR));
        m_labelPlayerSDKVersion->setText(QApplication::translate("QtClientDemoClass", "PlayCtrl", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtClientDemoClass: public Ui_QtClientDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCLIENTDEMO_H
