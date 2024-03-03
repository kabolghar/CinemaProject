/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *Labelusername;
    QLabel *labelpassword;
    QLabel *labelretypepassword;
    QLabel *labelalreadyexisting;
    QLabel *labelnotmatching;
    QLineEdit *lineEditusername;
    QLineEdit *lineEditpassword;
    QLineEdit *lineEditretypepassword;
    QGroupBox *groupBoxdateofbirth;
    QComboBox *comboBoxmonth;
    QLabel *labelday;
    QLabel *labelmonth;
    QLabel *labelyear;
    QLineEdit *lineEditday;
    QLineEdit *lineEdityear;
    QLabel *labelage;
    QGroupBox *groupBoxgender;
    QRadioButton *radioButtonmale;
    QRadioButton *radioButtonfemale;
    QGroupBox *groupBoxaccounttype;
    QRadioButton *radioButtonuser;
    QRadioButton *radioButtonadmin;
    QGroupBox *groupBoxfave;
    QCheckBox *checkBoxaction;
    QCheckBox *checkBoxromance;
    QCheckBox *checkBoxhorror;
    QCheckBox *checkBoxother;
    QCheckBox *checkBoxdrama;
    QCheckBox *checkBoxcomedy;
    QPushButton *pushButtonregister;
    QLabel *label;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(461, 294);
        Labelusername = new QLabel(RegisterWindow);
        Labelusername->setObjectName("Labelusername");
        Labelusername->setGeometry(QRect(30, 10, 51, 16));
        labelpassword = new QLabel(RegisterWindow);
        labelpassword->setObjectName("labelpassword");
        labelpassword->setGeometry(QRect(30, 30, 37, 12));
        labelretypepassword = new QLabel(RegisterWindow);
        labelretypepassword->setObjectName("labelretypepassword");
        labelretypepassword->setGeometry(QRect(30, 50, 71, 16));
        labelalreadyexisting = new QLabel(RegisterWindow);
        labelalreadyexisting->setObjectName("labelalreadyexisting");
        labelalreadyexisting->setGeometry(QRect(240, 10, 81, 16));
        labelnotmatching = new QLabel(RegisterWindow);
        labelnotmatching->setObjectName("labelnotmatching");
        labelnotmatching->setGeometry(QRect(240, 50, 91, 16));
        lineEditusername = new QLineEdit(RegisterWindow);
        lineEditusername->setObjectName("lineEditusername");
        lineEditusername->setGeometry(QRect(110, 10, 113, 20));
        lineEditpassword = new QLineEdit(RegisterWindow);
        lineEditpassword->setObjectName("lineEditpassword");
        lineEditpassword->setGeometry(QRect(110, 30, 113, 20));
        lineEditpassword->setEchoMode(QLineEdit::Password);
        lineEditretypepassword = new QLineEdit(RegisterWindow);
        lineEditretypepassword->setObjectName("lineEditretypepassword");
        lineEditretypepassword->setGeometry(QRect(110, 50, 113, 20));
        lineEditretypepassword->setEchoMode(QLineEdit::Password);
        groupBoxdateofbirth = new QGroupBox(RegisterWindow);
        groupBoxdateofbirth->setObjectName("groupBoxdateofbirth");
        groupBoxdateofbirth->setGeometry(QRect(29, 80, 271, 61));
        comboBoxmonth = new QComboBox(groupBoxdateofbirth);
        comboBoxmonth->addItem(QString());
        comboBoxmonth->addItem(QString());
        comboBoxmonth->addItem(QString());
        comboBoxmonth->addItem(QString());
        comboBoxmonth->addItem(QString());
        comboBoxmonth->addItem(QString());
        comboBoxmonth->addItem(QString());
        comboBoxmonth->addItem(QString());
        comboBoxmonth->addItem(QString());
        comboBoxmonth->addItem(QString());
        comboBoxmonth->addItem(QString());
        comboBoxmonth->addItem(QString());
        comboBoxmonth->setObjectName("comboBoxmonth");
        comboBoxmonth->setGeometry(QRect(10, 30, 55, 22));
        labelday = new QLabel(groupBoxdateofbirth);
        labelday->setObjectName("labelday");
        labelday->setGeometry(QRect(80, 10, 37, 12));
        labelmonth = new QLabel(groupBoxdateofbirth);
        labelmonth->setObjectName("labelmonth");
        labelmonth->setGeometry(QRect(20, 10, 37, 12));
        labelyear = new QLabel(groupBoxdateofbirth);
        labelyear->setObjectName("labelyear");
        labelyear->setGeometry(QRect(140, 10, 37, 12));
        lineEditday = new QLineEdit(groupBoxdateofbirth);
        lineEditday->setObjectName("lineEditday");
        lineEditday->setGeometry(QRect(80, 30, 51, 20));
        lineEdityear = new QLineEdit(groupBoxdateofbirth);
        lineEdityear->setObjectName("lineEdityear");
        lineEdityear->setGeometry(QRect(140, 30, 41, 20));
        labelage = new QLabel(RegisterWindow);
        labelage->setObjectName("labelage");
        labelage->setGeometry(QRect(300, 110, 121, 16));
        groupBoxgender = new QGroupBox(RegisterWindow);
        groupBoxgender->setObjectName("groupBoxgender");
        groupBoxgender->setGeometry(QRect(20, 140, 120, 80));
        radioButtonmale = new QRadioButton(groupBoxgender);
        radioButtonmale->setObjectName("radioButtonmale");
        radioButtonmale->setGeometry(QRect(10, 20, 69, 18));
        radioButtonfemale = new QRadioButton(groupBoxgender);
        radioButtonfemale->setObjectName("radioButtonfemale");
        radioButtonfemale->setGeometry(QRect(10, 40, 69, 18));
        groupBoxaccounttype = new QGroupBox(RegisterWindow);
        groupBoxaccounttype->setObjectName("groupBoxaccounttype");
        groupBoxaccounttype->setGeometry(QRect(160, 140, 120, 80));
        radioButtonuser = new QRadioButton(groupBoxaccounttype);
        radioButtonuser->setObjectName("radioButtonuser");
        radioButtonuser->setGeometry(QRect(10, 20, 69, 18));
        radioButtonadmin = new QRadioButton(groupBoxaccounttype);
        radioButtonadmin->setObjectName("radioButtonadmin");
        radioButtonadmin->setGeometry(QRect(10, 40, 69, 18));
        groupBoxfave = new QGroupBox(RegisterWindow);
        groupBoxfave->setObjectName("groupBoxfave");
        groupBoxfave->setGeometry(QRect(310, 140, 141, 80));
        checkBoxaction = new QCheckBox(groupBoxfave);
        checkBoxaction->setObjectName("checkBoxaction");
        checkBoxaction->setGeometry(QRect(10, 20, 58, 18));
        checkBoxromance = new QCheckBox(groupBoxfave);
        checkBoxromance->setObjectName("checkBoxromance");
        checkBoxromance->setGeometry(QRect(10, 40, 58, 18));
        checkBoxhorror = new QCheckBox(groupBoxfave);
        checkBoxhorror->setObjectName("checkBoxhorror");
        checkBoxhorror->setGeometry(QRect(10, 60, 58, 18));
        checkBoxother = new QCheckBox(groupBoxfave);
        checkBoxother->setObjectName("checkBoxother");
        checkBoxother->setGeometry(QRect(70, 60, 58, 18));
        checkBoxdrama = new QCheckBox(groupBoxfave);
        checkBoxdrama->setObjectName("checkBoxdrama");
        checkBoxdrama->setGeometry(QRect(70, 40, 58, 18));
        checkBoxcomedy = new QCheckBox(groupBoxfave);
        checkBoxcomedy->setObjectName("checkBoxcomedy");
        checkBoxcomedy->setGeometry(QRect(70, 20, 58, 18));
        pushButtonregister = new QPushButton(RegisterWindow);
        pushButtonregister->setObjectName("pushButtonregister");
        pushButtonregister->setGeometry(QRect(90, 250, 80, 18));
        label = new QLabel(RegisterWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 250, 101, 16));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        Labelusername->setText(QCoreApplication::translate("RegisterWindow", "Username", nullptr));
        labelpassword->setText(QCoreApplication::translate("RegisterWindow", "Password", nullptr));
        labelretypepassword->setText(QCoreApplication::translate("RegisterWindow", "Re-type Password", nullptr));
        labelalreadyexisting->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">* Already Existing</span></p></body></html>", nullptr));
        labelnotmatching->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">* Not Matching</span></p></body></html>", nullptr));
        groupBoxdateofbirth->setTitle(QCoreApplication::translate("RegisterWindow", "Date of Birth", nullptr));
        comboBoxmonth->setItemText(0, QCoreApplication::translate("RegisterWindow", "Jan", nullptr));
        comboBoxmonth->setItemText(1, QCoreApplication::translate("RegisterWindow", "Feb", nullptr));
        comboBoxmonth->setItemText(2, QCoreApplication::translate("RegisterWindow", "March", nullptr));
        comboBoxmonth->setItemText(3, QCoreApplication::translate("RegisterWindow", "April", nullptr));
        comboBoxmonth->setItemText(4, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        comboBoxmonth->setItemText(5, QCoreApplication::translate("RegisterWindow", "June", nullptr));
        comboBoxmonth->setItemText(6, QCoreApplication::translate("RegisterWindow", "July", nullptr));
        comboBoxmonth->setItemText(7, QCoreApplication::translate("RegisterWindow", "August", nullptr));
        comboBoxmonth->setItemText(8, QCoreApplication::translate("RegisterWindow", "September", nullptr));
        comboBoxmonth->setItemText(9, QCoreApplication::translate("RegisterWindow", "October", nullptr));
        comboBoxmonth->setItemText(10, QCoreApplication::translate("RegisterWindow", "November", nullptr));
        comboBoxmonth->setItemText(11, QCoreApplication::translate("RegisterWindow", "December", nullptr));

        labelday->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        labelmonth->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        labelyear->setText(QCoreApplication::translate("RegisterWindow", "Year", nullptr));
        labelage->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*Age is less that 12</span></p></body></html>", nullptr));
        groupBoxgender->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        radioButtonmale->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        radioButtonfemale->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        groupBoxaccounttype->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type", nullptr));
        radioButtonuser->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        radioButtonadmin->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        groupBoxfave->setTitle(QCoreApplication::translate("RegisterWindow", "Favorite Genre(s)", nullptr));
        checkBoxaction->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        checkBoxromance->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        checkBoxhorror->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        checkBoxother->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        checkBoxdrama->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        checkBoxcomedy->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        pushButtonregister->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        label->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*All lines must be filled</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
