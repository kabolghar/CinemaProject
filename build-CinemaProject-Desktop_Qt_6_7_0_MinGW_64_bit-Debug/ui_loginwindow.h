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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonlogin;
    QPushButton *pushButtonregister;
    QLabel *labellogin;
    QLabel *labelpassword;
    QLineEdit *lineEditLogin;
    QLineEdit *lineEditpassword;
    QLabel *labelerror;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(800, 600);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        pushButtonlogin = new QPushButton(centralwidget);
        pushButtonlogin->setObjectName("pushButtonlogin");
        pushButtonlogin->setGeometry(QRect(80, 100, 80, 21));
        pushButtonregister = new QPushButton(centralwidget);
        pushButtonregister->setObjectName("pushButtonregister");
        pushButtonregister->setGeometry(QRect(170, 100, 80, 21));
        labellogin = new QLabel(centralwidget);
        labellogin->setObjectName("labellogin");
        labellogin->setGeometry(QRect(60, 30, 37, 21));
        labelpassword = new QLabel(centralwidget);
        labelpassword->setObjectName("labelpassword");
        labelpassword->setGeometry(QRect(46, 60, 51, 21));
        lineEditLogin = new QLineEdit(centralwidget);
        lineEditLogin->setObjectName("lineEditLogin");
        lineEditLogin->setGeometry(QRect(110, 30, 113, 20));
        lineEditpassword = new QLineEdit(centralwidget);
        lineEditpassword->setObjectName("lineEditpassword");
        lineEditpassword->setGeometry(QRect(110, 60, 113, 20));
        lineEditpassword->setEchoMode(QLineEdit::Password);
        labelerror = new QLabel(centralwidget);
        labelerror->setObjectName("labelerror");
        labelerror->setGeometry(QRect(60, 80, 231, 20));
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
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
        labellogin->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        labelpassword->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        labelerror->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ff0000;\">Error: Wrong Username Or Password</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
