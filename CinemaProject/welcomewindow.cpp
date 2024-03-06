#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "loginwindow.h"

WelcomeWindow::WelcomeWindow(QWidget *parent, QString username)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    //QString ages = QString :: number(age);
    ui->labelHello->setText("Hello, "+username);

    QPixmap pix ("C:\\Users\\farid\\Documents\\CS Lab Assignment\\CinemaProject\\depositphotos_328859414-stock-photo-projector-cinema-hall-blank-white.jpg");
    int w = ui->labelPicture->width();
    int h = ui->labelPicture->height();
    ui->labelPicture->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_pushButtonLogout_clicked()
{
    hide();
    LoginWindow* loginw = new LoginWindow();
    loginw->show();
}
