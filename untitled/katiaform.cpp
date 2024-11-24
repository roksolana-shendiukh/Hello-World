#include "katiaform.h"
#include "ui_katiaform.h"

KatiaForm::KatiaForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::KatiaForm)
{
    ui->setupUi(this);
}

KatiaForm::~KatiaForm()
{
    delete ui;
}
