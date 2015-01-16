#include "dialogue.h"
#include <QDebug>
#include <QFileDialog>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
dialogue::dialogue(QWidget *parent)
: QMainWindow(parent)
{
	ui.setupUi(this);
	init();
}
//-----------------------------------------------------------------------
dialogue::~dialogue()
{

}
//-----------------------------------------------------------------------
void dialogue::init()
{
	bindEvent();
	ui.listWidget->clear();
	ui.listWidget->setDragDropMode(ui.listWidget->InternalMove);
}
//-----------------------------------------------------------------------
//绑定按钮
void dialogue::bindEvent()
{
	connect(ui.action_new, &QAction::triggered, [&](bool _flag){
	});
	connect(ui.action_open, &QAction::triggered, [&](bool _flag){
		this->open();
		this->openFile(fileOpen);
		this->readJson();
	});
	connect(ui.action_save, &QAction::triggered, [&](bool _falg){
	});
	connect(ui.action_saveas, &QAction::triggered, [&](bool _flag){
		this->save();
		this->writeJson();
		this->saveFile(fileSave);
	});
	connect(ui.action_json, &QAction::triggered, [&](bool _flag){
		this->writeJson();
	});
	connect(ui.action_clearlist, &QAction::triggered,[&](bool _flag){
		ui.listWidget->clear();
	});
	connect(ui.action_aboutsoft, &QAction::triggered, [&](bool _flag){
	});
	connect(ui.action_aboutme, &QAction::triggered, [&](bool _flag){
	});

	connect(ui.pushButton_insert, &QPushButton::clicked, [&](bool _flag){
		this->pbinsert();
	
	});
	connect(ui.pushButton_up, &QPushButton::clicked, [&](bool _flag){
		
	});
	connect(ui.pushButton_down, &QPushButton::clicked, [&](bool _flag){
	});
	connect(ui.pushButton_delete, &QPushButton::clicked, [&](bool _flag){
		this->pbdelete();
		ui.pushButton_delete->setToolTip("delete删除当前选中的对话");
		ui.pushButton_delete->toolTip();
	});
	connect(ui.pushButton_saveitem, &QPushButton::clicked, [&](bool _flag){
				//void QListWidgetItem::setData();
	});

	connect(ui.listWidget, &QListWidget::currentItemChanged, [&](QListWidgetItem *_flag){
		this->clickrefresh(_flag);
		
	});
}
//-----------------------------------------------------------------------

//打开文件资源管理器
void dialogue::open()
{
	fileOpen = QFileDialog::getOpenFileName(
		this, tr("Open File"),
		"F:/home",
		tr("Text files (*.txt);;XML files (*.xml);;JSON files (*.json)"));
	qDebug() << fileOpen;
}
//-----------------------------------------------------------------------
//打开json文本txt文件
void dialogue::openFile(const QString &_flie)
{
	QString key;
	QFile file1(_flie);
	if (file1.open(QIODevice::ReadOnly))
	{
		QTextStream in(&file1);
		while (!in.atEnd())
		{
			in >> key;
			//qDebug() << key;
			qstringkeyOpen = key;
		}

		file1.close();
	}
}

//-----------------------------------------------------------------------
//保存文件;
void dialogue::save(){
	fileSave = QFileDialog::getSaveFileName(
		this, tr("Save File"),
		"F:/home/newJson.txt",
		tr("Text files (*.txt);;XML files (*.xml);;JSON files (*.json)"));
	qDebug() << fileSave;
	//QTextEdit
}
//-----------------------------------------------------------------------
//
void dialogue::saveFile(const QString &_flie)
{
	//QString key;
	QFile file1(_flie);
	if (file1.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
	{
		QTextStream out(&file1);
		while (!out.atEnd())
		{
			//out << key;
			//qDebug() << key;
			//qstringkey = key;
		}
		//qDebug() << "111111111111" << qstribgkeyW;
		out << qstribgkeySave;
		file1.close();
	}
}
//-----------------------------------------------------------------------
//插入方法
void dialogue::pbinsert(){
	//--int thisi = ui.listWidget->currentRow();
	int thisi = ui.listWidget->count();
	QString Sthisi = QString("%1").arg(thisi);
	qDebug() << thisi;
	QListWidgetItem *_item = new QListWidgetItem(Sthisi);
	ui.listWidget->insertItem(ui.listWidget->currentRow()+1, _item);
	//thisi++;

	QJsonObject jsonObj;
	//--json.insert("Oder", thisi);
	jsonObj.insert("Oder", thisi);
	jsonObj.insert("OwerID", QString("NPC"));
	jsonObj.insert("Message", QString("Message"));
	Arrayitem.append(jsonObj);
	Arrayitem.insert(thisi, jsonObj);

	//ui.listWidget->setSortingEnabled(true);
	/*--for (int i = 0; i < ui.listWidget->count(); i++)
	{
		QString Sitem = QString("%1").arg(i);
		ui.listWidget->item(i)->setText(Sitem);
	}*/

}

//-----------------------------------------------------------------------
//删除方法
void dialogue::pbdelete(){
	int thisj = ui.listWidget->currentRow();
	ui.listWidget->takeItem(ui.listWidget->currentRow());
	Arrayitem.removeAt(thisj);

	/*--for (int i = 0; i < ui.listWidget->count(); i++)
	{
		QString Sitem = QString("%1").arg(i);
		ui.listWidget->item(i)->setText(Sitem);
	}*/
}

//-----------------------------------------------------------------------
void dialogue::writeJson()
{
	/*QJsonDocument doc = QJsonDocument::fromVariant(QVariant(Arrayitem));
		QByteArray QBa = doc.toJson(QJsonDocument::Compact);//--Indented
		QString QSa(QBa);
		qDebug() << QSa;*/

	QJsonDocument document;
	document.setArray(Arrayitem);
	QByteArray byte_array = document.toJson(QJsonDocument::Indented);
	QString json_str(byte_array);
	qDebug() << json_str;
	qstribgkeySave = json_str;
	qDebug() << "222222222222" << qstribgkeySave;
}



//-----------------------------------------------------------------------
//void dialogue::readJson()
//{
//	QJsonArray json;
//	json.insert(0, QString("abc德玛西亚万岁！！"));
//	json.insert(1, QString("def你的鲜血染红了我的毒牙！"));
//	json.insert(2, QString("ghi德玛西亚，勇往直前！"));
//
//	QJsonDocument document;
//	document.setArray(json);
//	QByteArray byte_array = document.toJson(QJsonDocument::Compact);
//	QString json_str(byte_array);
//	//------------------------------------------
//	QJsonParseError json_error;
//	QJsonDocument parse_doucment = QJsonDocument::fromJson(byte_array, &json_error);
//	if (json_error.error == QJsonParseError::NoError)
//	{
//		if (parse_doucment.isArray())
//		{
//			QJsonArray array = parse_doucment.array();
//			int size = array.size();
//			for (int i = 0; i < size;i++)
//			{
//				QJsonValue value = array.at(i);
//				if (value.isString())
//				{
//					QString name = value.toString();
//				qDebug() << name;
//				}
//				else if (value.isBool())
//				{
//					bool flag = value.toBool();
//				}
//			}
//		}
//	}
//}

//-----------------------------------------------------------------------
//读取json
void dialogue::readJson()
{
	/*QJsonObject json;
	QJsonObject jsonobj;
	QJsonArray objArray;

	json.insert("Oder", 1);
	json.insert("OwerID", QString("NPC001"));
	json.insert("Message", QString("德玛西亚万岁！！"));
	objArray.append(json);
	json.insert("Oder", 2);
	json.insert("OwerID", QString("NPC002"));
	json.insert("Message", QString("你的鲜血染红了我的毒牙！"));
	objArray.append(json);
	json.insert("Oder", 3);
	json.insert("OwerID", QString("NPC003"));
	json.insert("Message", QString("德玛西亚，勇往直前！"));
	objArray.append(json);

	jsonobj.insert("dialogueobj", objArray);
	QJsonDocument document;
	document.setObject(jsonobj);
	QByteArray byte_array = document.toJson(QJsonDocument::Compact);
	QString json_str(byte_array);
	qDebug() << json_str;
	//---------------------------------------------------------------
		QJsonObject jsonobj;
		QJsonDocument document;
		QJsonArray objArray;

		document.setObject(jsonobj);
		QByteArray byte_array = document.toJson(QJsonDocument::Compact);*/
	//-----------------------------------------------------------------------

	QJsonParseError json_error;
	QJsonDocument parse_doucment = QJsonDocument::fromJson(qstringkeyOpen.toUtf8(), &json_error);
	//qDebug() << qstringkey;
	if (json_error.error == QJsonParseError::NoError)
	{
		if (parse_doucment.isObject())
		{
			QJsonObject obj = parse_doucment.object();
			if (obj.contains("dialogueobj"))
			{
				QJsonValue value = obj.take("dialogueobj");
				if (value.isArray())
				{
					QJsonArray array = value.toArray();
					//add in list					
					QStringList qsl;
					for (int i = 0; i < array.count(); i++){
						QJsonObject obj1 = array[i].toObject();
						if (obj1.contains("Oder"))
						{
							QJsonValue Oder_value = obj1.take("Oder");
							QString Oder = Oder_value.toVariant().toString();
							//qDebug() << Oder;
							qsl.push_back(Oder);

						}
					}
					ui.listWidget->addItems(qsl);

					Arrayitem = array;
/*
					for (int i = 0; i < array.count(); i++)
					{
						QJsonObject obj1 = array[i].toObject();
						if (obj1.contains("Oder"))
						{
							QJsonValue Oder_value = obj1.take("Oder");
							if (Oder_value.isDouble())
							{
								int Oder = Oder_value.toVariant().toInt();
								qDebug() << Oder;
							}
						}
						if (obj1.contains("OwerID"))
						{
							QJsonValue OwerID_value = obj1.take("OwerID");
							if (OwerID_value.isString())
							{
								QString OwerID = OwerID_value.toString();
								qDebug() << OwerID;
							}
						}

						if (obj1.contains("Message"))
						{
							QJsonValue Message_value = obj1.take("Message");
							if (Message_value.isString())
							{
								QString Message = Message_value.toString();
								qDebug() << Message;
							}
						}
					}*/


				}
			}
		}
	}
}
void dialogue::clickrefresh(QListWidgetItem *_item)
{
		/*QString OwerS = "jjjjjj";
		ui.listWidget->currentItem()->setWhatsThis(OwerS);
		ui.listWidget->currentItem()->whatsThis();*/
	    //qDebug() << _item->text();
		int i = _item->text().toInt();
		//int j = ui.listWidget->currentRow();
		QJsonObject obj1 = Arrayitem[i].toObject();
		if (obj1.contains("Oder"))
		{
			QJsonValue Oder_value = obj1.take("Oder");
			if (Oder_value.isDouble())
			{
				int Oder = Oder_value.toVariant().toInt();
				//qDebug() << Oder;				
			}
		}

		if (obj1.contains("OwerID"))
		{
			QJsonValue OwerID_value = obj1.take("OwerID");
			if (OwerID_value.isString())
			{
				QString OwerID = OwerID_value.toString();
				//qDebug() << OwerID;
				ui.lineEdit->setText(OwerID);
			}
		}

		if (obj1.contains("Message"))
		{
			QJsonValue Message_value = obj1.take("Message");
			if (Message_value.isString())
			{
				QString Message = Message_value.toString();
				//qDebug() << Message;
				ui.textEdit->setText(Message);
			}
		}
}
