#include "cute_window.h"
#include "ui_cute_window.h"
#include "qpushbutton.h"
#include "QDialog"
#include <QSettings>

cute_window::cute_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cutewindow)
{
    ui->setupUi(this);
    readSettings();

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

void cute_window::readSettings()
{
     QSettings settings(APP_QMAKE_TARGET_COMPANY, APP_QMAKE_TARGET_PRODUCT);
     QSize defaultSize = size();
     QSize size = settings.value( "size" , defaultSize).toSize();
     resize(size);
}

void cute_window::writeSettings()
{
     QSettings settings(APP_QMAKE_TARGET_COMPANY, APP_QMAKE_TARGET_PRODUCT);
     QSize sizeValue = size();
     settings.setValue("size" , sizeValue);
}

cute_window::~cute_window()
{
    writeSettings();
    delete ui;
}

