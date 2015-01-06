#ifndef DIALOGUE_H
#define DIALOGUE_H

#include <QtWidgets/QMainWindow>
#include "ui_dialogue.h"

class dialogue : public QMainWindow
{
	Q_OBJECT

public:
	dialogue(QWidget *parent = 0);
	~dialogue();
	void init();
	QString file;
private:
	void bindEvent();
	void open();
	void openfile(const QString &_fliename);

	void setExistingDirectory();
	void setOpenFileName();

private:
	Ui::dialogueClass ui;
};

#endif // DIALOGUE_H
