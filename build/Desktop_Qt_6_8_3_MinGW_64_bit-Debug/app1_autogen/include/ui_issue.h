/********************************************************************************
** Form generated from reading UI file 'issue.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSUE_H
#define UI_ISSUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_issue
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_73;
    QPushButton *pushButton74;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_72;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit71;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit78;

    void setupUi(QDialog *issue)
    {
        if (issue->objectName().isEmpty())
            issue->setObjectName("issue");
        issue->resize(689, 495);
        verticalLayout = new QVBoxLayout(issue);
        verticalLayout->setObjectName("verticalLayout");
        textBrowser = new QTextBrowser(issue);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        textBrowser_2 = new QTextBrowser(issue);
        textBrowser_2->setObjectName("textBrowser_2");

        verticalLayout->addWidget(textBrowser_2);

        groupBox = new QGroupBox(issue);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_73 = new QLineEdit(groupBox);
        lineEdit_73->setObjectName("lineEdit_73");

        horizontalLayout_3->addWidget(lineEdit_73);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        pushButton74 = new QPushButton(groupBox);
        pushButton74->setObjectName("pushButton74");

        gridLayout->addWidget(pushButton74, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_72 = new QLineEdit(groupBox);
        lineEdit_72->setObjectName("lineEdit_72");

        horizontalLayout_2->addWidget(lineEdit_72);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit71 = new QLineEdit(groupBox);
        lineEdit71->setObjectName("lineEdit71");

        horizontalLayout->addWidget(lineEdit71);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout_4->addWidget(dateEdit);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        lineEdit78 = new QLineEdit(groupBox);
        lineEdit78->setObjectName("lineEdit78");

        horizontalLayout_5->addWidget(lineEdit78);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBox);


        retranslateUi(issue);

        QMetaObject::connectSlotsByName(issue);
    } // setupUi

    void retranslateUi(QDialog *issue)
    {
        issue->setWindowTitle(QCoreApplication::translate("issue", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("issue", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:700; color:#55ffff;\">Student Library</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-weight:700; color:#55ffff;\"><br /></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("issue", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; font-style:italic; text-decoration: underline; color:#55ffff;\">BOOK ISSUE</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("issue", "ISSUED ROLLNO", nullptr));
        pushButton74->setText(QCoreApplication::translate("issue", "Issue", nullptr));
        label_2->setText(QCoreApplication::translate("issue", "BOOK NAME", nullptr));
        label->setText(QCoreApplication::translate("issue", "BOOK ID", nullptr));
        label_4->setText(QCoreApplication::translate("issue", "DATE", nullptr));
        label_5->setText(QCoreApplication::translate("issue", "Semester", nullptr));
    } // retranslateUi

};

namespace Ui {
    class issue: public Ui_issue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSUE_H
