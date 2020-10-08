#ifndef CUTEWINDOW_H
#define CUTEWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class cutewindow; }
QT_END_NAMESPACE

class Cute_Window : public QMainWindow
{
    Q_OBJECT

public:
    Cute_Window(QWidget *parent = nullptr);
    ~Cute_Window();

private:
    void btn_Click();
    void readSettings();
    void writeSettings();

    Ui::cutewindow *ui;
};
#endif // CUTEWINDOW_H
