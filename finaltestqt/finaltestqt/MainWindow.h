#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtWidgets/QMainWindow>
#include <qmessagebox>
#include <QMainWindow>
class Game;
class MainWindow : public QMainWindow
{
	Q_OBJECT
private:
public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();
	void showManual();
};

#endif // MAINWINDOW_H
