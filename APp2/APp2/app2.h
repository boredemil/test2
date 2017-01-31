#ifndef APP2_H
#define APP2_H

#include <QtWidgets/QMainWindow>
#include "ui_app2.h"

class APp2 : public QMainWindow
{
	Q_OBJECT

public:
	APp2(QWidget *parent = 0);
	~APp2();

private:
	Ui::APp2Class ui;
};

#endif // APP2_H
