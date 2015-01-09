#ifndef DIALOGUE_H
#define DIALOGUE_H
#include <QtWidgets/QMainWindow>
#include "ui_dialogue.h"
#include <QJsonArray>


class dialogue : public QMainWindow
{
	Q_OBJECT

public:
	dialogue(QWidget *parent = 0);
	~dialogue();
	void init();
	QString file;
	QString qstringkey;
	QJsonArray Arrayitem;
private:
	void bindEvent();
	void open();
	void openfile(const QString &_fliename);
	void readJson();
	void writeJson();
	void clickrefresh(QListWidgetItem *_item);

	void setExistingDirectory();
	void setOpenFileName();

private:
	Ui::dialogueClass ui;
};

#endif // DIALOGUE_H
