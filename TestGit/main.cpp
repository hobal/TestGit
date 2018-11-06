#include "testgit.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	int a(0);
	int b(1);
	QApplication a(argc, argv);
	TestGit w;
	w.show();
	return a.exec();
}
