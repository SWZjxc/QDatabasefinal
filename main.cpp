#include <QApplication>
#include "mainWindow.h"

int main(int argc, char* argv[])
{
	QApplication a(argc,argv);
	mainWindow win;
	win.show();
	//QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE");
	//db1.setDatabaseName("test.db");
	//db1.open();
	//QSqlQuery query1(db1);
	//query1.exec("create table list(ID INT,name char[10],grade int)");
	return a.exec();
}