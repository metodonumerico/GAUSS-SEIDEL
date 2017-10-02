#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    void on_ITERACIONES_clicked();

    void on_PROCESAR_clicked();

    void on_BORRAR_clicked();

    void on_SALIR_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
