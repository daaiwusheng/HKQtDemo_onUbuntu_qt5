/********************************************************************************
** Form generated from reading UI file 'cpppcfgdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPPPCFGDLG_H
#define UI_CPPPCFGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CPPPCfgDlg
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QCheckBox *checkBoxDataEncrypt;
    QCheckBox *checkBoxRedial;
    QComboBox *comboBoxpppType;
    QComboBox *comboBoxREDIALMODE;
    QLineEdit *lineEditpppUser;
    QLineEdit *lineEditpppPwd;
    QLineEdit *lineEditpppVerify;
    QLineEdit *lineEditRemoteIp;
    QLineEdit *lineEditLocalIp;
    QLineEdit *lineEditIpMask;
    QLineEdit *lineEditPhoneNum;
    QPushButton *pushButtonsave;
    QPushButton *pushButtoncancel;

    void setupUi(QDialog *CPPPCfgDlg)
    {
        if (CPPPCfgDlg->objectName().isEmpty())
            CPPPCfgDlg->setObjectName(QStringLiteral("CPPPCfgDlg"));
        CPPPCfgDlg->resize(602, 300);
        label = new QLabel(CPPPCfgDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 71, 25));
        label_2 = new QLabel(CPPPCfgDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 20, 91, 25));
        label_3 = new QLabel(CPPPCfgDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(23, 70, 61, 20));
        label_4 = new QLabel(CPPPCfgDlg);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 70, 61, 21));
        label_5 = new QLabel(CPPPCfgDlg);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(440, 70, 51, 20));
        label_6 = new QLabel(CPPPCfgDlg);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 130, 71, 31));
        label_7 = new QLabel(CPPPCfgDlg);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(270, 130, 91, 31));
        label_8 = new QLabel(CPPPCfgDlg);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 190, 71, 21));
        label_9 = new QLabel(CPPPCfgDlg);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(220, 461, 54, 20));
        label_10 = new QLabel(CPPPCfgDlg);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(263, 190, 91, 21));
        checkBoxDataEncrypt = new QCheckBox(CPPPCfgDlg);
        checkBoxDataEncrypt->setObjectName(QStringLiteral("checkBoxDataEncrypt"));
        checkBoxDataEncrypt->setGeometry(QRect(70, 230, 111, 31));
        checkBoxRedial = new QCheckBox(CPPPCfgDlg);
        checkBoxRedial->setObjectName(QStringLiteral("checkBoxRedial"));
        checkBoxRedial->setGeometry(QRect(230, 230, 91, 31));
        comboBoxpppType = new QComboBox(CPPPCfgDlg);
        comboBoxpppType->setObjectName(QStringLiteral("comboBoxpppType"));
        comboBoxpppType->setGeometry(QRect(100, 20, 131, 25));
        comboBoxREDIALMODE = new QComboBox(CPPPCfgDlg);
        comboBoxREDIALMODE->setObjectName(QStringLiteral("comboBoxREDIALMODE"));
        comboBoxREDIALMODE->setGeometry(QRect(370, 20, 141, 25));
        lineEditpppUser = new QLineEdit(CPPPCfgDlg);
        lineEditpppUser->setObjectName(QStringLiteral("lineEditpppUser"));
        lineEditpppUser->setGeometry(QRect(100, 70, 111, 25));
        lineEditpppPwd = new QLineEdit(CPPPCfgDlg);
        lineEditpppPwd->setObjectName(QStringLiteral("lineEditpppPwd"));
        lineEditpppPwd->setGeometry(QRect(310, 70, 101, 25));
        lineEditpppVerify = new QLineEdit(CPPPCfgDlg);
        lineEditpppVerify->setObjectName(QStringLiteral("lineEditpppVerify"));
        lineEditpppVerify->setGeometry(QRect(490, 70, 81, 25));
        lineEditRemoteIp = new QLineEdit(CPPPCfgDlg);
        lineEditRemoteIp->setObjectName(QStringLiteral("lineEditRemoteIp"));
        lineEditRemoteIp->setGeometry(QRect(100, 130, 151, 25));
        lineEditLocalIp = new QLineEdit(CPPPCfgDlg);
        lineEditLocalIp->setObjectName(QStringLiteral("lineEditLocalIp"));
        lineEditLocalIp->setGeometry(QRect(370, 130, 141, 25));
        lineEditIpMask = new QLineEdit(CPPPCfgDlg);
        lineEditIpMask->setObjectName(QStringLiteral("lineEditIpMask"));
        lineEditIpMask->setGeometry(QRect(100, 190, 151, 25));
        lineEditPhoneNum = new QLineEdit(CPPPCfgDlg);
        lineEditPhoneNum->setObjectName(QStringLiteral("lineEditPhoneNum"));
        lineEditPhoneNum->setGeometry(QRect(370, 190, 141, 25));
        pushButtonsave = new QPushButton(CPPPCfgDlg);
        pushButtonsave->setObjectName(QStringLiteral("pushButtonsave"));
        pushButtonsave->setGeometry(QRect(270, 270, 75, 23));
        pushButtoncancel = new QPushButton(CPPPCfgDlg);
        pushButtoncancel->setObjectName(QStringLiteral("pushButtoncancel"));
        pushButtoncancel->setGeometry(QRect(400, 270, 75, 23));

        retranslateUi(CPPPCfgDlg);

        QMetaObject::connectSlotsByName(CPPPCfgDlg);
    } // setupUi

    void retranslateUi(QDialog *CPPPCfgDlg)
    {
        CPPPCfgDlg->setWindowTitle(QApplication::translate("CPPPCfgDlg", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("CPPPCfgDlg", "PPP\346\250\241\345\274\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("CPPPCfgDlg", "\345\233\236\346\213\250\346\250\241\345\274\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("CPPPCfgDlg", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("CPPPCfgDlg", "\345\257\206\347\240\201", Q_NULLPTR));
        label_5->setText(QApplication::translate("CPPPCfgDlg", "\346\240\241\351\252\214", Q_NULLPTR));
        label_6->setText(QApplication::translate("CPPPCfgDlg", "\350\277\234\347\253\257IP", Q_NULLPTR));
        label_7->setText(QApplication::translate("CPPPCfgDlg", "\346\234\254\345\234\260IP", Q_NULLPTR));
        label_8->setText(QApplication::translate("CPPPCfgDlg", "\346\216\251\347\240\201", Q_NULLPTR));
        label_9->setText(QApplication::translate("CPPPCfgDlg", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("CPPPCfgDlg", "\347\224\265\350\257\235\345\217\267\347\240\201", Q_NULLPTR));
        checkBoxDataEncrypt->setText(QApplication::translate("CPPPCfgDlg", "\346\225\260\346\215\256\345\212\240\345\257\206", Q_NULLPTR));
        checkBoxRedial->setText(QApplication::translate("CPPPCfgDlg", "\345\233\236\346\213\250", Q_NULLPTR));
        comboBoxpppType->clear();
        comboBoxpppType->insertItems(0, QStringList()
         << QApplication::translate("CPPPCfgDlg", "\344\270\273\345\212\250", Q_NULLPTR)
         << QApplication::translate("CPPPCfgDlg", "\350\242\253\345\212\250", Q_NULLPTR)
        );
        comboBoxREDIALMODE->clear();
        comboBoxREDIALMODE->insertItems(0, QStringList()
         << QApplication::translate("CPPPCfgDlg", "\346\213\250\345\205\245\350\200\205\346\214\207\345\256\232", Q_NULLPTR)
         << QApplication::translate("CPPPCfgDlg", "\351\242\204\347\275\256\345\233\236\346\213\250\345\217\267", Q_NULLPTR)
         << QString()
        );
        pushButtonsave->setText(QApplication::translate("CPPPCfgDlg", "\350\256\276\347\275\256", Q_NULLPTR));
        pushButtoncancel->setText(QApplication::translate("CPPPCfgDlg", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CPPPCfgDlg: public Ui_CPPPCfgDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPPPCFGDLG_H
