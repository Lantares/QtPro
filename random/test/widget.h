#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QInputDialog>
#include <QTime>
#include <QMessageBox>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_num_clicked();


    void on_pushButton_a_clicked();

    void on_pushButton_b_clicked();

    void on_pushButton_c_clicked();

    void on_pushButton_d_clicked();

    void on_pushButton_e_clicked();

    void on_pushButton_f_clicked();

    void on_pushButton_g_clicked();

    void on_pushButton_h_clicked();

    void on_pushButton_i_clicked();

    void on_pushButton_j_clicked();

private:
    int num;
    Ui::Widget *ui;
    void setAble(int n);
    QString name[10];
    int random(int i);
    bool mark[10];
    void clearMark();
    void setAllAble();
    int shunxu[10];
    void getRandomList(int i);
};

#endif // WIDGET_H
