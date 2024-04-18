#include "window.h"

window::window(QWidget *parent)
	: QWidget(parent)
{
	resize(700,700);
	setWindowTitle("LAB_Main");
	show();
}

window::~window()
{}
