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

private:
	Ui::dialogueClass ui;
};

#endif // DIALOGUE_H
