#ifndef MARIAWINDOW_H
#define MARIAWINDOW_H

#include <QMainWindow>

namespace Ui {
class MariaWindow;
}

class MariaWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MariaWindow(QWidget *parent = nullptr);
    ~MariaWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MariaWindow *ui;
};

#endif // MARIAWINDOW_H
