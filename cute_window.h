#ifndef CUTEWINDOW_H
#define CUTEWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class cutewindow; }
QT_END_NAMESPACE

class cute_window : public QMainWindow
{
    Q_OBJECT

public:
    cute_window(QWidget *parent = nullptr);
    ~cute_window();

private:
    void btn_Click();
    void btn_Click2();
    Ui::cutewindow *ui;
};
#endif // CUTEWINDOW_H
