/********************************************************************************
** Form generated from reading UI file 'resetdevice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESETDEVICE_H
#define UI_RESETDEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResetDeviceClass
{
public:
    QPushButton *pushButton_sure;
    QLabel *label;
    QPushButton *pushButton_cancel;

    void setupUi(QWidget *ResetDeviceClass)
    {
        if (ResetDeviceClass->objectName().isEmpty())
            ResetDeviceClass->setObjectName(QStringLiteral("ResetDeviceClass"));
        ResetDeviceClass->resize(362, 152);
        pushButton_sure = new QPushButton(ResetDeviceClass);
        pushButton_sure->setObjectName(QStringLiteral("pushButton_sure"));
        pushButton_sure->setGeometry(QRect(30, 80, 111, 31));
        label = new QLabel(ResetDeviceClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 291, 41));
        pushButton_cancel = new QPushButton(ResetDeviceClass);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(190, 80, 111, 31));

        retranslateUi(ResetDeviceClass);

        QMetaObject::connectSlotsByName(ResetDeviceClass);
    } // setupUi

    void retranslateUi(QWidget *ResetDeviceClass)
    {
        ResetDeviceClass->setWindowTitle(QApplication::translate("ResetDeviceClass", "ResetDevice", Q_NULLPTR));
        pushButton_sure->setText(QApplication::translate("ResetDeviceClass", "Sure", Q_NULLPTR));
        label->setText(QApplication::translate("ResetDeviceClass", "Sure to restore the default parameters?", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("ResetDeviceClass", "Cannel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ResetDeviceClass: public Ui_ResetDeviceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESETDEVICE_H
