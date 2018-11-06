#include "testgit.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	int b(1);
	int c(0);
	int d(2);
	QApplication a(argc, argv);
	TestGit w;
	w.show();
	return a.exec();
}
