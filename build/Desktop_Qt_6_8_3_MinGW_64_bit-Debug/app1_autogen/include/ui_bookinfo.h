/********************************************************************************
** Form generated from reading UI file 'bookinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINFO_H
#define UI_BOOKINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BOOkinfo
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *BOOkinfo)
    {
        if (BOOkinfo->objectName().isEmpty())
            BOOkinfo->setObjectName("BOOkinfo");
        BOOkinfo->resize(661, 492);
        textBrowser = new QTextBrowser(BOOkinfo);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 60, 601, 61));
        textBrowser_2 = new QTextBrowser(BOOkinfo);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(130, 140, 361, 41));
        tableView = new QTableView(BOOkinfo);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(60, 250, 551, 191));
        layoutWidget = new QWidget(BOOkinfo);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(330, 200, 321, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        retranslateUi(BOOkinfo);

        QMetaObject::connectSlotsByName(BOOkinfo);
    } // setupUi

    void retranslateUi(QDialog *BOOkinfo)
    {
        BOOkinfo->setWindowTitle(QCoreApplication::translate("BOOkinfo", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("BOOkinfo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:700; color:#55ffff;\">student library</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-weight:700; color:#55ffff;\"><br /></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("BOOkinfo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; font-style:italic; color:#55ffff;\">BOOKs INFO</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("BOOkinfo", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BOOkinfo: public Ui_BOOkinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINFO_H
