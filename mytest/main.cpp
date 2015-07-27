#include "mytest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	mytest w;
	w.show();
	return a.exec();
}
