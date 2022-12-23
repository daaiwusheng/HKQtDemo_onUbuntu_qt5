/********************************************************************************
** Form generated from reading UI file 'exceptionparams.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCEPTIONPARAMS_H
#define UI_EXCEPTIONPARAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExceptionParams
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *comboBoxExceptionType;
    QGroupBox *groupBox_2;
    QCheckBox *checkBoxMontiorAlarm;
    QCheckBox *checkBoxSoundAlarm;
    QCheckBox *checkBoxCenterAlarm;
    QCheckBox *checkBoxInvokeAlarmOut;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayoutAlarmOut;
    QPushButton *btnrefresh;
    QPushButton *btnsave;

    void setupUi(QWidget *ExceptionParams)
    {
        if (ExceptionParams->objectName().isEmpty())
            ExceptionParams->setObjectName(QStringLiteral("ExceptionParams"));
        ExceptionParams->resize(560, 441);
        groupBox = new QGroupBox(ExceptionParams);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 541, 401));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 91, 21));
        comboBoxExceptionType = new QComboBox(groupBox);
        comboBoxExceptionType->setObjectName(QStringLiteral("comboBoxExceptionType"));
        comboBoxExceptionType->setGeometry(QRect(130, 40, 181, 22));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 80, 501, 301));
        checkBoxMontiorAlarm = new QCheckBox(groupBox_2);
        checkBoxMontiorAlarm->setObjectName(QStringLiteral("checkBoxMontiorAlarm"));
        checkBoxMontiorAlarm->setGeometry(QRect(20, 30, 151, 21));
        checkBoxSoundAlarm = new QCheckBox(groupBox_2);
        checkBoxSoundAlarm->setObjectName(QStringLiteral("checkBoxSoundAlarm"));
        checkBoxSoundAlarm->setGeometry(QRect(180, 30, 111, 21));
        checkBoxCenterAlarm = new QCheckBox(groupBox_2);
        checkBoxCenterAlarm->setObjectName(QStringLiteral("checkBoxCenterAlarm"));
        checkBoxCenterAlarm->setGeometry(QRect(320, 30, 121, 21));
        checkBoxInvokeAlarmOut = new QCheckBox(groupBox_2);
        checkBoxInvokeAlarmOut->setObjectName(QStringLiteral("checkBoxInvokeAlarmOut"));
        checkBoxInvokeAlarmOut->setGeometry(QRect(20, 66, 161, 21));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 100, 471, 121));
        verticalLayoutAlarmOut = new QVBoxLayout(verticalLayoutWidget);
        verticalLayoutAlarmOut->setObjectName(QStringLiteral("verticalLayoutAlarmOut"));
        verticalLayoutAlarmOut->setContentsMargins(0, 0, 0, 0);
        btnrefresh = new QPushButton(groupBox_2);
        btnrefresh->setObjectName(QStringLiteral("btnrefresh"));
        btnrefresh->setGeometry(QRect(70, 250, 75, 23));
        btnsave = new QPushButton(groupBox_2);
        btnsave->setObjectName(QStringLiteral("btnsave"));
        btnsave->setGeometry(QRect(310, 250, 75, 23));

        retranslateUi(ExceptionParams);

        QMetaObject::connectSlotsByName(ExceptionParams);
    } // setupUi

    void retranslateUi(QWidget *ExceptionParams)
    {
        ExceptionParams->setWindowTitle(QApplication::translate("ExceptionParams", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ExceptionParams", "Exception config info", Q_NULLPTR));
        label->setText(QApplication::translate("ExceptionParams", "Exception type\357\274\232", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ExceptionParams", "Alarm handling mode", Q_NULLPTR));
        checkBoxMontiorAlarm->setText(QApplication::translate("ExceptionParams", "Show alarm on monitor", Q_NULLPTR));
        checkBoxSoundAlarm->setText(QApplication::translate("ExceptionParams", "Audio alarm", Q_NULLPTR));
        checkBoxCenterAlarm->setText(QApplication::translate("ExceptionParams", "Report to center", Q_NULLPTR));
        checkBoxInvokeAlarmOut->setText(QApplication::translate("ExceptionParams", "Trigger alarm output", Q_NULLPTR));
        btnrefresh->setText(QApplication::translate("ExceptionParams", "Update", Q_NULLPTR));
        btnsave->setText(QApplication::translate("ExceptionParams", "Confirm", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExceptionParams: public Ui_ExceptionParams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCEPTIONPARAMS_H
