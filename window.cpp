#include "window.h"

Window::Window(QWidget *parent)
	: QDialog(parent)
{
	resize(700,700);
	setWindowTitle("LAB_Main");
    QPushButton* button = new QPushButton("NEW", this);
    QPushButton* button2 = new QPushButton("DEL", this);
    QPushButton* button3 = new QPushButton("UPDATE", this);
    QPushButton* button4 = new QPushButton("SELECT", this);
    button->setGeometry(300, 100, 80, 50);
    button2->setGeometry(100, 100, 80, 50);
    button3->setGeometry(200, 100, 80, 50);
    button4->setGeometry(400, 100, 80, 50);

}

bool Window::data(QString sign)
{
    QString id, name, score, classs;
    QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("test.db");
    db1.open();
    QSqlQuery query1(db1);
    query1.exec(sign);
    if (query1.next())
        return true;
    else
    {
        return false;
    }
}