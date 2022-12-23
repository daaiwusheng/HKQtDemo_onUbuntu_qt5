/********************************************************************************
** Form generated from reading UI file 'logsearch.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGSEARCH_H
#define UI_LOGSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogSearchClass
{
public:
    QFrame *line_10;
    QLabel *label_deviceIP;
    QLineEdit *lineEdit_nodename;
    QFrame *line_9;
    QLabel *label_nodename;
    QFrame *line_11;
    QLineEdit *lineEdit_deviceIP;
    QFrame *line_12;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QComboBox *comboBox_logtype;
    QComboBox *comboBox_maintype;
    QComboBox *comboBox_subtype;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QCheckBox *checkBox_smart;
    QTableWidget *logtableWidget;
    QPushButton *pushButton_searchlog;
    QPushButton *pushButton_exit;
    QLabel *label_6;
    QDateTimeEdit *dateTimeEdit_start;
    QDateTimeEdit *dateTimeEdit_stop;

    void setupUi(QWidget *LogSearchClass)
    {
        if (LogSearchClass->objectName().isEmpty())
            LogSearchClass->setObjectName(QStringLiteral("LogSearchClass"));
        LogSearchClass->resize(827, 604);
        line_10 = new QFrame(LogSearchClass);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(0, 20, 20, 571));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);
        label_deviceIP = new QLabel(LogSearchClass);
        label_deviceIP->setObjectName(QStringLiteral("label_deviceIP"));
        label_deviceIP->setGeometry(QRect(300, 30, 71, 20));
        lineEdit_nodename = new QLineEdit(LogSearchClass);
        lineEdit_nodename->setObjectName(QStringLiteral("lineEdit_nodename"));
        lineEdit_nodename->setGeometry(QRect(110, 30, 141, 20));
        line_9 = new QFrame(LogSearchClass);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(10, 10, 801, 20));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        label_nodename = new QLabel(LogSearchClass);
        label_nodename->setObjectName(QStringLiteral("label_nodename"));
        label_nodename->setGeometry(QRect(30, 30, 81, 20));
        line_11 = new QFrame(LogSearchClass);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(800, 20, 20, 571));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);
        lineEdit_deviceIP = new QLineEdit(LogSearchClass);
        lineEdit_deviceIP->setObjectName(QStringLiteral("lineEdit_deviceIP"));
        lineEdit_deviceIP->setGeometry(QRect(380, 30, 131, 20));
        line_12 = new QFrame(LogSearchClass);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(10, 590, 801, 16));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line = new QFrame(LogSearchClass);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 60, 16, 81));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(LogSearchClass);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(780, 60, 20, 81));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(LogSearchClass);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(30, 50, 761, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(LogSearchClass);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(30, 130, 761, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        comboBox_logtype = new QComboBox(LogSearchClass);
        comboBox_logtype->setObjectName(QStringLiteral("comboBox_logtype"));
        comboBox_logtype->setGeometry(QRect(90, 81, 111, 21));
        comboBox_maintype = new QComboBox(LogSearchClass);
        comboBox_maintype->setObjectName(QStringLiteral("comboBox_maintype"));
        comboBox_maintype->setGeometry(QRect(270, 80, 101, 20));
        comboBox_subtype = new QComboBox(LogSearchClass);
        comboBox_subtype->setObjectName(QStringLiteral("comboBox_subtype"));
        comboBox_subtype->setGeometry(QRect(430, 80, 111, 22));
        label = new QLabel(LogSearchClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 61, 20));
        label_2 = new QLabel(LogSearchClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 80, 61, 21));
        label_3 = new QLabel(LogSearchClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(380, 81, 51, 20));
        label_4 = new QLabel(LogSearchClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 120, 54, 13));
        label_5 = new QLabel(LogSearchClass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(250, 110, 54, 20));
        checkBox_smart = new QCheckBox(LogSearchClass);
        checkBox_smart->setObjectName(QStringLiteral("checkBox_smart"));
        checkBox_smart->setGeometry(QRect(540, 110, 111, 17));
        logtableWidget = new QTableWidget(LogSearchClass);
        if (logtableWidget->columnCount() < 5)
            logtableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        logtableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        logtableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        logtableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        logtableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        logtableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        logtableWidget->setObjectName(QStringLiteral("logtableWidget"));
        logtableWidget->setGeometry(QRect(30, 150, 761, 381));
        pushButton_searchlog = new QPushButton(LogSearchClass);
        pushButton_searchlog->setObjectName(QStringLiteral("pushButton_searchlog"));
        pushButton_searchlog->setGeometry(QRect(540, 550, 75, 23));
        pushButton_exit = new QPushButton(LogSearchClass);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(660, 550, 75, 23));
        label_6 = new QLabel(LogSearchClass);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 550, 141, 16));
        dateTimeEdit_start = new QDateTimeEdit(LogSearchClass);
        dateTimeEdit_start->setObjectName(QStringLiteral("dateTimeEdit_start"));
        dateTimeEdit_start->setGeometry(QRect(90, 110, 151, 22));
        dateTimeEdit_stop = new QDateTimeEdit(LogSearchClass);
        dateTimeEdit_stop->setObjectName(QStringLiteral("dateTimeEdit_stop"));
        dateTimeEdit_stop->setGeometry(QRect(310, 110, 151, 22));

        retranslateUi(LogSearchClass);

        QMetaObject::connectSlotsByName(LogSearchClass);
    } // setupUi

    void retranslateUi(QWidget *LogSearchClass)
    {
        LogSearchClass->setWindowTitle(QApplication::translate("LogSearchClass", "LogSearch", Q_NULLPTR));
        label_deviceIP->setText(QApplication::translate("LogSearchClass", "Device IP", Q_NULLPTR));
        label_nodename->setText(QApplication::translate("LogSearchClass", "Device name", Q_NULLPTR));
        comboBox_logtype->clear();
        comboBox_logtype->insertItems(0, QStringList()
         << QApplication::translate("LogSearchClass", "All", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "By type", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "By time", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "By type and name", Q_NULLPTR)
        );
        comboBox_maintype->clear();
        comboBox_maintype->insertItems(0, QStringList()
         << QApplication::translate("LogSearchClass", "All", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "Alarm", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "Abnormal", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "Operation", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "Information", Q_NULLPTR)
        );
        comboBox_subtype->clear();
        comboBox_subtype->insertItems(0, QStringList()
         << QApplication::translate("LogSearchClass", "ALL", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_ALARM_IN", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_ALARM_OUT", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_MOTDET_START", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_MOTDET_STOP", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_HIDE_ALARM_START", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_HIDE_ALARM_STOP", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_VCA_ALARM_START", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_VCA_ALARM_STOP", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "---Excp-------", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_VI_LOST", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_ILLEGAL_ACCESS", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_HD_FULL", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_HD_ERROR", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_DCD_LOST", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_IP_CONFLICT", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_NET_BROKEN", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REC_ERROR", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_IPC_NO_LINK", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_VI_EXCEPTION", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_IPC_IP_CONFLICT", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "----Oper-----", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_START_DVR", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_STOP_DVR", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_STOP_ABNORMAL", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REBOOT_DVR", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_LOGIN", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_LOGOUT", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_CFG_PARM", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_PLAYBYFILE", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_PLAYBYTIME", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_START_REC", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_STOP_REC", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_PTZCTRL", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_PREVIEW", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_MODIFY_TIME", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_UPGRADE", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_RECFILE_OUTPUT", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_FORMAT_HDD", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_CFGFILE_OUTPUT", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_CFGFILE_INPUT", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "----MINOR_LOCAL_COPYFILE", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_LOCKFILE", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_UNLOCKFILE", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_DVR_ALARM", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_IPC_ADD", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_IPC_DEL", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_IPC_SET", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_START_BACKUP", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_STOP_BACKUP", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_COPYFILE_START_TIME", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_COPYFILE_END_TIME", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_ADD_NAS", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_DEL_NAS", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LOCAL_SET_NAS", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_LOGIN", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_LOGOUT", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_START_REC", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_STOP_REC", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_START_TRANS_CHAN", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_STOP_TRANS_CHAN", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_GET_PARM", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_CFG_PARM", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_GET_STATUS", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_ARM", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_DISARM", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_REBOOT", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_START_VT", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_STOP_VT", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_UPGRADE", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_PLAYBYFILE", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_PLAYBYTIME", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_PTZCTRL", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_FORMAT_HDD", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_STOP", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_LOCKFILE", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_UNLOCKFILE", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_CFGFILE_OUTPUT", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_CFGFILE_INTPUT", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_RECFILE_OUTPUT", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_IPC_ADD", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_IPC_DEL", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_IPC_SET", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REBOOT_VCA_LIB", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_ADD_NAS", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_DEL_NAS", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REMOTE_SET_NAS", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "-----Info----", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_HDD_INFO", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_SMART_INFO", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REC_START", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REC_STOP", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_REC_OVERDUE", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LINK_START", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_LINK_STOP", Q_NULLPTR)
         << QApplication::translate("LogSearchClass", "MINOR_NET_DISK_INFO", Q_NULLPTR)
        );
        label->setText(QApplication::translate("LogSearchClass", "Query", Q_NULLPTR));
        label_2->setText(QApplication::translate("LogSearchClass", "Main type", Q_NULLPTR));
        label_3->setText(QApplication::translate("LogSearchClass", "Sub type", Q_NULLPTR));
        label_4->setText(QApplication::translate("LogSearchClass", "Start", Q_NULLPTR));
        label_5->setText(QApplication::translate("LogSearchClass", "End", Q_NULLPTR));
        checkBox_smart->setText(QApplication::translate("LogSearchClass", "HDD smart info", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = logtableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("LogSearchClass", "Log time", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = logtableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("LogSearchClass", "Main type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = logtableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("LogSearchClass", "Sub type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = logtableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("LogSearchClass", "Remote host", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = logtableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("LogSearchClass", "Describtion", Q_NULLPTR));
        pushButton_searchlog->setText(QApplication::translate("LogSearchClass", "Search log", Q_NULLPTR));
        pushButton_exit->setText(QApplication::translate("LogSearchClass", "Exit", Q_NULLPTR));
        label_6->setText(QApplication::translate("LogSearchClass", "Searching.......", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogSearchClass: public Ui_LogSearchClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGSEARCH_H
