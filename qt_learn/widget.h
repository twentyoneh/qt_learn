#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QScreen>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btn1_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
