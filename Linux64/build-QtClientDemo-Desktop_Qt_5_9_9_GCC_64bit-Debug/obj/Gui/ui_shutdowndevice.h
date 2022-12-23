/********************************************************************************
** Form generated from reading UI file 'shutdowndevice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHUTDOWNDEVICE_H
#define UI_SHUTDOWNDEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShutdownDeviceClass
{
public:
    QPushButton *pushButton_sure;
    QLabel *label;
    QPushButton *pushButton_cancel;

    void setupUi(QWidget *ShutdownDeviceClass)
    {
        if (ShutdownDeviceClass->objectName().isEmpty())
            ShutdownDeviceClass->setObjectName(QStringLiteral("ShutdownDeviceClass"));
        ShutdownDeviceClass->resize(309, 106);
        pushButton_sure = new QPushButton(ShutdownDeviceClass);
        pushButton_sure->setObjectName(QStringLiteral("pushButton_sure"));
        pushButton_sure->setGeometry(QRect(40, 50, 75, 23));
        label = new QLabel(ShutdownDeviceClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 20, 191, 21));
        pushButton_cancel = new QPushButton(ShutdownDeviceClass);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(170, 50, 75, 23));

        retranslateUi(ShutdownDeviceClass);

        QMetaObject::connectSlotsByName(ShutdownDeviceClass);
    } // setupUi

    void retranslateUi(QWidget *ShutdownDeviceClass)
    {
        ShutdownDeviceClass->setWindowTitle(QApplication::translate("ShutdownDeviceClass", "ShutdownDevice", Q_NULLPTR));
        pushButton_sure->setText(QApplication::translate("ShutdownDeviceClass", "Sure", Q_NULLPTR));
        label->setText(QApplication::translate("ShutdownDeviceClass", "Sure to shut down device ?", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("ShutdownDeviceClass", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShutdownDeviceClass: public Ui_ShutdownDeviceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHUTDOWNDEVICE_H
