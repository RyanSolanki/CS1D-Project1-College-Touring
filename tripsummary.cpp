#include "tripsummary.h"
#include "ui_tripsummary.h"

tripSummary::tripSummary(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tripSummary)
{
    ui->setupUi(this);
}

tripSummary::~tripSummary()
{
    delete ui;
}