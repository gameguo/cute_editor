#include "cute_window.h"
#include "ui_cute_window.h"

cute_window::cute_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cutewindow)
{
    ui->setupUi(this);
}

cute_window::~cute_window()
{
    delete ui;
}

