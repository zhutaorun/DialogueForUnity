#include "dialogue.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	dialogue w;
	w.show();
	return a.exec();
	
}
