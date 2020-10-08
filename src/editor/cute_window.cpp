#include "cute_window.h"
#include "ui_cute_window.h"
#include "QPushButton"
#include "QDialog"
#include <QSettings>
#include <utility.h>

Cute_Window::Cute_Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cutewindow)
{
    ui->setupUi(this);
    readSettings();

    QPushButton* btn = new QPushButton(this);
    btn->setText("弹窗");
    connect(btn,&QPushButton::clicked, this, &Cute_Window::btn_Click);
}

void Cute_Window::btn_Click(){
    Utility::showMessage(this, "内容");
}

void Cute_Window::readSettings()
{
     QSettings settings(APP_QMAKE_TARGET_COMPANY, APP_QMAKE_TARGET_PRODUCT);
     QSize defaultSize = size();
     QSize size = settings.value( "size" , defaultSize).toSize();
     resize(size);
}

void Cute_Window::writeSettings()
{
     QSettings settings(APP_QMAKE_TARGET_COMPANY, APP_QMAKE_TARGET_PRODUCT);
     QSize sizeValue = size();
     settings.setValue("size" , sizeValue);
}

Cute_Window::~Cute_Window()
{
    writeSettings();
    delete ui;
}

