/********************************************************************************
** Form generated from reading UI file 'audiobroadcast.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOBROADCAST_H
#define UI_AUDIOBROADCAST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioBroadcastClass
{
public:
    QTreeWidget *treeWidget;
    QPushButton *pushButton_startbroadcast;
    QPushButton *pushButton_cancel;

    void setupUi(QWidget *AudioBroadcastClass)
    {
        if (AudioBroadcastClass->objectName().isEmpty())
            AudioBroadcastClass->setObjectName(QStringLiteral("AudioBroadcastClass"));
        AudioBroadcastClass->resize(543, 389);
        treeWidget = new QTreeWidget(AudioBroadcastClass);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 11, 521, 331));
        pushButton_startbroadcast = new QPushButton(AudioBroadcastClass);
        pushButton_startbroadcast->setObjectName(QStringLiteral("pushButton_startbroadcast"));
        pushButton_startbroadcast->setGeometry(QRect(90, 360, 131, 23));
        pushButton_cancel = new QPushButton(AudioBroadcastClass);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(360, 360, 75, 23));

        retranslateUi(AudioBroadcastClass);

        QMetaObject::connectSlotsByName(AudioBroadcastClass);
    } // setupUi

    void retranslateUi(QWidget *AudioBroadcastClass)
    {
        AudioBroadcastClass->setWindowTitle(QApplication::translate("AudioBroadcastClass", "AudioBroadcast", Q_NULLPTR));
        pushButton_startbroadcast->setText(QApplication::translate("AudioBroadcastClass", "Start broadcast", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("AudioBroadcastClass", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AudioBroadcastClass: public Ui_AudioBroadcastClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOBROADCAST_H
