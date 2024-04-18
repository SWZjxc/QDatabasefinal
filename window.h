#pragma once

#include <QDialog>

class window  : public QDialog
{
	Q_OBJECT

public:
	window(QWidget *parent=nullptr);
	~window();
};
