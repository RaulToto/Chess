#include "chess.h"
#include "ui_chess.h"

chess::chess(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chess)
{
    ui->setupUi(this);
}

chess::~chess()
{
    delete ui;
}
