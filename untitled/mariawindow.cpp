#include "mariawindow.h"
#include "ui_mariawindow.h"
#include <QMessageBox>

MariaWindow::MariaWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MariaWindow)
{
    ui->setupUi(this);
}

MariaWindow::~MariaWindow()
{
    delete ui;
}

void MariaWindow::on_pushButton_clicked()
{
    QMessageBox::information(thiss, "Clicked", "Why you clicked me?");
}

