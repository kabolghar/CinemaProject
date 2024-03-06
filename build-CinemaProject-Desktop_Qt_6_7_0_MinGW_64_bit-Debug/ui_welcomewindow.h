/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *labelHello;
    QPushButton *pushButtonLogout;
    QLabel *labelPicture;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(416, 470);
        labelHello = new QLabel(WelcomeWindow);
        labelHello->setObjectName("labelHello");
        labelHello->setGeometry(QRect(10, 20, 181, 16));
        pushButtonLogout = new QPushButton(WelcomeWindow);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(10, 410, 141, 41));
        labelPicture = new QLabel(WelcomeWindow);
        labelPicture->setObjectName("labelPicture");
        labelPicture->setGeometry(QRect(20, 60, 381, 281));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        labelHello->setText(QCoreApplication::translate("WelcomeWindow", "Hello, username", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("WelcomeWindow", "Logout", nullptr));
        labelPicture->setText(QCoreApplication::translate("WelcomeWindow", "WELCOME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
