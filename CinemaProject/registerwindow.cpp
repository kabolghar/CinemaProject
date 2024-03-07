#include "registerwindow.h"
#include "Users.h"
#include "ui_registerwindow.h"
#include "welcomewindow.h"

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->labelalreadyexisting->setVisible(false);
    ui->labelnotmatching->setVisible(false);
    ui->labelage->setVisible(false);
    ui->labelmissing->setVisible(false);

}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_pushButtonregister_clicked()
{
    ui->labelalreadyexisting->setVisible(false);
    ui->labelnotmatching->setVisible(false);
    ui->labelage->setVisible(false);
    ui->labelmissing->setVisible(false);

    QString uname = ui->lineEditusername->text();
    QString pword = ui->lineEditpassword->text();
    //int month = ui->comboBoxmonth->currentIndex();
    //int day = ui->lineEditday->text().toInt();
    int year = ui->lineEdityear->text().toInt();
    QString gender;

    if(ui->radioButtonmale->isChecked()){
        gender = "Male";
    }
    else if(ui->radioButtonfemale->isChecked()){
        gender = "Female";
    }
    QString accType;
    if(ui->radioButtonuser->isChecked()){
        accType = "User";
    }
    else if(ui->radioButtonadmin->isChecked()){
        accType = "Admin";
    }

    int x = usersCount+1;


    for(int i = 0; i<usersCount;i++){

            if(uname == usernames[i]){

                ui->labelalreadyexisting->setVisible(true);

            }
            else if (pword != ui->lineEditretypepassword->text()){

                ui->labelnotmatching->setVisible(true);

            }

            if((2024-year)<12){

            ui->labelage->setVisible(true);

            }

            if(ui->lineEditusername->text().isEmpty() || ui->lineEditpassword->text().isEmpty() ||
                ui->lineEditretypepassword->text().isEmpty() || ui->lineEditday->text().isEmpty()
                || ui->lineEdityear->text().isEmpty())
            {

                ui->labelmissing->setVisible(true);
            }
            else if(pword == ui->lineEditretypepassword->text() && (2024-year)>=12){

                usernames[x] = uname;
                passwords[x] = pword;
                ages[x] = (2024-year);
                usersCount++;

                hide();
                WelcomeWindow* wind = new WelcomeWindow(this,usernames[x],ages[x]);
                wind->show();

            }
        }

    }



