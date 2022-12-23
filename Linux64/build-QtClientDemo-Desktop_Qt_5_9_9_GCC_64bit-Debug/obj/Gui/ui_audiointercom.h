/********************************************************************************
** Form generated from reading UI file 'audiointercom.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOINTERCOM_H
#define UI_AUDIOINTERCOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioIntercomClass
{
public:
    QPushButton *pushButton_startintercom;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton__stopintercom;
    QFrame *line_4;
    QFrame *line_3;
    QPushButton *pushButton_exit;
    QFrame *line_2;
    QComboBox *comboBox_channel;
    QFrame *line;
    QLabel *label_3;
    QComboBox *comboBox_streamtype;
    QPushButton *pushButton_refresh;

    void setupUi(QWidget *AudioIntercomClass)
    {
        if (AudioIntercomClass->objectName().isEmpty())
            AudioIntercomClass->setObjectName(QStringLiteral("AudioIntercomClass"));
        AudioIntercomClass->resize(573, 252);
        pushButton_startintercom = new QPushButton(AudioIntercomClass);
        pushButton_startintercom->setObjectName(QStringLiteral("pushButton_startintercom"));
        pushButton_startintercom->setGeometry(QRect(50, 72, 101, 31));
        label_2 = new QLabel(AudioIntercomClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(23, 30, 131, 21));
        label = new QLabel(AudioIntercomClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 30, 191, 20));
        pushButton__stopintercom = new QPushButton(AudioIntercomClass);
        pushButton__stopintercom->setObjectName(QStringLiteral("pushButton__stopintercom"));
        pushButton__stopintercom->setGeometry(QRect(190, 72, 101, 31));
        line_4 = new QFrame(AudioIntercomClass);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(550, 10, 20, 191));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(AudioIntercomClass);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(3, 10, 20, 191));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        pushButton_exit = new QPushButton(AudioIntercomClass);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(330, 210, 75, 31));
        line_2 = new QFrame(AudioIntercomClass);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 190, 551, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        comboBox_channel = new QComboBox(AudioIntercomClass);
        comboBox_channel->setObjectName(QStringLiteral("comboBox_channel"));
        comboBox_channel->setGeometry(QRect(170, 30, 121, 22));
        line = new QFrame(AudioIntercomClass);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 0, 551, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(AudioIntercomClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 130, 131, 20));
        comboBox_streamtype = new QComboBox(AudioIntercomClass);
        comboBox_streamtype->setObjectName(QStringLiteral("comboBox_streamtype"));
        comboBox_streamtype->setGeometry(QRect(340, 130, 91, 22));
        pushButton_refresh = new QPushButton(AudioIntercomClass);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        pushButton_refresh->setGeometry(QRect(170, 210, 75, 31));

        retranslateUi(AudioIntercomClass);

        QMetaObject::connectSlotsByName(AudioIntercomClass);
    } // setupUi

    void retranslateUi(QWidget *AudioIntercomClass)
    {
        AudioIntercomClass->setWindowTitle(QApplication::translate("AudioIntercomClass", "AudioIntercom", Q_NULLPTR));
        pushButton_startintercom->setText(QApplication::translate("AudioIntercomClass", "Start talk", Q_NULLPTR));
        label_2->setText(QApplication::translate("AudioIntercomClass", "Audio talk channel", Q_NULLPTR));
        label->setText(QApplication::translate("AudioIntercomClass", "State:used/unused", Q_NULLPTR));
        pushButton__stopintercom->setText(QApplication::translate("AudioIntercomClass", "Stop talk", Q_NULLPTR));
        pushButton_exit->setText(QApplication::translate("AudioIntercomClass", "Exit", Q_NULLPTR));
        label_3->setText(QApplication::translate("AudioIntercomClass", "Callback data type", Q_NULLPTR));
        pushButton_refresh->setText(QApplication::translate("AudioIntercomClass", "Update", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AudioIntercomClass: public Ui_AudioIntercomClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOINTERCOM_H
