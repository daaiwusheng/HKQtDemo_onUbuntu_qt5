/********************************************************************************
** Form generated from reading UI file 'cipparams.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIPPARAMS_H
#define UI_CIPPARAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CIPParamsClass
{
public:
    QTableWidget *tableChannelInfo;
    QFrame *line;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *hLayout;
    QWidget *widgetIPCamora;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *editUsername;
    QLabel *label_5;
    QLineEdit *editPassword;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *editIP;
    QLabel *label_2;
    QLineEdit *editPort;
    QLabel *label_3;
    QLineEdit *editChannelNO;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QWidget *widgetCamora;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_4;
    QPushButton *btnEnable;
    QPushButton *btnDisenable;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_5;
    QPushButton *btnUpdate;
    QPushButton *btnSave;

    void setupUi(QWidget *CIPParamsClass)
    {
        if (CIPParamsClass->objectName().isEmpty())
            CIPParamsClass->setObjectName(QStringLiteral("CIPParamsClass"));
        CIPParamsClass->resize(680, 633);
        tableChannelInfo = new QTableWidget(CIPParamsClass);
        tableChannelInfo->setObjectName(QStringLiteral("tableChannelInfo"));
        tableChannelInfo->setGeometry(QRect(10, 30, 661, 381));
        line = new QFrame(CIPParamsClass);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(30, 560, 631, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(CIPParamsClass);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 430, 401, 121));
        hLayout = new QHBoxLayout(horizontalLayoutWidget);
        hLayout->setSpacing(6);
        hLayout->setContentsMargins(11, 11, 11, 11);
        hLayout->setObjectName(QStringLiteral("hLayout"));
        hLayout->setContentsMargins(0, 0, 0, 0);
        widgetIPCamora = new QWidget(horizontalLayoutWidget);
        widgetIPCamora->setObjectName(QStringLiteral("widgetIPCamora"));
        layoutWidget = new QWidget(widgetIPCamora);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 20, 151, 50));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        editUsername = new QLineEdit(layoutWidget);
        editUsername->setObjectName(QStringLiteral("editUsername"));

        gridLayout->addWidget(editUsername, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        editPassword = new QLineEdit(layoutWidget);
        editPassword->setObjectName(QStringLiteral("editPassword"));

        gridLayout->addWidget(editPassword, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(widgetIPCamora);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 177, 77));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        editIP = new QLineEdit(layoutWidget1);
        editIP->setObjectName(QStringLiteral("editIP"));

        gridLayout_2->addWidget(editIP, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        editPort = new QLineEdit(layoutWidget1);
        editPort->setObjectName(QStringLiteral("editPort"));

        gridLayout_2->addWidget(editPort, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        editChannelNO = new QLineEdit(layoutWidget1);
        editChannelNO->setObjectName(QStringLiteral("editChannelNO"));

        gridLayout_2->addWidget(editChannelNO, 2, 1, 1, 1);

        layoutWidget2 = new QWidget(widgetIPCamora);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(210, 80, 158, 25));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        btnEdit = new QPushButton(layoutWidget2);
        btnEdit->setObjectName(QStringLiteral("btnEdit"));

        gridLayout_3->addWidget(btnEdit, 0, 0, 1, 1);

        btnDelete = new QPushButton(layoutWidget2);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        gridLayout_3->addWidget(btnDelete, 0, 1, 1, 1);


        hLayout->addWidget(widgetIPCamora);

        widgetCamora = new QWidget(CIPParamsClass);
        widgetCamora->setObjectName(QStringLiteral("widgetCamora"));
        widgetCamora->setGeometry(QRect(440, 430, 131, 121));
        layoutWidget3 = new QWidget(widgetCamora);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 20, 77, 91));
        gridLayout_4 = new QGridLayout(layoutWidget3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        btnEnable = new QPushButton(layoutWidget3);
        btnEnable->setObjectName(QStringLiteral("btnEnable"));

        gridLayout_4->addWidget(btnEnable, 0, 0, 1, 1);

        btnDisenable = new QPushButton(layoutWidget3);
        btnDisenable->setObjectName(QStringLiteral("btnDisenable"));

        gridLayout_4->addWidget(btnDisenable, 1, 0, 1, 1);

        layoutWidget4 = new QWidget(CIPParamsClass);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(390, 580, 181, 41));
        gridLayout_5 = new QGridLayout(layoutWidget4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        btnUpdate = new QPushButton(layoutWidget4);
        btnUpdate->setObjectName(QStringLiteral("btnUpdate"));

        gridLayout_5->addWidget(btnUpdate, 0, 0, 1, 1);

        btnSave = new QPushButton(layoutWidget4);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        gridLayout_5->addWidget(btnSave, 0, 1, 1, 1);


        retranslateUi(CIPParamsClass);

        QMetaObject::connectSlotsByName(CIPParamsClass);
    } // setupUi

    void retranslateUi(QWidget *CIPParamsClass)
    {
        CIPParamsClass->setWindowTitle(QApplication::translate("CIPParamsClass", "CIPParams", Q_NULLPTR));
        label_4->setText(QApplication::translate("CIPParamsClass", "Username", Q_NULLPTR));
        editUsername->setText(QApplication::translate("CIPParamsClass", "adimin", Q_NULLPTR));
        label_5->setText(QApplication::translate("CIPParamsClass", "Password", Q_NULLPTR));
        editPassword->setText(QApplication::translate("CIPParamsClass", "12345", Q_NULLPTR));
        label->setText(QApplication::translate("CIPParamsClass", "IP address", Q_NULLPTR));
        editIP->setText(QApplication::translate("CIPParamsClass", "172.7.160.2", Q_NULLPTR));
        label_2->setText(QApplication::translate("CIPParamsClass", "Port", Q_NULLPTR));
        editPort->setText(QApplication::translate("CIPParamsClass", "8000", Q_NULLPTR));
        label_3->setText(QApplication::translate("CIPParamsClass", "Channel No.", Q_NULLPTR));
        editChannelNO->setText(QApplication::translate("CIPParamsClass", "1", Q_NULLPTR));
        btnEdit->setText(QApplication::translate("CIPParamsClass", "Add", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("CIPParamsClass", "Delete", Q_NULLPTR));
        btnEnable->setText(QApplication::translate("CIPParamsClass", "Enable", Q_NULLPTR));
        btnDisenable->setText(QApplication::translate("CIPParamsClass", "Disable", Q_NULLPTR));
        btnUpdate->setText(QApplication::translate("CIPParamsClass", "Update", Q_NULLPTR));
        btnSave->setText(QApplication::translate("CIPParamsClass", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CIPParamsClass: public Ui_CIPParamsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIPPARAMS_H
