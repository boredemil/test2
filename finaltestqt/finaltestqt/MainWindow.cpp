#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	showManual();
}

MainWindow::~MainWindow()
{

}
void MainWindow::showManual()
{
	QMessageBox *manual = new QMessageBox;
	manual->setText(
		"1. blablabla"
		);
	manual->exec();
}