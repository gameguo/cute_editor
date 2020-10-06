#include "cute_window.h"

#include <QApplication>
#include <QDateTime>
#include <QDialog>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPixmap pixmap(":/res/splash.png"); // 装载图片
    QSplashScreen splash(pixmap); // 初始化图片到QSplashScreen
    splash.show(); // 显示图片
    a.processEvents(); // 刷新事件循环
    //splash.showMessage("Cute Editor", Qt::AlignCenter, Qt::white);
    QDateTime n = QDateTime::currentDateTime();
    QDateTime now;
    do{ now = QDateTime::currentDateTime(); }
    while (n.secsTo(now) <= 2);

    cute_window w;
    w.show();

    splash.finish(&w); // 完成后自动close

    return a.exec();
}

