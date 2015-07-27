#include "mytest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	mytest w;
	w.show();

	QString name = "li";
	if (false)
	{
		int i = 0;
	}

	return a.exec();
}
