#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#define LedPin_1 0
#define LedPin_2 1

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_On_clicked();

    void on_On_2_clicked();

    void on_Off_clicked();

    void on_Off_2_clicked();

    void on_Quit_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
