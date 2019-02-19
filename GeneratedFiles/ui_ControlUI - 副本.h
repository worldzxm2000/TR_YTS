/********************************************************************************
** Form generated from reading UI file 'ControlUI.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLUI_H
#define UI_CONTROLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include "MyButton.h"
QT_BEGIN_NAMESPACE

class Ui_SetParamDlg
{
public:
    QGroupBox *groupBox_2;
    QLabel *TiltleLabel;
    QGroupBox *groupBox;
    QGroupBox *groupBox_down;
    QDateTimeEdit *BdateTimeEdit;
    QDateTimeEdit *EdateTimeEdit;
    QPushButton *DownBtn;
    QGroupBox *groupBox_time;
    QDateTimeEdit *RdateTimeEdit;
    QPushButton *RTimeBtn;
    QPushButton *WTimeBtn;
    QGroupBox *groupBox_IP;
    QPushButton *RIPBtn;
    QPushButton *WIPBtn;
    QLineEdit *DevicelineEdit_IP1;
    QLineEdit *DevicelineEdit_IP2;
    QLineEdit *DevicelineEdit_IP3;
    QLineEdit *DevicelineEdit_IP4;
    QComboBox *ComboBox_channel;
    QLabel *label_channel;
    QPushButton *WOpenChannelBtn;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *WCloseChannelBtn;
    QLabel *label_channel_status;
    QLineEdit *DevicelineEdit_Port;
    QLabel *label_5;
    QGroupBox *groupBox_APN;
    QPushButton *RAPNBtn;
    QPushButton *WAPNBtn;
    QLineEdit *lineEdit_APN;
    QGroupBox *groupBox_update;
    QPushButton *UpdateBtn;
    QGroupBox *groupBox_3;
    QScrollArea *ScrollArea_MinBtn;
    QWidget *ScrollAreaWidgetContents_MinBtn;
    MyButton *MinBtn;
    QScrollArea *ScrollArea_CloseBtn;
    QWidget *ScrollAreaWidgetContents_CloseBtn;
    MyButton *CloseBtn;
    QLabel *TitleLabel_Name;
    QListView *CommListView;
    QLabel *label;

    void setupUi(QWidget *ControlUI)
    {
        if (ControlUI->objectName().isEmpty())
            ControlUI->setObjectName(QStringLiteral("ControlUI"));
        ControlUI->resize(520, 439);
        QIcon icon;
        icon.addFile(QStringLiteral("../Image/png/Weather.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ControlUI->setWindowIcon(icon);
        ControlUI->setStyleSheet(QStringLiteral("background:rgb(77,77, 77);color:white"));
        groupBox_2 = new QGroupBox(ControlUI);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(5, 5, 511, 431));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        groupBox_2->setFont(font);
        TiltleLabel = new QLabel(groupBox_2);
        TiltleLabel->setObjectName(QStringLiteral("TiltleLabel"));
        TiltleLabel->setGeometry(QRect(10, 10, 32, 32));
        TiltleLabel->setFont(font);
        TiltleLabel->setPixmap(QPixmap(QString::fromUtf8("../Image/png/control.png")));
        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 381, 371));
        groupBox->setFont(font);
        groupBox_down = new QGroupBox(groupBox);
        groupBox_down->setObjectName(QStringLiteral("groupBox_down"));
        groupBox_down->setGeometry(QRect(10, 270, 241, 91));
        groupBox_down->setFont(font);
        BdateTimeEdit = new QDateTimeEdit(groupBox_down);
        BdateTimeEdit->setObjectName(QStringLiteral("BdateTimeEdit"));
        BdateTimeEdit->setGeometry(QRect(10, 20, 141, 22));
        BdateTimeEdit->setFont(font);
        BdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        EdateTimeEdit = new QDateTimeEdit(groupBox_down);
        EdateTimeEdit->setObjectName(QStringLiteral("EdateTimeEdit"));
        EdateTimeEdit->setGeometry(QRect(10, 50, 141, 22));
        EdateTimeEdit->setFont(font);
        EdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        DownBtn = new QPushButton(groupBox_down);
        DownBtn->setObjectName(QStringLiteral("DownBtn"));
        DownBtn->setGeometry(QRect(160, 20, 75, 23));
        DownBtn->setFont(font);
        groupBox_time = new QGroupBox(groupBox);
        groupBox_time->setObjectName(QStringLiteral("groupBox_time"));
        groupBox_time->setGeometry(QRect(190, 170, 171, 91));
        groupBox_time->setFont(font);
        RdateTimeEdit = new QDateTimeEdit(groupBox_time);
        RdateTimeEdit->setObjectName(QStringLiteral("RdateTimeEdit"));
        RdateTimeEdit->setGeometry(QRect(10, 20, 151, 22));
        RdateTimeEdit->setFont(font);
        RdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        RTimeBtn = new QPushButton(groupBox_time);
        RTimeBtn->setObjectName(QStringLiteral("RTimeBtn"));
        RTimeBtn->setGeometry(QRect(10, 50, 75, 23));
        RTimeBtn->setFont(font);
        WTimeBtn = new QPushButton(groupBox_time);
        WTimeBtn->setObjectName(QStringLiteral("WTimeBtn"));
        WTimeBtn->setGeometry(QRect(90, 50, 75, 23));
        WTimeBtn->setFont(font);
        groupBox_IP = new QGroupBox(groupBox);
        groupBox_IP->setObjectName(QStringLiteral("groupBox_IP"));
        groupBox_IP->setGeometry(QRect(10, 10, 351, 151));
        groupBox_IP->setFont(font);
        RIPBtn = new QPushButton(groupBox_IP);
        RIPBtn->setObjectName(QStringLiteral("RIPBtn"));
        RIPBtn->setGeometry(QRect(10, 120, 75, 23));
        RIPBtn->setFont(font);
        WIPBtn = new QPushButton(groupBox_IP);
        WIPBtn->setObjectName(QStringLiteral("WIPBtn"));
        WIPBtn->setGeometry(QRect(100, 120, 75, 23));
        WIPBtn->setFont(font);
        DevicelineEdit_IP1 = new QLineEdit(groupBox_IP);
        DevicelineEdit_IP1->setObjectName(QStringLiteral("DevicelineEdit_IP1"));
        DevicelineEdit_IP1->setGeometry(QRect(10, 90, 41, 20));
        DevicelineEdit_IP1->setFont(font);
        DevicelineEdit_IP2 = new QLineEdit(groupBox_IP);
        DevicelineEdit_IP2->setObjectName(QStringLiteral("DevicelineEdit_IP2"));
        DevicelineEdit_IP2->setGeometry(QRect(70, 90, 41, 20));
        DevicelineEdit_IP2->setFont(font);
        DevicelineEdit_IP3 = new QLineEdit(groupBox_IP);
        DevicelineEdit_IP3->setObjectName(QStringLiteral("DevicelineEdit_IP3"));
        DevicelineEdit_IP3->setGeometry(QRect(130, 90, 41, 20));
        DevicelineEdit_IP3->setFont(font);
        DevicelineEdit_IP4 = new QLineEdit(groupBox_IP);
        DevicelineEdit_IP4->setObjectName(QStringLiteral("DevicelineEdit_IP4"));
        DevicelineEdit_IP4->setGeometry(QRect(190, 90, 41, 20));
        DevicelineEdit_IP4->setFont(font);
        ComboBox_channel = new QComboBox(groupBox_IP);
        ComboBox_channel->setObjectName(QStringLiteral("ComboBox_channel"));
        ComboBox_channel->setGeometry(QRect(60, 20, 51, 22));
        ComboBox_channel->setFont(font);
        label_channel = new QLabel(groupBox_IP);
        label_channel->setObjectName(QStringLiteral("label_channel"));
        label_channel->setGeometry(QRect(5, 20, 41, 21));
        label_channel->setFont(font);
        label_channel->setLayoutDirection(Qt::LeftToRight);
        label_channel->setAlignment(Qt::AlignCenter);
        WOpenChannelBtn = new QPushButton(groupBox_IP);
        WOpenChannelBtn->setObjectName(QStringLiteral("WOpenChannelBtn"));
        WOpenChannelBtn->setGeometry(QRect(10, 50, 75, 23));
        WOpenChannelBtn->setFont(font);
        label_2 = new QLabel(groupBox_IP);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(57, 95, 10, 12));
        label_2->setFont(font);
        label_3 = new QLabel(groupBox_IP);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(118, 95, 10, 12));
        label_3->setFont(font);
        label_4 = new QLabel(groupBox_IP);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(177, 95, 10, 12));
        label_4->setFont(font);
        WCloseChannelBtn = new QPushButton(groupBox_IP);
        WCloseChannelBtn->setObjectName(QStringLiteral("WCloseChannelBtn"));
        WCloseChannelBtn->setGeometry(QRect(90, 50, 75, 23));
        WCloseChannelBtn->setFont(font);
        label_channel_status = new QLabel(groupBox_IP);
        label_channel_status->setObjectName(QStringLiteral("label_channel_status"));
        label_channel_status->setGeometry(QRect(120, 20, 91, 21));
        label_channel_status->setFont(font);
        label_channel_status->setLayoutDirection(Qt::LeftToRight);
        label_channel_status->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        DevicelineEdit_Port = new QLineEdit(groupBox_IP);
        DevicelineEdit_Port->setObjectName(QStringLiteral("DevicelineEdit_Port"));
        DevicelineEdit_Port->setGeometry(QRect(250, 90, 81, 20));
        DevicelineEdit_Port->setFont(font);
        label_5 = new QLabel(groupBox_IP);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(235, 95, 10, 12));
        label_5->setFont(font);
        groupBox_APN = new QGroupBox(groupBox);
        groupBox_APN->setObjectName(QStringLiteral("groupBox_APN"));
        groupBox_APN->setGeometry(QRect(10, 170, 171, 91));
        groupBox_APN->setFont(font);
        RAPNBtn = new QPushButton(groupBox_APN);
        RAPNBtn->setObjectName(QStringLiteral("RAPNBtn"));
        RAPNBtn->setGeometry(QRect(10, 50, 75, 23));
        RAPNBtn->setFont(font);
        WAPNBtn = new QPushButton(groupBox_APN);
        WAPNBtn->setObjectName(QStringLiteral("WAPNBtn"));
        WAPNBtn->setGeometry(QRect(90, 50, 75, 23));
        WAPNBtn->setFont(font);
        lineEdit_APN = new QLineEdit(groupBox_APN);
        lineEdit_APN->setObjectName(QStringLiteral("lineEdit_APN"));
        lineEdit_APN->setGeometry(QRect(10, 20, 151, 20));
        lineEdit_APN->setFont(font);
        groupBox_update = new QGroupBox(groupBox);
        groupBox_update->setObjectName(QStringLiteral("groupBox_update"));
        groupBox_update->setGeometry(QRect(259, 269, 111, 91));
        groupBox_update->setFont(font);
        UpdateBtn = new QPushButton(groupBox_update);
        UpdateBtn->setObjectName(QStringLiteral("UpdateBtn"));
        UpdateBtn->setGeometry(QRect(20, 40, 75, 23));
        UpdateBtn->setFont(font);
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(455, 10, 46, 26));
        groupBox_3->setFont(font);
        ScrollArea_MinBtn = new QScrollArea(groupBox_3);
        ScrollArea_MinBtn->setObjectName(QStringLiteral("ScrollArea_MinBtn"));
        ScrollArea_MinBtn->setGeometry(QRect(2, 3, 20, 20));
        ScrollArea_MinBtn->setFont(font);
        ScrollArea_MinBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_MinBtn = new QWidget();
        ScrollAreaWidgetContents_MinBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_MinBtn"));
        ScrollAreaWidgetContents_MinBtn->setGeometry(QRect(0, 0, 18, 18));
		MinBtn = new MyButton("../Image/png/Mini.png", 1, ScrollAreaWidgetContents_MinBtn);
        MinBtn->setObjectName(QStringLiteral("MinBtn"));
        MinBtn->setGeometry(QRect(1, 1, 18, 18));
        MinBtn->setFont(font);
        ScrollArea_MinBtn->setWidget(ScrollAreaWidgetContents_MinBtn);
        ScrollArea_CloseBtn = new QScrollArea(groupBox_3);
        ScrollArea_CloseBtn->setObjectName(QStringLiteral("ScrollArea_CloseBtn"));
        ScrollArea_CloseBtn->setGeometry(QRect(24, 3, 20, 20));
        ScrollArea_CloseBtn->setFont(font);
        ScrollArea_CloseBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_CloseBtn = new QWidget();
        ScrollAreaWidgetContents_CloseBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_CloseBtn"));
        ScrollAreaWidgetContents_CloseBtn->setGeometry(QRect(0, 0, 18, 18));
		CloseBtn = new MyButton("../Image/png/Close.png", 1, ScrollAreaWidgetContents_CloseBtn);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));
        CloseBtn->setGeometry(QRect(1, 1, 18, 18));
        CloseBtn->setFont(font);
        ScrollArea_CloseBtn->setWidget(ScrollAreaWidgetContents_CloseBtn);
        TitleLabel_Name = new QLabel(groupBox_2);
        TitleLabel_Name->setObjectName(QStringLiteral("TitleLabel_Name"));
        TitleLabel_Name->setGeometry(QRect(45, 15, 111, 16));
        TitleLabel_Name->setFont(font);
        CommListView = new QListView(groupBox_2);
        CommListView->setObjectName(QStringLiteral("CommListView"));
        CommListView->setGeometry(QRect(400, 80, 101, 341));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 50, 101, 20));
        QWidget::setTabOrder(ComboBox_channel, WOpenChannelBtn);
        QWidget::setTabOrder(WOpenChannelBtn, WCloseChannelBtn);
        QWidget::setTabOrder(WCloseChannelBtn, DevicelineEdit_IP1);
        QWidget::setTabOrder(DevicelineEdit_IP1, DevicelineEdit_IP2);
        QWidget::setTabOrder(DevicelineEdit_IP2, DevicelineEdit_IP3);
        QWidget::setTabOrder(DevicelineEdit_IP3, DevicelineEdit_IP4);
        QWidget::setTabOrder(DevicelineEdit_IP4, DevicelineEdit_Port);
        QWidget::setTabOrder(DevicelineEdit_Port, RIPBtn);
        QWidget::setTabOrder(RIPBtn, WIPBtn);
        QWidget::setTabOrder(WIPBtn, lineEdit_APN);
        QWidget::setTabOrder(lineEdit_APN, RAPNBtn);
        QWidget::setTabOrder(RAPNBtn, WAPNBtn);
        QWidget::setTabOrder(WAPNBtn, RdateTimeEdit);
        QWidget::setTabOrder(RdateTimeEdit, RTimeBtn);
        QWidget::setTabOrder(RTimeBtn, WTimeBtn);
        QWidget::setTabOrder(WTimeBtn, BdateTimeEdit);
        QWidget::setTabOrder(BdateTimeEdit, EdateTimeEdit);
        QWidget::setTabOrder(EdateTimeEdit, DownBtn);
        QWidget::setTabOrder(DownBtn, UpdateBtn);

        retranslateUi(ControlUI);

        QMetaObject::connectSlotsByName(ControlUI);
    } // setupUi

    void retranslateUi(QWidget *ControlUI)
    {
        ControlUI->setWindowTitle(QApplication::translate("SetParamDlg", "\345\234\237\345\243\244\345\242\222\346\203\205\344\270\200\344\275\223\345\274\217", nullptr));
        groupBox_2->setTitle(QString());
        TiltleLabel->setText(QString());
        groupBox->setTitle(QString());
        groupBox_down->setTitle(QApplication::translate("ControlUI", "\346\225\260\346\215\256\350\241\245\346\212\204", nullptr));
        DownBtn->setText(QApplication::translate("ControlUI", "\350\241\245\346\212\204\346\225\260\346\215\256", nullptr));
        groupBox_time->setTitle(QApplication::translate("ControlUI", "\350\256\276\345\244\207\346\227\266\351\227\264", nullptr));
        RTimeBtn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226\346\227\266\351\222\237", nullptr));
        WTimeBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256\346\227\266\351\222\237", nullptr));
        groupBox_IP->setTitle(QApplication::translate("ControlUI", "IP\347\253\257\345\217\243", nullptr));
        RIPBtn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226IP", nullptr));
        WIPBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256IP", nullptr));
        label_channel->setText(QApplication::translate("ControlUI", "\351\200\232\351\201\223", nullptr));
        WOpenChannelBtn->setText(QApplication::translate("ControlUI", "\346\211\223\345\274\200\351\200\232\351\201\223", nullptr));
        label_2->setText(QApplication::translate("ControlUI", ".", nullptr));
        label_3->setText(QApplication::translate("ControlUI", ".", nullptr));
        label_4->setText(QApplication::translate("ControlUI", ".", nullptr));
        WCloseChannelBtn->setText(QApplication::translate("ControlUI", "\345\205\263\351\227\255\351\200\232\351\201\223", nullptr));
        label_channel_status->setText(QApplication::translate("ControlUI", "\347\212\266\346\200\201", nullptr));
        label_5->setText(QApplication::translate("ControlUI", "\357\274\232", nullptr));
        groupBox_APN->setTitle(QApplication::translate("ControlUI", "APN\346\234\215\345\212\241\345\231\250", nullptr));
        RAPNBtn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226APN", nullptr));
        WAPNBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256APN", nullptr));
        groupBox_update->setTitle(QApplication::translate("ControlUI", "\350\277\234\347\250\213\345\215\207\347\272\247", nullptr));
        UpdateBtn->setText(QApplication::translate("ControlUI", "\350\277\234\347\250\213\345\215\207\347\272\247", nullptr));
        groupBox_3->setTitle(QString());
        MinBtn->setText(QApplication::translate("ControlUI", "PushButton", nullptr));
        CloseBtn->setText(QApplication::translate("ControlUI", "PushButton", nullptr));
        TitleLabel_Name->setText(QApplication::translate("ControlUI", "\345\234\237\345\243\244\345\242\222\346\203\205\344\270\200\344\275\223\345\274\217", nullptr));
        label->setText(QApplication::translate("ControlUI", "\345\276\205\345\244\204\347\220\206\346\214\207\344\273\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlUI: public Ui_SetParamDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLUI_H
