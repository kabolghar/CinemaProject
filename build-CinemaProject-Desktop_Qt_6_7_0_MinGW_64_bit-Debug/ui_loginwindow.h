/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonlogin;
    QPushButton *pushButtonregister;
    QLabel *labelerror;
    QSplitter *splitter;
    QLineEdit *lineEditLogin;
    QLineEdit *lineEditpassword;
    QSplitter *splitter_2;
    QLabel *labellogin;
    QLabel *labelpassword;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(353, 209);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        pushButtonlogin = new QPushButton(centralwidget);
        pushButtonlogin->setObjectName("pushButtonlogin");
        pushButtonlogin->setGeometry(QRect(80, 100, 80, 31));
        pushButtonregister = new QPushButton(centralwidget);
        pushButtonregister->setObjectName("pushButtonregister");
        pushButtonregister->setGeometry(QRect(170, 100, 80, 31));
        labelerror = new QLabel(centralwidget);
        labelerror->setObjectName("labelerror");
        labelerror->setGeometry(QRect(60, 80, 231, 20));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(160, 30, 125, 42));
        splitter->setOrientation(Qt::Vertical);
        lineEditLogin = new QLineEdit(splitter);
        lineEditLogin->setObjectName("lineEditLogin");
        splitter->addWidget(lineEditLogin);
        lineEditpassword = new QLineEdit(splitter);
        lineEditpassword->setObjectName("lineEditpassword");
        lineEditpassword->setEchoMode(QLineEdit::Password);
        splitter->addWidget(lineEditpassword);
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(80, 30, 58, 32));
        splitter_2->setOrientation(Qt::Vertical);
        labellogin = new QLabel(splitter_2);
        labellogin->setObjectName("labellogin");
        splitter_2->addWidget(labellogin);
        labelpassword = new QLabel(splitter_2);
        labelpassword->setObjectName("labelpassword");
        splitter_2->addWidget(labelpassword);
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 353, 37));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        pushButtonlogin->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        pushButtonregister->setText(QCoreApplication::translate("LoginWindow", "Register", nullptr));
        labelerror->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ff0000;\">Error: Wrong Username Or Password</span></p></body></html>", nullptr));
        labellogin->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        labelpassword->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
