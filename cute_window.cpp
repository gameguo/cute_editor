#include "cute_window.h"
#include "ui_cute_window.h"
#include "qpushbutton.h"
#include "QDialog"

cute_window::cute_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cutewindow)
{
    ui->setupUi(this);
    QPushButton* btn = new QPushButton(this);
    btn->setText("关闭");
    connect(btn,&QPushButton::clicked, this, &cute_window::btn_Click);

    QPushButton* btn2 = new QPushButton(this);
    btn2->setText("弹窗");
    btn2->move(100,0);
    connect(btn2,&QPushButton::clicked, this, &cute_window::btn_Click2);
}

void cute_window::btn_Click(){
    this->close();
}

void cute_window::btn_Click2(){
    auto dialog = new QDialog(this);
    dialog->setFixedSize(300,200);
    dialog->show();
}

cute_window::~cute_window()
{
    delete ui;
}

