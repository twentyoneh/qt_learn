#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    w.setWindowTitle("Вывод окна по центру экрана");
    w.resize(350, 70);

    QScreen *screen = QApplication::primaryScreen();
    QRect rect = screen->geometry();
    int x = (rect.width() - w.width()) / 2;
    int y = (rect.height() - w.height()) / 2;
    w.move(x, y);
    w.show();
    return a.exec();
}
