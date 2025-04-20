/********************************************************************************
** Form generated from reading UI file 'returnbook.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNBOOK_H
#define UI_RETURNBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_returnbook
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_4_y;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditBookId;
    QPushButton *pushButton;

    void setupUi(QDialog *returnbook)
    {
        if (returnbook->objectName().isEmpty())
            returnbook->setObjectName("returnbook");
        returnbook->resize(687, 492);
        textBrowser = new QTextBrowser(returnbook);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(50, 10, 601, 121));
        textBrowser_2 = new QTextBrowser(returnbook);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(130, 150, 361, 41));
        groupBox = new QGroupBox(returnbook);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(120, 220, 411, 201));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEdit_4_y = new QLineEdit(groupBox);
        lineEdit_4_y->setObjectName("lineEdit_4_y");

        horizontalLayout_2->addWidget(lineEdit_4_y);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEditBookId = new QLineEdit(groupBox);
        lineEditBookId->setObjectName("lineEditBookId");

        horizontalLayout->addWidget(lineEditBookId);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);


        retranslateUi(returnbook);

        QMetaObject::connectSlotsByName(returnbook);
    } // setupUi

    void retranslateUi(QDialog *returnbook)
    {
        returnbook->setWindowTitle(QCoreApplication::translate("returnbook", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("returnbook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:700; color:#55ffff;\">student library</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-weight:700; color:#55ffff;\"><br /></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("returnbook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; font-style:italic; text-decoration: underline; color:#55ffff;\">BOOK Return</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("returnbook", "ISSUED ROLLNO", nullptr));
        label_2->setText(QCoreApplication::translate("returnbook", "BOOKID", nullptr));
        pushButton->setText(QCoreApplication::translate("returnbook", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class returnbook: public Ui_returnbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNBOOK_H
