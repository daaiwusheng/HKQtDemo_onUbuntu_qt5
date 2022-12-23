/********************************************************************************
** Form generated from reading UI file 'channelattr.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANNELATTR_H
#define UI_CHANNELATTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChannelAttrClass
{
public:
    QLineEdit *channNum_lineEdit;
    QFrame *line_4;
    QLabel *devAddr_label;
    QLabel *label_4;
    QLabel *devName_label;
    QComboBox *transProtocol_comboBox;
    QLineEdit *devAddr_lineEdit;
    QFrame *line_3;
    QLabel *label_5;
    QFrame *line_2;
    QLineEdit *devName_lineEdit;
    QPushButton *sure_pushButton;
    QComboBox *streamType_comboBox;
    QFrame *line;
    QPushButton *cancel_pushButton;
    QLineEdit *channName_lineEdit;
    QLabel *channNodeName_label;
    QLabel *channNum_label;

    void setupUi(QDialog *ChannelAttrClass)
    {
        if (ChannelAttrClass->objectName().isEmpty())
            ChannelAttrClass->setObjectName(QStringLiteral("ChannelAttrClass"));
        ChannelAttrClass->resize(312, 256);
        channNum_lineEdit = new QLineEdit(ChannelAttrClass);
        channNum_lineEdit->setObjectName(QStringLiteral("channNum_lineEdit"));
        channNum_lineEdit->setGeometry(QRect(120, 60, 113, 20));
        line_4 = new QFrame(ChannelAttrClass);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(290, 10, 20, 201));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        devAddr_label = new QLabel(ChannelAttrClass);
        devAddr_label->setObjectName(QStringLiteral("devAddr_label"));
        devAddr_label->setGeometry(QRect(50, 120, 61, 21));
        label_4 = new QLabel(ChannelAttrClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 150, 61, 21));
        devName_label = new QLabel(ChannelAttrClass);
        devName_label->setObjectName(QStringLiteral("devName_label"));
        devName_label->setGeometry(QRect(50, 90, 61, 20));
        transProtocol_comboBox = new QComboBox(ChannelAttrClass);
        transProtocol_comboBox->setObjectName(QStringLiteral("transProtocol_comboBox"));
        transProtocol_comboBox->setGeometry(QRect(120, 150, 111, 22));
        devAddr_lineEdit = new QLineEdit(ChannelAttrClass);
        devAddr_lineEdit->setObjectName(QStringLiteral("devAddr_lineEdit"));
        devAddr_lineEdit->setGeometry(QRect(120, 120, 113, 20));
        line_3 = new QFrame(ChannelAttrClass);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 10, 20, 201));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(ChannelAttrClass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 180, 61, 21));
        line_2 = new QFrame(ChannelAttrClass);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 200, 291, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        devName_lineEdit = new QLineEdit(ChannelAttrClass);
        devName_lineEdit->setObjectName(QStringLiteral("devName_lineEdit"));
        devName_lineEdit->setGeometry(QRect(120, 90, 113, 20));
        sure_pushButton = new QPushButton(ChannelAttrClass);
        sure_pushButton->setObjectName(QStringLiteral("sure_pushButton"));
        sure_pushButton->setGeometry(QRect(70, 220, 75, 23));
        streamType_comboBox = new QComboBox(ChannelAttrClass);
        streamType_comboBox->setObjectName(QStringLiteral("streamType_comboBox"));
        streamType_comboBox->setGeometry(QRect(120, 180, 111, 22));
        line = new QFrame(ChannelAttrClass);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 0, 291, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        cancel_pushButton = new QPushButton(ChannelAttrClass);
        cancel_pushButton->setObjectName(QStringLiteral("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(200, 220, 75, 23));
        channName_lineEdit = new QLineEdit(ChannelAttrClass);
        channName_lineEdit->setObjectName(QStringLiteral("channName_lineEdit"));
        channName_lineEdit->setGeometry(QRect(120, 30, 113, 20));
        channNodeName_label = new QLabel(ChannelAttrClass);
        channNodeName_label->setObjectName(QStringLiteral("channNodeName_label"));
        channNodeName_label->setGeometry(QRect(53, 30, 61, 21));
        channNum_label = new QLabel(ChannelAttrClass);
        channNum_label->setObjectName(QStringLiteral("channNum_label"));
        channNum_label->setGeometry(QRect(53, 60, 61, 20));

        retranslateUi(ChannelAttrClass);

        QMetaObject::connectSlotsByName(ChannelAttrClass);
    } // setupUi

    void retranslateUi(QDialog *ChannelAttrClass)
    {
        ChannelAttrClass->setWindowTitle(QApplication::translate("ChannelAttrClass", "ChannelAttr", Q_NULLPTR));
        devAddr_label->setText(QApplication::translate("ChannelAttrClass", "\350\256\276\345\244\207\345\234\260\345\235\200", Q_NULLPTR));
        label_4->setText(QApplication::translate("ChannelAttrClass", "\344\274\240\350\276\223\345\215\217\350\256\256", Q_NULLPTR));
        devName_label->setText(QApplication::translate("ChannelAttrClass", "\350\256\276\345\244\207\345\220\215\347\247\260", Q_NULLPTR));
        transProtocol_comboBox->clear();
        transProtocol_comboBox->insertItems(0, QStringList()
         << QApplication::translate("ChannelAttrClass", "TCP", Q_NULLPTR)
         << QApplication::translate("ChannelAttrClass", "UDP", Q_NULLPTR)
         << QApplication::translate("ChannelAttrClass", "Mcast", Q_NULLPTR)
         << QApplication::translate("ChannelAttrClass", "RTP", Q_NULLPTR)
         << QApplication::translate("ChannelAttrClass", "RTP/RTSP", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("ChannelAttrClass", "\344\274\240\350\276\223\347\261\273\345\236\213", Q_NULLPTR));
        sure_pushButton->setText(QApplication::translate("ChannelAttrClass", "\347\241\256\350\256\244", Q_NULLPTR));
        streamType_comboBox->clear();
        streamType_comboBox->insertItems(0, QStringList()
         << QApplication::translate("ChannelAttrClass", "\344\270\273\347\240\201\346\265\201", Q_NULLPTR)
         << QApplication::translate("ChannelAttrClass", "\345\255\220\347\240\201\346\265\201", Q_NULLPTR)
        );
        cancel_pushButton->setText(QApplication::translate("ChannelAttrClass", "\345\217\226\346\266\210", Q_NULLPTR));
        channNodeName_label->setText(QApplication::translate("ChannelAttrClass", "\351\200\232\351\201\223\345\220\215\347\247\260", Q_NULLPTR));
        channNum_label->setText(QApplication::translate("ChannelAttrClass", "\351\200\232\351\201\223\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChannelAttrClass: public Ui_ChannelAttrClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNELATTR_H
