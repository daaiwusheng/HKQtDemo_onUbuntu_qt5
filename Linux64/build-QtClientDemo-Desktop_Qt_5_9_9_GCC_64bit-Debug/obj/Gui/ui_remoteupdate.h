/********************************************************************************
** Form generated from reading UI file 'remoteupdate.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTEUPDATE_H
#define UI_REMOTEUPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>

QT_BEGIN_NAMESPACE

class Ui_RemoteUpdateClass
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton_setnetworktype;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_browse;
    QPushButton *pushButton_update;
    QPushButton *pushButton_cancel;
    QScrollBar *horizontalScrollBar;

    void setupUi(QDialog *RemoteUpdateClass)
    {
        if (RemoteUpdateClass->objectName().isEmpty())
            RemoteUpdateClass->setObjectName(QStringLiteral("RemoteUpdateClass"));
        RemoteUpdateClass->resize(511, 200);
        label = new QLabel(RemoteUpdateClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 54, 13));
        comboBox = new QComboBox(RemoteUpdateClass);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(90, 20, 131, 22));
        pushButton_setnetworktype = new QPushButton(RemoteUpdateClass);
        pushButton_setnetworktype->setObjectName(QStringLiteral("pushButton_setnetworktype"));
        pushButton_setnetworktype->setGeometry(QRect(250, 20, 101, 23));
        label_2 = new QLabel(RemoteUpdateClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 54, 13));
        lineEdit = new QLineEdit(RemoteUpdateClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 70, 331, 20));
        pushButton_browse = new QPushButton(RemoteUpdateClass);
        pushButton_browse->setObjectName(QStringLiteral("pushButton_browse"));
        pushButton_browse->setGeometry(QRect(430, 70, 61, 23));
        pushButton_update = new QPushButton(RemoteUpdateClass);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));
        pushButton_update->setGeometry(QRect(130, 160, 75, 23));
        pushButton_cancel = new QPushButton(RemoteUpdateClass);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(300, 160, 75, 23));
        horizontalScrollBar = new QScrollBar(RemoteUpdateClass);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(20, 120, 471, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        retranslateUi(RemoteUpdateClass);

        QMetaObject::connectSlotsByName(RemoteUpdateClass);
    } // setupUi

    void retranslateUi(QDialog *RemoteUpdateClass)
    {
        RemoteUpdateClass->setWindowTitle(QApplication::translate("RemoteUpdateClass", "RemoteUpdate", Q_NULLPTR));
        label->setText(QApplication::translate("RemoteUpdateClass", "Network", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("RemoteUpdateClass", "LAN", Q_NULLPTR)
         << QApplication::translate("RemoteUpdateClass", "WAN", Q_NULLPTR)
        );
        pushButton_setnetworktype->setText(QApplication::translate("RemoteUpdateClass", "Setup network", Q_NULLPTR));
        label_2->setText(QApplication::translate("RemoteUpdateClass", "Firmware", Q_NULLPTR));
        pushButton_browse->setText(QApplication::translate("RemoteUpdateClass", "Browse", Q_NULLPTR));
        pushButton_update->setText(QApplication::translate("RemoteUpdateClass", "Upgrade", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("RemoteUpdateClass", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RemoteUpdateClass: public Ui_RemoteUpdateClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTEUPDATE_H
