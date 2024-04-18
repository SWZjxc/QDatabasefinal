#include "window.h"

window::window(QWidget *parent)
	: QDialog(parent)
{
	resize(700,700);
	setWindowTitle("LAB_Main");
}

window::~window()
{}
