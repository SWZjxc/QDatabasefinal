#include "mainWindow.h"
#include "window.h"
mainWindow::mainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	resize(500, 500);

	QPushButton* button = new QPushButton("Log In", this);
	QPushButton* button2 = new QPushButton("Sign Up", this);
    QLabel* label = new QLabel(this);
    QLabel* label2 = new QLabel(this);
    QLabel* label3 = new QLabel(this);

    QFont ft("Arial", 24);
    QFont ft2("Arial", 12);
    label->setFont(ft);
    label->setText("Log In");
    label->move(195, 70);
    label2->setFont(ft2);
    label2->setText("Username:");
    label2->move(70, 150);
    label3->setFont(ft2);
    label3->setText("Passwd:");
    label3->move(70, 190);
    lineEdit->setPlaceholderText("Enter your ID");
    lineEdit->setGeometry(160, 150, 200, 30);
    lineEdit2->setPlaceholderText("Enter your PWD");
    lineEdit2->setEchoMode(QLineEdit::Password);
    lineEdit2->setGeometry(160, 190, 200, 30);
    button2->setGeometry(300, 250, 80, 50);
    button->setGeometry(100, 250, 80, 50);
    QObject::connect(button2, &QPushButton::clicked, this, &mainWindow::Button2_Clicked);
    QObject::connect(button, &QPushButton::clicked, this, &mainWindow::Button_Clicked);
}


void mainWindow::Button_Clicked()
{
    bool flag;
    QString username = lineEdit->text();
    QString password = lineEdit2->text();// SELECT EXISTS(SELECT 1 FROM user WHERE usr = '11111');
    QString msg = QString("SELECT * from user where %1 ").arg(username);
    flag = data(msg);
    if (flag)
    {
        QString msg = QString("SELECT pwd from user where usr = '%1'").arg(password);
        flag = data(msg);
        if (flag)
        {
            QMessageBox msgbox;
            msgbox.setText("sueecssfully!");
            msgbox.exec();
            QDialog* dialog1 = new QDialog(this);
            dialog1->resize(500, 500);
            dialog1->show();
        }
        else
        {
            QMessageBox::warning(this, "WARNNING!", "Password ERROR!!1");
            lineEdit->clear();
            lineEdit2->clear();
        }
    }

}
void mainWindow::Button2_Clicked()
{
    QString username = lineEdit->text();
    QString password = lineEdit2->text();
    QString msg = QString("insert into user values('%1','%2')").arg(username).arg(password);
    data(msg);
}

bool mainWindow::data(QString sign)
{
    QString id, name, score, classs;
    QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("test.db");
    db1.open();
    QSqlQuery query1(db1);
    query1.exec(sign);
    if(query1.next())
        return true;
    else
    {
        return false;
    }
}

mainWindow::~mainWindow()
{}
