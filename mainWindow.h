#pragma once

#include <QMainWindow>
#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QInputDialog>
#include <QLineEdit>
#include <QFileDialog>
#include <QMessageBox>
#include <QString>
#include <QLabel>
#include <QFont>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "window.h"
class mainWindow  : public QMainWindow
{
	Q_OBJECT

public:
	mainWindow(QWidget *parent = nullptr);
	void Button_Clicked();
	void Button2_Clicked();
	bool data(QString sign);
	QLineEdit* lineEdit = new QLineEdit(this);
	QLineEdit* lineEdit2 = new QLineEdit(this);
	~mainWindow();
private:
	Window w;
};
