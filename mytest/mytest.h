#ifndef MYTEST_H
#define MYTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_mytest.h"

class mytest : public QMainWindow
{
	Q_OBJECT

public:
	mytest(QWidget *parent = 0);
	~mytest();

private:
	Ui::mytestClass ui;
};

#endif // MYTEST_H
