#include "showvideodialog.h"
#include "ui_showvideodialog.h"

ShowVideoDialog::ShowVideoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowVideoDialog)
{
    ui->setupUi(this);
}

ShowVideoDialog::~ShowVideoDialog()
{
    delete ui;
}

QLabel* ShowVideoDialog::label()
{
    return ui->label;
}
