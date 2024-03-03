#include "loginwindow.h"
#include "Users.h"
#include "registerwindow.h"
#include "ui_loginwindow.h"
#include "welcomewindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->labelerror->setVisible(false);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButtonlogin_clicked()
{
    QString username = ui->lineEditLogin->text();
    QString password = ui->lineEditpassword->text();

    for(int i = 0; i<usersCount;i++){
        if(username == usernames[i] && password == passwords[i]){
            hide();
            WelcomeWindow* welcomeWindow = new WelcomeWindow(this);
            welcomeWindow->show();
        }
        else{
            ui->labelerror->setVisible(true);
        }
    }
}


void LoginWindow::on_pushButtonregister_clicked()
{
    hide();
    RegisterWindow* registerWindow = new RegisterWindow(this);
    registerWindow->show();

}

