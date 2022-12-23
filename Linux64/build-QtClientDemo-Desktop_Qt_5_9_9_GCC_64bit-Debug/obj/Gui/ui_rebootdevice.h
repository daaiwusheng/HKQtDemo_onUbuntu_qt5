/********************************************************************************
** Form generated from reading UI file 'rebootdevice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REBOOTDEVICE_H
#define UI_REBOOTDEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RebootDeviceClass
{
public:
    QPushButton *pushButton_sure;
    QPushButton *pushButton_cancel;
    QLabel *label;

    void setupUi(QDialog *RebootDeviceClass)
    {
        if (RebootDeviceClass->objectName().isEmpty())
            RebootDeviceClass->setObjectName(QStringLiteral("RebootDeviceClass"));
        RebootDeviceClass->resize(279, 104);
        pushButton_sure = new QPushButton(RebootDeviceClass);
        pushButton_sure->setObjectName(QStringLiteral("pushButton_sure"));
        pushButton_sure->setGeometry(QRect(60, 50, 77, 25));
        pushButton_cancel = new QPushButton(RebootDeviceClass);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(190, 50, 77, 25));
        label = new QLabel(RebootDeviceClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 20, 101, 20));

        retranslateUi(RebootDeviceClass);

        QMetaObject::connectSlotsByName(RebootDeviceClass);
    } // setupUi

    void retranslateUi(QDialog *RebootDeviceClass)
    {
        RebootDeviceClass->setWindowTitle(QApplication::translate("RebootDeviceClass", "RebootDevice", Q_NULLPTR));
        pushButton_sure->setText(QApplication::translate("RebootDeviceClass", "Confirm", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("RebootDeviceClass", "Cancel", Q_NULLPTR));
        label->setText(QApplication::translate("RebootDeviceClass", "Sure to reboot ?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RebootDeviceClass: public Ui_RebootDeviceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REBOOTDEVICE_H
