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
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *labelalreadyexisting;
    QLabel *labelnotmatching;
    QGroupBox *groupBoxdateofbirth;
    QComboBox *comboBoxmonth;
    QLabel *labelday;
    QLabel *labelmonth;
    QLabel *labelyear;
    QLineEdit *lineEditday;
    QLineEdit *lineEdityear;
    QLabel *labelage;
    QGroupBox *groupBoxgender;
    QSplitter *splitter_4;
    QRadioButton *radioButtonmale;
    QRadioButton *radioButtonfemale;
    QGroupBox *groupBoxaccounttype;
    QSplitter *splitter_3;
    QRadioButton *radioButtonuser;
    QRadioButton *radioButtonadmin;
    QGroupBox *groupBoxfave;
    QSplitter *splitter;
    QCheckBox *checkBoxcomedy;
    QCheckBox *checkBoxdrama;
    QCheckBox *checkBoxother;
    QSplitter *splitter_2;
    QCheckBox *checkBoxaction;
    QCheckBox *checkBoxromance;
    QCheckBox *checkBoxhorror;
    QPushButton *pushButtonregister;
    QLabel *label;
    QSplitter *splitter_5;
    QLineEdit *lineEditusername;
    QLineEdit *lineEditpassword;
    QLineEdit *lineEditretypepassword;
    QSplitter *splitter_6;
    QLabel *Labelusername;
    QLabel *labelpassword;
    QLabel *labelretypepassword;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(527, 341);
        labelalreadyexisting = new QLabel(RegisterWindow);
        labelalreadyexisting->setObjectName("labelalreadyexisting");
        labelalreadyexisting->setGeometry(QRect(320, 10, 111, 16));
        labelnotmatching = new QLabel(RegisterWindow);
        labelnotmatching->setObjectName("labelnotmatching");
        labelnotmatching->setGeometry(QRect(320, 60, 91, 16));
        groupBoxdateofbirth = new QGroupBox(RegisterWindow);
        groupBoxdateofbirth->setObjectName("groupBoxdateofbirth");
        groupBoxdateofbirth->setGeometry(QRect(30, 90, 271, 81));
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
        comboBoxmonth->setGeometry(QRect(0, 50, 91, 22));
        labelday = new QLabel(groupBoxdateofbirth);
        labelday->setObjectName("labelday");
        labelday->setGeometry(QRect(100, 30, 41, 16));
        labelmonth = new QLabel(groupBoxdateofbirth);
        labelmonth->setObjectName("labelmonth");
        labelmonth->setGeometry(QRect(10, 30, 51, 16));
        labelyear = new QLabel(groupBoxdateofbirth);
        labelyear->setObjectName("labelyear");
        labelyear->setGeometry(QRect(170, 30, 41, 16));
        lineEditday = new QLineEdit(groupBoxdateofbirth);
        lineEditday->setObjectName("lineEditday");
        lineEditday->setGeometry(QRect(100, 50, 61, 20));
        lineEdityear = new QLineEdit(groupBoxdateofbirth);
        lineEdityear->setObjectName("lineEdityear");
        lineEdityear->setGeometry(QRect(170, 50, 61, 20));
        labelage = new QLabel(RegisterWindow);
        labelage->setObjectName("labelage");
        labelage->setGeometry(QRect(320, 130, 161, 16));
        groupBoxgender = new QGroupBox(RegisterWindow);
        groupBoxgender->setObjectName("groupBoxgender");
        groupBoxgender->setGeometry(QRect(30, 180, 120, 80));
        splitter_4 = new QSplitter(groupBoxgender);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setGeometry(QRect(10, 30, 68, 40));
        splitter_4->setOrientation(Qt::Vertical);
        radioButtonmale = new QRadioButton(splitter_4);
        radioButtonmale->setObjectName("radioButtonmale");
        splitter_4->addWidget(radioButtonmale);
        radioButtonfemale = new QRadioButton(splitter_4);
        radioButtonfemale->setObjectName("radioButtonfemale");
        splitter_4->addWidget(radioButtonfemale);
        groupBoxaccounttype = new QGroupBox(RegisterWindow);
        groupBoxaccounttype->setObjectName("groupBoxaccounttype");
        groupBoxaccounttype->setGeometry(QRect(170, 180, 120, 80));
        splitter_3 = new QSplitter(groupBoxaccounttype);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setGeometry(QRect(10, 30, 63, 40));
        splitter_3->setOrientation(Qt::Vertical);
        radioButtonuser = new QRadioButton(splitter_3);
        radioButtonuser->setObjectName("radioButtonuser");
        splitter_3->addWidget(radioButtonuser);
        radioButtonadmin = new QRadioButton(splitter_3);
        radioButtonadmin->setObjectName("radioButtonadmin");
        splitter_3->addWidget(radioButtonadmin);
        groupBoxfave = new QGroupBox(RegisterWindow);
        groupBoxfave->setObjectName("groupBoxfave");
        groupBoxfave->setGeometry(QRect(320, 160, 181, 101));
        splitter = new QSplitter(groupBoxfave);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(100, 30, 75, 60));
        splitter->setOrientation(Qt::Vertical);
        checkBoxcomedy = new QCheckBox(splitter);
        checkBoxcomedy->setObjectName("checkBoxcomedy");
        splitter->addWidget(checkBoxcomedy);
        checkBoxdrama = new QCheckBox(splitter);
        checkBoxdrama->setObjectName("checkBoxdrama");
        splitter->addWidget(checkBoxdrama);
        checkBoxother = new QCheckBox(splitter);
        checkBoxother->setObjectName("checkBoxother");
        splitter->addWidget(checkBoxother);
        splitter_2 = new QSplitter(groupBoxfave);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(10, 30, 81, 60));
        splitter_2->setOrientation(Qt::Vertical);
        checkBoxaction = new QCheckBox(splitter_2);
        checkBoxaction->setObjectName("checkBoxaction");
        splitter_2->addWidget(checkBoxaction);
        checkBoxromance = new QCheckBox(splitter_2);
        checkBoxromance->setObjectName("checkBoxromance");
        splitter_2->addWidget(checkBoxromance);
        checkBoxhorror = new QCheckBox(splitter_2);
        checkBoxhorror->setObjectName("checkBoxhorror");
        splitter_2->addWidget(checkBoxhorror);
        pushButtonregister = new QPushButton(RegisterWindow);
        pushButtonregister->setObjectName("pushButtonregister");
        pushButtonregister->setGeometry(QRect(170, 290, 80, 31));
        label = new QLabel(RegisterWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 300, 151, 16));
        splitter_5 = new QSplitter(RegisterWindow);
        splitter_5->setObjectName("splitter_5");
        splitter_5->setGeometry(QRect(180, 10, 125, 63));
        splitter_5->setOrientation(Qt::Vertical);
        lineEditusername = new QLineEdit(splitter_5);
        lineEditusername->setObjectName("lineEditusername");
        splitter_5->addWidget(lineEditusername);
        lineEditpassword = new QLineEdit(splitter_5);
        lineEditpassword->setObjectName("lineEditpassword");
        lineEditpassword->setEchoMode(QLineEdit::Password);
        splitter_5->addWidget(lineEditpassword);
        lineEditretypepassword = new QLineEdit(splitter_5);
        lineEditretypepassword->setObjectName("lineEditretypepassword");
        lineEditretypepassword->setEchoMode(QLineEdit::Password);
        splitter_5->addWidget(lineEditretypepassword);
        splitter_6 = new QSplitter(RegisterWindow);
        splitter_6->setObjectName("splitter_6");
        splitter_6->setGeometry(QRect(50, 20, 110, 48));
        splitter_6->setOrientation(Qt::Vertical);
        Labelusername = new QLabel(splitter_6);
        Labelusername->setObjectName("Labelusername");
        splitter_6->addWidget(Labelusername);
        labelpassword = new QLabel(splitter_6);
        labelpassword->setObjectName("labelpassword");
        splitter_6->addWidget(labelpassword);
        labelretypepassword = new QLabel(splitter_6);
        labelretypepassword->setObjectName("labelretypepassword");
        splitter_6->addWidget(labelretypepassword);

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
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
        checkBoxcomedy->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        checkBoxdrama->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        checkBoxother->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        checkBoxaction->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        checkBoxromance->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        checkBoxhorror->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        pushButtonregister->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        label->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*All lines must be filled</span></p></body></html>", nullptr));
        Labelusername->setText(QCoreApplication::translate("RegisterWindow", "Username", nullptr));
        labelpassword->setText(QCoreApplication::translate("RegisterWindow", "Password", nullptr));
        labelretypepassword->setText(QCoreApplication::translate("RegisterWindow", "Re-type Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
