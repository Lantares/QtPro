#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("QAQ");
    num = 10;

    clearMark();
    getRandomList(10);



    //ui->pushButton_a->setText(QString::number(random(2), 10));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::clearMark()
{
    for(int i = 0; i < 10; i++)
        mark[i] = false;
}

int Widget::random(int i)
{
    QTime time;
    time= QTime::currentTime();
    qsrand(time.msec()+time.second()*1000);

    int xxx=qrand()%i;
    return xxx;
}

void Widget::on_pushButton_clicked()
{
    bool ok;
    for(int i = 1; i <= num; i++)
    {
        name[i-1] = QInputDialog::getText (this,"输入項目" + QString::number(i,10),"項目" + QString::number(i,10) + ":",QLineEdit::Normal,"",&ok);
    }
    setAble(num);

}
void Widget::getRandomList(int i)
{
    clearMark();
    for(int j = 0; j < i; j++)
    {
        int num = random(i);
        if(mark[num] == false)
        {
            shunxu[j] = num;
            mark[num] = true;
        }
        else
        {
            j--;
        }
    }
}

void Widget::setAllAble()
{
    ui->pushButton_a->setEnabled(true);
    ui->pushButton_a->setText("A");
    ui->pushButton_b->setEnabled(true);
    ui->pushButton_b->setText("B");
    ui->pushButton_c->setEnabled(true);
    ui->pushButton_c->setText("C");
    ui->pushButton_d->setEnabled(true);
    ui->pushButton_d->setText("D");
    ui->pushButton_e->setEnabled(true);
    ui->pushButton_e->setText("E");
    ui->pushButton_f->setEnabled(true);
    ui->pushButton_f->setText("F");
    ui->pushButton_g->setEnabled(true);
    ui->pushButton_g->setText("G");
    ui->pushButton_h->setEnabled(true);
    ui->pushButton_h->setText("H");
    ui->pushButton_i->setEnabled(true);
    ui->pushButton_i->setText("I");
    ui->pushButton_j->setEnabled(true);
    ui->pushButton_j->setText("J");
}

void Widget::setAble(int n)
{
    setAllAble();
    if(n <= 9)
    {
        ui->pushButton_j->setEnabled(false);
    }
    if(n <= 8)
    {
        ui->pushButton_i->setEnabled(false);
    }
    if(n <= 7)
    {
        ui->pushButton_h->setEnabled(false);
    }
    if(n <= 6)
    {
        ui->pushButton_g->setEnabled(false);
    }
    if(n <= 5)
    {
        ui->pushButton_f->setEnabled(false);
    }
    if(n <= 4)
    {
        ui->pushButton_e->setEnabled(false);
    }
    if(n <= 3)
    {
        ui->pushButton_d->setEnabled(false);
    }
    if(n <= 2)
    {
        ui->pushButton_c->setEnabled(false);
    }
}

void Widget::on_pushButton_num_clicked()
{
    bool ok;
    int n = QInputDialog::getInt(this, "輸入數量", "數量(2-10):", 10, 2, 10, 1, &ok);
    if(ok)
    {
        num = n;
        setAble(n);
    }
    getRandomList(n);
}

void Widget::on_pushButton_a_clicked()
{
    ui->pushButton_a->setText(name[shunxu[0]]);
    ui->pushButton_a->setEnabled(false);
}

void Widget::on_pushButton_b_clicked()
{
    ui->pushButton_b->setText(name[shunxu[1]]);
    ui->pushButton_b->setEnabled(false);
}

void Widget::on_pushButton_c_clicked()
{
    ui->pushButton_c->setText(name[shunxu[2]]);
    ui->pushButton_c->setEnabled(false);
}



void Widget::on_pushButton_d_clicked()
{
    ui->pushButton_d->setText(name[shunxu[3]]);
    ui->pushButton_d->setEnabled(false);
}

void Widget::on_pushButton_e_clicked()
{
    ui->pushButton_e->setText(name[shunxu[4]]);
    ui->pushButton_e->setEnabled(false);
}

void Widget::on_pushButton_f_clicked()
{
    ui->pushButton_f->setText(name[shunxu[5]]);
    ui->pushButton_f->setEnabled(false);
}

void Widget::on_pushButton_g_clicked()
{
    ui->pushButton_g->setText(name[shunxu[6]]);
    ui->pushButton_g->setEnabled(false);
}

void Widget::on_pushButton_h_clicked()
{
    ui->pushButton_h->setText(name[shunxu[7]]);
    ui->pushButton_h->setEnabled(false);
}

void Widget::on_pushButton_i_clicked()
{
    ui->pushButton_i->setText(name[shunxu[8]]);
    ui->pushButton_i->setEnabled(false);
}

void Widget::on_pushButton_j_clicked()
{
    ui->pushButton_j->setText(name[shunxu[9]]);
    ui->pushButton_j->setEnabled(false);
}
