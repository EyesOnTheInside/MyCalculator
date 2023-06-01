#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setWindowIcon(QIcon(":/icons/we.ico"));
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button1_clicked()
{
    if(check2==1)
    {
        ui->textEdit->insertPlainText("1");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("1");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button2_clicked()
{
    if(check2==1)
    {
        ui->textEdit->insertPlainText("2");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("2");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button3_clicked()
{
    if(check2==1)
    {
        ui->textEdit->insertPlainText("3");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("3");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button4_clicked()
{
    if(check2==1)
    {
        ui->textEdit->insertPlainText("4");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("4");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button5_clicked()
{
    if(check2==1)
    {
        ui->textEdit->insertPlainText("5");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("5");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button6_clicked()
{
    if(check2==1)
    {
        ui->textEdit->insertPlainText("6");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("6");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button7_clicked()
{
    if(check2==1)
    {
        ui->textEdit->insertPlainText("7");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("7");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button8_clicked()
{
    if(check2==1)
    {
        ui->textEdit->insertPlainText("8");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("8");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button9_clicked()
{
    if(check2==1)
    {
        ui->textEdit->insertPlainText("9");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("9");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button0_clicked()
{
    if(check2==1)
    {
        ui->textEdit->insertPlainText("0");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("0");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_buttonc_clicked()
{
    sum1=0;
    sum2=0;
    sign=0;
    help=0.1;
    point=0;
    plus=0;
    min=0;
    mult=0;
    div=0;
    check=-1;
    check2=0;
    kuohao=0;
    temp=0;
    ui->textEdit->setPlainText("");
}

void MainWindow::on_buttondot_clicked()
{
     if(check2==1)
     {
         ui->textEdit->insertPlainText(".");
     }
     else if(check2==0)
     {
         ui->textEdit->setPlainText("0.");

         QTextCursor cursor=ui->textEdit->textCursor();
         cursor.movePosition(QTextCursor::End);
         ui->textEdit->setTextCursor(cursor);
     }
}

void MainWindow::on_buttonmult_clicked()
{
    QString string2;
    if(check2==1)
    {
        ui->textEdit->insertPlainText("*");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("0*");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
    string2=ui->textEdit->toPlainText();
    check=string2.size()-1;
}

void MainWindow::on_buttonmin_clicked()
{
    QString string2;
    if(check2==1)
    {
        ui->textEdit->insertPlainText("-");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("0-");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
    string2=ui->textEdit->toPlainText();
    check=string2.size()-1;
}

void MainWindow::on_buttonplus_clicked()
{
    QString string2;
    if(check2==1)
    {
        ui->textEdit->insertPlainText("+");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("0+");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
    string2=ui->textEdit->toPlainText();
    check=string2.size()-1;
}

void MainWindow::on_buttoneq_clicked()
{
    ui->textEdit->insertPlainText("=");
    string1=ui->textEdit->toPlainText();
    int i=-1,tem=0,k=-1;
    double w=0;
    while(string1[++i]!='=')
    {
        if(string1[i]!="+"&&string1[i]!="-"&&string1[i]!="*"&&string1[i]!="/"
        &&string1[i]!="("&&string1[i]!=")"&&string1[i]!="Π"&&string1[i]!="!")
        {
            if(string1[i]=='.')
            {
                if(point==0)
                {
                    point=1;
                    continue;
                }
                else
                {
                    tem=1;
                    break;
                }
            }
            st=string1[i];
            if(sign==0)
            {
                if(point==0)
                {
                    sum1=sum1*10+st.toDouble();
                }
                else
                {
                    sum1=sum1+help*st.toDouble();
                    help=help*0.1;
                }
            }
            else
            {
                if(point==0)
                {
                    sum2=sum2*10+st.toDouble();
                }
                else
                {
                    sum2=sum2+help*st.toDouble();
                    help=help*0.1;
                }
            }
        }

        else if(string1[i]=="!")
        {
            if(sum2!=0)
            {
                if(point==0)
                {
                    w=sum2;
                    sum2=1;
                    for(int q=w;q>0;q--)
                    {
                        sum2*=q;
                    }
                }
                else
                {
                    tem=3;
                    break;
                }
            }
            else
            {
                if(sum1!=0)
                {
                    if(point==0)
                    {
                        w=sum1;
                        sum1=1;
                        for(int q=w;q>0;q--)
                        {
                            sum1*=q;
                        }
                    }
                    else
                    {
                        tem=3;
                        break;
                    }
                }
                else  //0！==1
                {
                    sum1=1;
                }
            }
            if(string1[i+1]!="="&&string1[i+1]!="+"&&string1[i+1]!="-"
              &&string1[i+1]!="*"&&string1[i+1]!="/"&&string1[i+1]!=".")
            {
                string1.insert(i+1,"*");
            }
            else if(string1[i+1]==".")
            {
                string1.insert(i+1,"0");
                string1.insert(i+1,"*");
            }
        }

        else if(string1[i]=="Π")
        {
            if(sum2!=0)
            {
                sum2*=3.14;
            }
            else
            {
                if(sign==1)
                {
                    sum2=3.14;
                }
                else if(sum1!=0)
                {
                    sum1*=3.14;
                }
                else
                {
                    sum1=3.14;
                }
            }
            if(string1[i+1]!="="&&string1[i+1]!="+"&&string1[i+1]!="-"
              &&string1[i+1]!="*"&&string1[i+1]!="/"&&string1[i+1]!=".")
            {
                string1.insert(i+1,"*");
            }
            else if(string1[i+1]==".")
            {
                string1.insert(i+1,"0");
                string1.insert(i+1,"*");
            }
        }

        else if(string1[i]=="(")
        {
            if(kuohao==0)
            {
                if(plus==1)
                {
                    k=0;
                    plus=0;
                }
                else if(min==1)
                {
                    k=1;
                    min=0;
                }
                else if(mult==1)
                {
                    k=2;
                    mult=0;
                }
                else if(div==1)
                {
                    k=3;
                    div=0;
                }
                if(k>-1)
                {
                    temp=sum1;
                    sum1=0;
                    sign=0;
                    kuohao=1;
                }
                else
                {
                    kuohao=1;
                    continue;
                }
            }
            else
            {
                tem=2;
                break;
            }
        }

        else if(string1[i]==")")
        {
            if(kuohao==1)
            {
                if(plus==1)
                {
                    sum1+=sum2;
                    plus=0;
                }
                else if(min==1)
                {
                    sum1-=sum2;
                    min=0;
                }
                else if(mult==1)
                {
                    sum1*=sum2;
                    mult=0;
                }
                else if(div==1)
                {
                    if(sum2==0)
                    {
                        tem=1;
                        break;
                    }
                    else
                    {
                        sum1/=sum2;
                    }
                    div=0;
                }
                if(k==-1)
                {
                    continue;
                }
                else if(k==0)
                {
                    sum1+=temp;
                }
                else if(k==1)
                {
                    sum1=temp-sum1;
                }
                else if(k==2)
                {
                    sum1*=temp;
                }
                else if(k==3)
                {
                    if(sum1==0)
                    {
                        tem=1;
                        break;
                    }
                    else
                    {
                        sum1=temp/sum1;
                    }
                }
                temp=0;
                k=-1;
                sum2=0;
                help=0.1;
                point=0;
                kuohao=0;
                sign=0;
            }
            else
            {
                tem=2;
                break;
            }
        }

        else if(string1[i]=='+')
        {
            if(plus==1)
            {
                sum1+=sum2;
                plus=0;
            }
            else if(min==1)
            {
                sum1-=sum2;
                min=0;
            }
            else if(mult==1)
            {
                sum1*=sum2;
                mult=0;
            }
            else if(div==1)
            {
                if(sum2==0)
                {
                    tem=1;
                    break;
                }
                else
                {
                    sum1/=sum2;
                }
                div=0;
            }
            help=0.1;
            point=0;
            sum2=0;
            sign=1;
            plus=1;
        }

        else if(string1[i]=='-')
        {
            if(plus==1)
            {
                sum1=sum1+sum2;
                plus=0;
            }
            else if(min==1)
            {
                sum1=sum1-sum2;
                min=0;
            }
            else if(mult==1)
            {
                sum1=sum1*sum2;
                mult=0;
            }
            else if(div==1)
            {
                if(sum2==0)
                {
                    tem=1;
                    break;
                }
                else
                {
                    sum1/=sum2;
                }
                div=0;
            }
            help=0.1;
            point=0;
            sum2=0;
            sign=1;
            min=1;
        }

        else if(string1[i]=='*')
        {
            if(plus==1)
            {
                sum1+=sum2;
                plus=0;
            }
            else if(min==1)
            {
                sum1-=sum2;
                min=0;
            }
            else if(mult==1)
            {
                sum1*=sum2;
                mult=0;
            }
            else if(div==1)
            {
                if(sum2==0)
                {
                    tem=1;
                    break;
                }
                else
                {
                    sum1/=sum2;
                }
                div=0;
            }
            help=0.1;
            point=0;
            sum2=0;
            sign=1;
            mult=1;
        }

        else
        {
            if(plus==1)
            {
                sum1+=sum2;
                plus=0;
            }
            else if(min==1)
            {
                sum1-=sum2;
                min=0;
            }
            else if(mult==1)
            {
                sum1*=sum2;
                mult=0;
            }
            else if(div==1)
            {
                if(sum2==0)
                {
                    tem=1;
                    break;
                }
                else
                {
                    sum1/=sum2;
                }
                div=0;
            }
            help=0.1;
            point=0;
            sum2=0;
            sign=1;
            div=1;
        }
    }
    if(plus==1)
    {
        sum1+=sum2;
        plus=0;
    }
    else if(min==1)
    {
        sum1-=sum2;
        min=0;
    }
    else if(mult==1)
    {
        sum1*=sum2;
        mult=0;
    }
    else if(div==1)
    {
        if(sum2==0)
        {
            tem=1;
        }
        else
        {
            sum1/=sum2;
        }
        div=0;
    }
    if(kuohao==1)
    {
        kuohao=0;
        tem=2;
    }

    if(tem==1)
    {
        ui->textEdit->setPlainText("ERROR to /0");
    }
    else if(tem==0)
    {
        ui->textEdit->insertPlainText(QString::number(sum1,'f',2));
    }
    else if(tem==3)
    {
        ui->textEdit->setPlainText("ERROR to x!");
    }
    else if(tem==2)
    {
        ui->textEdit->setPlainText("ERROR to ( or )");
    }
    else
    {
        ui->textEdit->setPlainText("ERROR to points");
    }

    sum1=0;
    sum2=0;
    sign=0;
    help=0.1;
    point=0;
    plus=0;
    min=0;
    mult=0;
    div=0;
    check=-1;
    check2=0;
    kuohao=0;
}

void MainWindow::on_buttondivrev_clicked()
{
    QString string3;
    double tem=0;
    string3=ui->textEdit->toPlainText();
    if(check!=-1||string3.size()>0)
    {
        if(check!=string3.size())
        {
            tem=string3.mid(check+1).toDouble();
            if(tem==0)
            {
                check=-1;
                ui->textEdit->setPlainText("ERROR to /0");
                check2=0;
            }
            else
            {
                string3.replace(check+1, string3.size()-check,QString::number(1/tem,'f',2));
                ui->textEdit->setPlainText(string3);

                QTextCursor cursor=ui->textEdit->textCursor();
                cursor.movePosition(QTextCursor::End);
                ui->textEdit->setTextCursor(cursor);
            }
        }
        check2=0;
    }
}

void MainWindow::on_buttonpow_clicked()
{
    QString string3;
    double tem=0;
    string3=ui->textEdit->toPlainText();
    if(check!=-1||string3.size()>0)
    {
        if(check!=string3.size())
        {
            tem=string3.mid(check+1).toDouble();
            string3.replace(check+1, string3.size()-check,QString::number(tem*tem,'f',2));
            ui->textEdit->setPlainText(string3);

            QTextCursor cursor=ui->textEdit->textCursor();
            cursor.movePosition(QTextCursor::End);
            ui->textEdit->setTextCursor(cursor);
        }
        check2=0;
    }
}

void MainWindow::on_buttonsqrt_clicked()
{
    QString string3;
    double tem=0;
    string3=ui->textEdit->toPlainText();
    if(check!=-1||string3.size()>0)
    {
        if(check!=string3.size())
        {
            tem=string3.mid(check+1).toDouble();
            string3.replace(check+1, string3.size()-check,QString::number(sqrt(tem),'f',2));
            ui->textEdit->setPlainText(string3);

            QTextCursor cursor=ui->textEdit->textCursor();
            cursor.movePosition(QTextCursor::End);
            ui->textEdit->setTextCursor(cursor);
        }
    }
}

void MainWindow::on_buttondiv_clicked()
{
    QString string2;
    if(check2==1)
    {
        ui->textEdit->insertPlainText("/");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("0/");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
    string2=ui->textEdit->toPlainText();
    check=string2.size()-1;
}

void MainWindow::on_buttonlbrac_clicked()
{
    if(check2==1)
    {
        ui->textEdit->insertPlainText("(");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("(");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_buttonrbrac_clicked()
{
    if(check2==1)
    {
        ui->textEdit->insertPlainText(")");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText(")");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_buttonpi_clicked()
{
    if(check2==1)
    {
        ui->textEdit->insertPlainText("Π");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("Π");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_buttonjiecheng_clicked()
{
    if(check2==1)
    {
        ui->textEdit->insertPlainText("!");
    }
    else if(check2==0)
    {
        ui->textEdit->setPlainText("!");
        check2=1;

        QTextCursor cursor=ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}
