/********************************************************************************
** Form generated from reading UI file 'addnode.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNODE_H
#define UI_ADDNODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNodeClass
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QPushButton *sure_pushButton;
    QPushButton *cancel_pushButton;
    QGroupBox *groupBox_2;
    QFrame *m_pFrameIPServer;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QLabel *devcname_label;
    QLineEdit *m_pEditDeviceName;
    QLabel *devicemac_label;
    QLineEdit *m_pEditDeviceSerial;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLabel *getipaddrs_label;
    QLineEdit *m_pEditIPServerIP;
    QLabel *getipaddrport_label;
    QLineEdit *m_pEditIPServerPort;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *m_pCheckBoxIPserver;
    QPushButton *m_pBtnGetDeviceIP;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_2;
    QLabel *nodename_label;
    QLineEdit *nodename_lineEdit;
    QLabel *usrname_label;
    QLineEdit *passwd_lineEdit;
    QLabel *ip_label;
    QLineEdit *ip_lineEdit;
    QLabel *passwd_label;
    QLineEdit *usrname_lineEdit;
    QLabel *port_label;
    QLineEdit *port_lineEdit;

    void setupUi(QDialog *AddNodeClass)
    {
        if (AddNodeClass->objectName().isEmpty())
            AddNodeClass->setObjectName(QStringLiteral("AddNodeClass"));
        AddNodeClass->resize(560, 341);
        gridLayout = new QGridLayout(AddNodeClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(AddNodeClass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sure_pushButton = new QPushButton(groupBox);
        sure_pushButton->setObjectName(QStringLiteral("sure_pushButton"));
        sure_pushButton->setGeometry(QRect(340, 290, 75, 23));
        cancel_pushButton = new QPushButton(groupBox);
        cancel_pushButton->setObjectName(QStringLiteral("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(430, 290, 75, 23));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 120, 521, 161));
        m_pFrameIPServer = new QFrame(groupBox_2);
        m_pFrameIPServer->setObjectName(QStringLiteral("m_pFrameIPServer"));
        m_pFrameIPServer->setGeometry(QRect(0, 45, 504, 101));
        m_pFrameIPServer->setFrameShape(QFrame::StyledPanel);
        m_pFrameIPServer->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(m_pFrameIPServer);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 38, 371, 62));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        devcname_label = new QLabel(layoutWidget);
        devcname_label->setObjectName(QStringLiteral("devcname_label"));

        gridLayout_4->addWidget(devcname_label, 0, 0, 1, 1);

        m_pEditDeviceName = new QLineEdit(layoutWidget);
        m_pEditDeviceName->setObjectName(QStringLiteral("m_pEditDeviceName"));
        m_pEditDeviceName->setMaxLength(32);

        gridLayout_4->addWidget(m_pEditDeviceName, 0, 1, 1, 1);

        devicemac_label = new QLabel(layoutWidget);
        devicemac_label->setObjectName(QStringLiteral("devicemac_label"));

        gridLayout_4->addWidget(devicemac_label, 1, 0, 1, 1);

        m_pEditDeviceSerial = new QLineEdit(layoutWidget);
        m_pEditDeviceSerial->setObjectName(QStringLiteral("m_pEditDeviceSerial"));
        m_pEditDeviceSerial->setMaxLength(48);

        gridLayout_4->addWidget(m_pEditDeviceSerial, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(m_pFrameIPServer);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 484, 29));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        getipaddrs_label = new QLabel(layoutWidget1);
        getipaddrs_label->setObjectName(QStringLiteral("getipaddrs_label"));

        gridLayout_3->addWidget(getipaddrs_label, 0, 0, 1, 1);

        m_pEditIPServerIP = new QLineEdit(layoutWidget1);
        m_pEditIPServerIP->setObjectName(QStringLiteral("m_pEditIPServerIP"));

        gridLayout_3->addWidget(m_pEditIPServerIP, 0, 1, 1, 1);

        getipaddrport_label = new QLabel(layoutWidget1);
        getipaddrport_label->setObjectName(QStringLiteral("getipaddrport_label"));

        gridLayout_3->addWidget(getipaddrport_label, 0, 2, 1, 1);

        m_pEditIPServerPort = new QLineEdit(layoutWidget1);
        m_pEditIPServerPort->setObjectName(QStringLiteral("m_pEditIPServerPort"));

        gridLayout_3->addWidget(m_pEditIPServerPort, 0, 3, 1, 1);

        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 491, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_pCheckBoxIPserver = new QCheckBox(layoutWidget2);
        m_pCheckBoxIPserver->setObjectName(QStringLiteral("m_pCheckBoxIPserver"));

        horizontalLayout->addWidget(m_pCheckBoxIPserver);

        m_pBtnGetDeviceIP = new QPushButton(layoutWidget2);
        m_pBtnGetDeviceIP->setObjectName(QStringLiteral("m_pBtnGetDeviceIP"));
        m_pBtnGetDeviceIP->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(m_pBtnGetDeviceIP);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 10, 501, 101));
        gridLayout_2 = new QGridLayout(layoutWidget3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        nodename_label = new QLabel(layoutWidget3);
        nodename_label->setObjectName(QStringLiteral("nodename_label"));

        gridLayout_2->addWidget(nodename_label, 0, 0, 1, 1);

        nodename_lineEdit = new QLineEdit(layoutWidget3);
        nodename_lineEdit->setObjectName(QStringLiteral("nodename_lineEdit"));

        gridLayout_2->addWidget(nodename_lineEdit, 0, 1, 1, 1);

        usrname_label = new QLabel(layoutWidget3);
        usrname_label->setObjectName(QStringLiteral("usrname_label"));

        gridLayout_2->addWidget(usrname_label, 0, 2, 1, 1);

        passwd_lineEdit = new QLineEdit(layoutWidget3);
        passwd_lineEdit->setObjectName(QStringLiteral("passwd_lineEdit"));

        gridLayout_2->addWidget(passwd_lineEdit, 0, 3, 1, 1);

        ip_label = new QLabel(layoutWidget3);
        ip_label->setObjectName(QStringLiteral("ip_label"));

        gridLayout_2->addWidget(ip_label, 1, 0, 1, 1);

        ip_lineEdit = new QLineEdit(layoutWidget3);
        ip_lineEdit->setObjectName(QStringLiteral("ip_lineEdit"));

        gridLayout_2->addWidget(ip_lineEdit, 1, 1, 1, 1);

        passwd_label = new QLabel(layoutWidget3);
        passwd_label->setObjectName(QStringLiteral("passwd_label"));

        gridLayout_2->addWidget(passwd_label, 1, 2, 1, 1);

        usrname_lineEdit = new QLineEdit(layoutWidget3);
        usrname_lineEdit->setObjectName(QStringLiteral("usrname_lineEdit"));

        gridLayout_2->addWidget(usrname_lineEdit, 1, 3, 1, 1);

        port_label = new QLabel(layoutWidget3);
        port_label->setObjectName(QStringLiteral("port_label"));

        gridLayout_2->addWidget(port_label, 2, 0, 1, 1);

        port_lineEdit = new QLineEdit(layoutWidget3);
        port_lineEdit->setObjectName(QStringLiteral("port_lineEdit"));

        gridLayout_2->addWidget(port_lineEdit, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(AddNodeClass);

        QMetaObject::connectSlotsByName(AddNodeClass);
    } // setupUi

    void retranslateUi(QDialog *AddNodeClass)
    {
        AddNodeClass->setWindowTitle(QApplication::translate("AddNodeClass", "AddNode", Q_NULLPTR));
        groupBox->setTitle(QString());
        sure_pushButton->setText(QApplication::translate("AddNodeClass", "Ok", Q_NULLPTR));
        cancel_pushButton->setText(QApplication::translate("AddNodeClass", "Cancel", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        devcname_label->setText(QApplication::translate("AddNodeClass", "Device name          ", Q_NULLPTR));
        devicemac_label->setText(QApplication::translate("AddNodeClass", "Device serial number", Q_NULLPTR));
        getipaddrs_label->setText(QApplication::translate("AddNodeClass", "IP Server address\357\274\232  ", Q_NULLPTR));
        getipaddrport_label->setText(QApplication::translate("AddNodeClass", "IP Server port", Q_NULLPTR));
        m_pCheckBoxIPserver->setText(QApplication::translate("AddNodeClass", "Get device ip from ip server", Q_NULLPTR));
        m_pBtnGetDeviceIP->setText(QApplication::translate("AddNodeClass", "Get ip address", Q_NULLPTR));
        nodename_label->setText(QApplication::translate("AddNodeClass", "Node name", Q_NULLPTR));
        usrname_label->setText(QApplication::translate("AddNodeClass", "Password", Q_NULLPTR));
        ip_label->setText(QApplication::translate("AddNodeClass", "Device ip", Q_NULLPTR));
        passwd_label->setText(QApplication::translate("AddNodeClass", "Username", Q_NULLPTR));
        port_label->setText(QApplication::translate("AddNodeClass", "Port", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddNodeClass: public Ui_AddNodeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNODE_H
