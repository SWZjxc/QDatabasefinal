#pragma once

#include <QWidget>

class window  : public QWidget
{
	Q_OBJECT

public:
	window(QWidget *parent=nullptr);
	~window();
};
