/********************************************************************************
** Form generated from reading UI file 'dialogue.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUE_H
#define UI_DIALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogueClass
{
public:
    QAction *actionD;
    QAction *action_new;
    QAction *action_open;
    QAction *action_save;
    QAction *action_saveas;
    QAction *action_aboutsoft;
    QAction *action_aboutme;
    QAction *action_json;
    QAction *action_clearlist;
    QWidget *centralWidget;
    QListWidget *listWidget;
    QWidget *widget;
    QLabel *label;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton_saveitem;
    QWidget *widget_2;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_insert;
    QPushButton *pushButton_up;
    QPushButton *pushButton_down;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;

    void setupUi(QMainWindow *dialogueClass)
    {
        if (dialogueClass->objectName().isEmpty())
            dialogueClass->setObjectName(QStringLiteral("dialogueClass"));
        dialogueClass->resize(654, 453);
        actionD = new QAction(dialogueClass);
        actionD->setObjectName(QStringLiteral("actionD"));
        action_new = new QAction(dialogueClass);
        action_new->setObjectName(QStringLiteral("action_new"));
        action_open = new QAction(dialogueClass);
        action_open->setObjectName(QStringLiteral("action_open"));
        action_save = new QAction(dialogueClass);
        action_save->setObjectName(QStringLiteral("action_save"));
        action_saveas = new QAction(dialogueClass);
        action_saveas->setObjectName(QStringLiteral("action_saveas"));
        action_aboutsoft = new QAction(dialogueClass);
        action_aboutsoft->setObjectName(QStringLiteral("action_aboutsoft"));
        action_aboutme = new QAction(dialogueClass);
        action_aboutme->setObjectName(QStringLiteral("action_aboutme"));
        action_json = new QAction(dialogueClass);
        action_json->setObjectName(QStringLiteral("action_json"));
        action_clearlist = new QAction(dialogueClass);
        action_clearlist->setObjectName(QStringLiteral("action_clearlist"));
        centralWidget = new QWidget(dialogueClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(15, 60, 161, 331));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(190, 60, 441, 331));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 54, 21));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 80, 411, 241));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 10, 151, 20));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 61, 21));
        pushButton_saveitem = new QPushButton(widget);
        pushButton_saveitem->setObjectName(QStringLiteral("pushButton_saveitem"));
        pushButton_saveitem->setGeometry(QRect(290, 20, 91, 41));
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 0, 621, 51));
        pushButton_delete = new QPushButton(widget_2);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(380, 20, 75, 23));
        pushButton_insert = new QPushButton(widget_2);
        pushButton_insert->setObjectName(QStringLiteral("pushButton_insert"));
        pushButton_insert->setGeometry(QRect(100, 20, 75, 23));
        pushButton_up = new QPushButton(widget_2);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        pushButton_up->setGeometry(QRect(190, 20, 75, 23));
        pushButton_down = new QPushButton(widget_2);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        pushButton_down->setGeometry(QRect(280, 20, 75, 23));
        dialogueClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(dialogueClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        dialogueClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(dialogueClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        dialogueClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(dialogueClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 654, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        dialogueClass->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action_new);
        menu->addAction(action_open);
        menu->addAction(action_save);
        menu->addAction(action_saveas);
        menu_2->addAction(action_json);
        menu_2->addAction(action_clearlist);
        menu_3->addAction(action_aboutsoft);
        menu_3->addAction(action_aboutme);

        retranslateUi(dialogueClass);

        QMetaObject::connectSlotsByName(dialogueClass);
    } // setupUi

    void retranslateUi(QMainWindow *dialogueClass)
    {
        dialogueClass->setWindowTitle(QApplication::translate("dialogueClass", "dialogue", 0));
        actionD->setText(QApplication::translate("dialogueClass", "d\\", 0));
        action_new->setText(QApplication::translate("dialogueClass", "\346\226\260\345\273\272", 0));
        action_open->setText(QApplication::translate("dialogueClass", "\346\211\223\345\274\200", 0));
        action_save->setText(QApplication::translate("dialogueClass", "\344\277\235\345\255\230", 0));
        action_saveas->setText(QApplication::translate("dialogueClass", "\345\217\246\345\255\230\344\270\272", 0));
        action_aboutsoft->setText(QApplication::translate("dialogueClass", "\345\205\263\344\272\216\350\275\257\344\273\266", 0));
        action_aboutme->setText(QApplication::translate("dialogueClass", "\345\205\263\344\272\216\344\275\234\350\200\205", 0));
        action_json->setText(QApplication::translate("dialogueClass", "\347\224\237\346\210\220Json\346\225\260\346\215\256", 0));
        action_clearlist->setText(QApplication::translate("dialogueClass", "\346\270\205\351\231\244\345\210\227\350\241\250", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("dialogueClass", "1", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("dialogueClass", "2", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("dialogueClass", "3", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("dialogueClass", "4", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("dialogueClass", "5", 0));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("dialogueClass", "6", 0));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("dialogueClass", "7", 0));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("dialogueClass", "8", 0));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("dialogueClass", "9", 0));
        QListWidgetItem *___qlistwidgetitem9 = listWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("dialogueClass", "10", 0));
        QListWidgetItem *___qlistwidgetitem10 = listWidget->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("dialogueClass", "11", 0));
        QListWidgetItem *___qlistwidgetitem11 = listWidget->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("dialogueClass", "12", 0));
        QListWidgetItem *___qlistwidgetitem12 = listWidget->item(12);
        ___qlistwidgetitem12->setText(QApplication::translate("dialogueClass", "13", 0));
        QListWidgetItem *___qlistwidgetitem13 = listWidget->item(13);
        ___qlistwidgetitem13->setText(QApplication::translate("dialogueClass", "14", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("dialogueClass", "OwerID:", 0));
        textEdit->setHtml(QApplication::translate("dialogueClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\345\276\267\347\216\233\350\245\277\344\272\232\344\270\207\345\262\201\357\274\201\357\274\201</span></p></body></html>", 0));
        lineEdit->setText(QApplication::translate("dialogueClass", "NPC001", 0));
        label_2->setText(QApplication::translate("dialogueClass", "Message:", 0));
        pushButton_saveitem->setText(QApplication::translate("dialogueClass", "\344\277\235\345\255\230\350\257\245Message", 0));
        pushButton_delete->setText(QApplication::translate("dialogueClass", "\345\210\240\351\231\244", 0));
        pushButton_insert->setText(QApplication::translate("dialogueClass", "\346\217\222\345\205\245", 0));
        pushButton_up->setText(QApplication::translate("dialogueClass", "\344\270\212\347\247\273", 0));
        pushButton_down->setText(QApplication::translate("dialogueClass", "\344\270\213\347\247\273", 0));
        menu->setTitle(QApplication::translate("dialogueClass", "\346\226\207\344\273\266", 0));
        menu_2->setTitle(QApplication::translate("dialogueClass", "\347\274\226\350\276\221", 0));
        menu_3->setTitle(QApplication::translate("dialogueClass", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class dialogueClass: public Ui_dialogueClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUE_H
