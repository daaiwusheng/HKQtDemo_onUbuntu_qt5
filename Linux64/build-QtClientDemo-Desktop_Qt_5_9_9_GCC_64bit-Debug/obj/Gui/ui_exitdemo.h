/********************************************************************************
** Form generated from reading UI file 'exitdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITDEMO_H
#define UI_EXITDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ExitDemoClass
{
public:
    QPushButton *pushButton_sure;
    QPushButton *pushButton_cancel;
    QLabel *label;

    void setupUi(QDialog *ExitDemoClass)
    {
        if (ExitDemoClass->objectName().isEmpty())
            ExitDemoClass->setObjectName(QStringLiteral("ExitDemoClass"));
        ExitDemoClass->resize(283, 87);
        pushButton_sure = new QPushButton(ExitDemoClass);
        pushButton_sure->setObjectName(QStringLiteral("pushButton_sure"));
        pushButton_sure->setGeometry(QRect(20, 50, 77, 25));
        pushButton_cancel = new QPushButton(ExitDemoClass);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(160, 50, 77, 25));
        label = new QLabel(ExitDemoClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 10, 121, 31));

        retranslateUi(ExitDemoClass);

        QMetaObject::connectSlotsByName(ExitDemoClass);
    } // setupUi

    void retranslateUi(QDialog *ExitDemoClass)
    {
        ExitDemoClass->setWindowTitle(QApplication::translate("ExitDemoClass", "ExitDemo", Q_NULLPTR));
        pushButton_sure->setText(QApplication::translate("ExitDemoClass", "Sure", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("ExitDemoClass", "Cancel", Q_NULLPTR));
        label->setText(QApplication::translate("ExitDemoClass", "Sure to exit ?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExitDemoClass: public Ui_ExitDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITDEMO_H
