#include "utility.h"
#include <QDialog>
#include <QMessageBox>

void Utility::showMessage(const QString& text)
{
    Utility::showMessage(nullptr, text);
}
void Utility::showMessage(const QString &title, const QString& text)
{
    Utility::showMessage(nullptr, title, text);
}
void Utility::showMessage(QWidget *parent, const QString& text)
{
    Utility::showMessage(parent,"提示", text);
}
void Utility::showMessage(QWidget *parent, const QString &title, const QString& text)
{
    QMessageBox msg(parent);
    msg.setWindowTitle(title);
    msg.setButtonText(QMessageBox::Ok, "确定");
    msg.setText(text);
    msg.setStyleSheet("QLabel{min-width:150px;min-height:50px;}");
    msg.exec();
    //msg.information(parent, title, text, QMessageBox::Ok);
}

void Utility::showDialog(QWidget *parent)
{
    auto dialog = new QDialog(parent);
    dialog->setFixedSize(300,200);
    dialog->show();
}
