/********************************************************************************
** Form generated from reading UI file 'crtspparams.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRTSPPARAMS_H
#define UI_CRTSPPARAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRtspParamsClass
{
public:
    QPushButton *btnRefresh;
    QPushButton *btnSave;
    QPushButton *btnExit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editPort;

    void setupUi(QDialog *CRtspParamsClass)
    {
        if (CRtspParamsClass->objectName().isEmpty())
            CRtspParamsClass->setObjectName(QStringLiteral("CRtspParamsClass"));
        CRtspParamsClass->resize(319, 181);
        btnRefresh = new QPushButton(CRtspParamsClass);
        btnRefresh->setObjectName(QStringLiteral("btnRefresh"));
        btnRefresh->setGeometry(QRect(10, 120, 75, 23));
        btnSave = new QPushButton(CRtspParamsClass);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setGeometry(QRect(150, 120, 75, 23));
        btnExit = new QPushButton(CRtspParamsClass);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setGeometry(QRect(240, 120, 75, 23));
        layoutWidget = new QWidget(CRtspParamsClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 50, 231, 23));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editPort = new QLineEdit(layoutWidget);
        editPort->setObjectName(QStringLiteral("editPort"));

        gridLayout->addWidget(editPort, 0, 1, 1, 1);


        retranslateUi(CRtspParamsClass);

        QMetaObject::connectSlotsByName(CRtspParamsClass);
    } // setupUi

    void retranslateUi(QDialog *CRtspParamsClass)
    {
        CRtspParamsClass->setWindowTitle(QApplication::translate("CRtspParamsClass", "CRtspParams", Q_NULLPTR));
        btnRefresh->setText(QApplication::translate("CRtspParamsClass", "Update", Q_NULLPTR));
        btnSave->setText(QApplication::translate("CRtspParamsClass", "Confirm", Q_NULLPTR));
        btnExit->setText(QApplication::translate("CRtspParamsClass", "Cancel", Q_NULLPTR));
        label->setText(QApplication::translate("CRtspParamsClass", "RTSP port", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CRtspParamsClass: public Ui_CRtspParamsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRTSPPARAMS_H
