#ifndef APP3_H
#define APP3_H

#include <QtWidgets/QMainWindow>
#include "ui_app3.h"

class app3 : public QMainWindow
{
	Q_OBJECT

public:
	app3(QWidget *parent = 0);
	~app3();

private:
	Ui::app3Class ui;
};

#endif // APP3_H
