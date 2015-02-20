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
	//QString fileOpen;
	//QString fileSave;
	QString fileID;
	QString qstringkeyOpen;
	QString qstribgkeySave;
	QJsonArray Arrayitem;

private:
	void bindEvent();
	void open();
	void openFile(const QString &_flie);
	void save();
	void saveFile(const QString &_flie);
	void pbInsert();
	void pbDelete();
	
	void readJson();
	void writeJson();
	void clickrefresh(QListWidgetItem *_item);

	void setExistingDirectory();
	void setOpenFileName();

private:
	Ui::dialogueClass ui;
};

#endif // DIALOGUE_H
