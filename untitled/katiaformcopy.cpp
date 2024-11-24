#include "katiaformcopy.h"
#include "ui_katiaformcopy.h"

KatiaFormCopy::KatiaFormCopy(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::KatiaFormCopy)
{
    ui->setupUi(this);
}

KatiaFormCopy::~KatiaFormCopy()
{
    delete ui;
}
