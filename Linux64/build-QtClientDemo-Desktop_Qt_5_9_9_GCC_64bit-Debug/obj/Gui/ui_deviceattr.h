/********************************************************************************
** Form generated from reading UI file 'deviceattr.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEATTR_H
#define UI_DEVICEATTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DeviceAttrClass
{
public:
    QLineEdit *usrname_lineEdit;
    QPushButton *sure_pushButton;
    QLabel *label_9;
    QLineEdit *SID_lineEdit;
    QLineEdit *nodename_lineEdit;
    QLabel *label_6;
    QLineEdit *devType_lineEdit;
    QLabel *label_4;
    QLineEdit *McastIP_lineEdit;
    QLineEdit *ip_lineEdit;
    QLabel *label_2;
    QFrame *line_2;
    QPushButton *cancel_pushButton;
    QFrame *line_4;
    QLineEdit *port_lineEdit;
    QLabel *label_8;
    QLabel *label_7;
    QFrame *line_3;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *channelNum_lineEdit;
    QLabel *label_5;
    QFrame *line;
    QLineEdit *passwd_lineEdit;

    void setupUi(QDialog *DeviceAttrClass)
    {
        if (DeviceAttrClass->objectName().isEmpty())
            DeviceAttrClass->setObjectName(QStringLiteral("DeviceAttrClass"));
        DeviceAttrClass->resize(455, 216);
        usrname_lineEdit = new QLineEdit(DeviceAttrClass);
        usrname_lineEdit->setObjectName(QStringLiteral("usrname_lineEdit"));
        usrname_lineEdit->setGeometry(QRect(290, 20, 131, 20));
        sure_pushButton = new QPushButton(DeviceAttrClass);
        sure_pushButton->setObjectName(QStringLiteral("sure_pushButton"));
        sure_pushButton->setGeometry(QRect(210, 190, 75, 23));
        label_9 = new QLabel(DeviceAttrClass);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 140, 61, 16));
        SID_lineEdit = new QLineEdit(DeviceAttrClass);
        SID_lineEdit->setObjectName(QStringLiteral("SID_lineEdit"));
        SID_lineEdit->setGeometry(QRect(80, 140, 341, 20));
        nodename_lineEdit = new QLineEdit(DeviceAttrClass);
        nodename_lineEdit->setObjectName(QStringLiteral("nodename_lineEdit"));
        nodename_lineEdit->setGeometry(QRect(90, 20, 121, 20));
        label_6 = new QLabel(DeviceAttrClass);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(213, 110, 71, 20));
        devType_lineEdit = new QLineEdit(DeviceAttrClass);
        devType_lineEdit->setObjectName(QStringLiteral("devType_lineEdit"));
        devType_lineEdit->setGeometry(QRect(290, 110, 131, 20));
        label_4 = new QLabel(DeviceAttrClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 110, 71, 16));
        McastIP_lineEdit = new QLineEdit(DeviceAttrClass);
        McastIP_lineEdit->setObjectName(QStringLiteral("McastIP_lineEdit"));
        McastIP_lineEdit->setGeometry(QRect(290, 80, 131, 20));
        ip_lineEdit = new QLineEdit(DeviceAttrClass);
        ip_lineEdit->setObjectName(QStringLiteral("ip_lineEdit"));
        ip_lineEdit->setGeometry(QRect(90, 50, 121, 20));
        label_2 = new QLabel(DeviceAttrClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 61, 21));
        line_2 = new QFrame(DeviceAttrClass);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 170, 421, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        cancel_pushButton = new QPushButton(DeviceAttrClass);
        cancel_pushButton->setObjectName(QStringLiteral("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(350, 190, 75, 23));
        line_4 = new QFrame(DeviceAttrClass);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(420, 10, 21, 171));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        port_lineEdit = new QLineEdit(DeviceAttrClass);
        port_lineEdit->setObjectName(QStringLiteral("port_lineEdit"));
        port_lineEdit->setGeometry(QRect(90, 80, 121, 20));
        label_8 = new QLabel(DeviceAttrClass);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(230, 30, 54, 13));
        label_7 = new QLabel(DeviceAttrClass);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(230, 50, 51, 21));
        line_3 = new QFrame(DeviceAttrClass);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 10, 20, 171));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(DeviceAttrClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 80, 41, 16));
        label = new QLabel(DeviceAttrClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 71, 16));
        channelNum_lineEdit = new QLineEdit(DeviceAttrClass);
        channelNum_lineEdit->setObjectName(QStringLiteral("channelNum_lineEdit"));
        channelNum_lineEdit->setGeometry(QRect(90, 110, 121, 20));
        label_5 = new QLabel(DeviceAttrClass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(230, 80, 61, 20));
        line = new QFrame(DeviceAttrClass);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 0, 421, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        passwd_lineEdit = new QLineEdit(DeviceAttrClass);
        passwd_lineEdit->setObjectName(QStringLiteral("passwd_lineEdit"));
        passwd_lineEdit->setGeometry(QRect(290, 50, 131, 20));

        retranslateUi(DeviceAttrClass);

        QMetaObject::connectSlotsByName(DeviceAttrClass);
    } // setupUi

    void retranslateUi(QDialog *DeviceAttrClass)
    {
        DeviceAttrClass->setWindowTitle(QApplication::translate("DeviceAttrClass", "DeviceAttr", Q_NULLPTR));
        sure_pushButton->setText(QApplication::translate("DeviceAttrClass", "ok", Q_NULLPTR));
        label_9->setText(QApplication::translate("DeviceAttrClass", "serial No.", Q_NULLPTR));
        label_6->setText(QApplication::translate("DeviceAttrClass", "device type", Q_NULLPTR));
        label_4->setText(QApplication::translate("DeviceAttrClass", "channel num", Q_NULLPTR));
        label_2->setText(QApplication::translate("DeviceAttrClass", "IP address", Q_NULLPTR));
        cancel_pushButton->setText(QApplication::translate("DeviceAttrClass", "cannel", Q_NULLPTR));
        label_8->setText(QApplication::translate("DeviceAttrClass", "username", Q_NULLPTR));
        label_7->setText(QApplication::translate("DeviceAttrClass", "password", Q_NULLPTR));
        label_3->setText(QApplication::translate("DeviceAttrClass", "port", Q_NULLPTR));
        label->setText(QApplication::translate("DeviceAttrClass", "device name", Q_NULLPTR));
        label_5->setText(QApplication::translate("DeviceAttrClass", "multicast", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeviceAttrClass: public Ui_DeviceAttrClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEATTR_H
