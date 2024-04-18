#pragma once

#include <QDialog>
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
class Window  : public QDialog
{
	Q_OBJECT

public:
	Window(QWidget *parent=nullptr);
	bool data(QString sign);
	
};
