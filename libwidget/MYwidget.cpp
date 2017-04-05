#include "mywidget.h"

#include <QDebug>

MyselfWidget::MyselfWidget(QWidget *parent)
    :QWidget(parent)
{
    this->setFixedSize(400,400);
    btn = new QPushButton(this);
    btn ->setText("按钮1");

    connect(btn,SIGNAL(clicked()),this,SLOT(btn_slot()));
}


void MyselfWidget::btn_slot()
{
    qDebug()<<"按钮1被点击...";
}
