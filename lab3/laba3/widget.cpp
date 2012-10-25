#include "widget.h"
#include "ui_widget.h"
#include <QVBoxLayout>



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{

    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
