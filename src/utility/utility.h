#ifndef UTILITY_H
#define UTILITY_H
#include <QWidget>

class Utility
{
public:
    static void showMessage(const QString& text);
    static void showMessage(const QString &title, const QString& text);
    static void showMessage(QWidget *parent, const QString& text);
    static void showMessage(QWidget *parent, const QString &title, const QString& text);
    static void showDialog(QWidget *parent = nullptr);
};

#endif // UTILITY_H
