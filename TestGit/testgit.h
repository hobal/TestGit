#ifndef TESTGIT_H
#define TESTGIT_H

#include <QtGui/QMainWindow>
#include "ui_testgit.h"

class TestGit : public QMainWindow
{
	Q_OBJECT

public:
	TestGit(QWidget *parent = 0, Qt::WFlags flags = 0);
	~TestGit();

private:
	Ui::TestGitClass ui;
};

#endif // TESTGIT_H
