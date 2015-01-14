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
}
//-----------------------------------------------------------------------
//绑定按钮
void dialogue::bindEvent()
{
	connect(ui.action_new, &QAction::triggered, [&](bool _flag){
	});
	connect(ui.action_open, &QAction::triggered, [&](bool _flag){
		this->open();
		this->openfile(file);
		this->readJson();
	});
	connect(ui.action_save, &QAction::triggered, [&](bool _falg){
	});
	connect(ui.action_saveas, &QAction::triggered, [&](bool _flag){
	});
	connect(ui.action_json, &QAction::triggered, [&](bool _flag){
		this->readJson();
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
	});
	connect(ui.pushButton_saveitem, &QPushButton::clicked, [&](bool _flag){
				//void QListWidgetItem::setData();
	});

	connect(ui.listWidget, &QListWidget::itemClicked, [&](QListWidgetItem *_flag){
		this->clickrefresh(_flag);
		
	});
}
//-----------------------------------------------------------------------

//打开资源管理器
void dialogue::open()
{
	file = QFileDialog::getOpenFileName(
		this,
		"Images (*.png *.xpm *.jpg)",
		"F:/home/test.txt");
	qDebug() << file;
}
//-----------------------------------------------------------------------
//打开json文件
void dialogue::openfile(const QString &_flie)
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
			qstringkey = key;
		}

		file1.close();
	}
}

//-----------------------------------------------------------------------
//插入方法
void dialogue::pbinsert(){
	int thisi = ui.listWidget->currentRow();
	qDebug() << thisi;
	QListWidgetItem *_item = new QListWidgetItem("new");
	ui.listWidget->insertItem(ui.listWidget->currentRow()+1, _item);

	QJsonObject json;
	//QJsonArray Arrayitem;
	json.insert("Oder", thisi);
	json.insert("OwerID", QString("NPC"));
	json.insert("Message", QString("Message"));
	Arrayitem.append(json);
	//QJsonValue nullQJV = NULL;
	Arrayitem.insert(thisi+1,json);

	//ui.listWidget->setSortingEnabled(true);
	for (int i = 0; i < ui.listWidget->count(); i++)
	{
		QString Sitem = QString("%1").arg(i);
		ui.listWidget->item(i)->setText(Sitem);
	}

}

//-----------------------------------------------------------------------
//删除方法
void dialogue::pbdelete(){
	int thisj = ui.listWidget->currentRow();
	ui.listWidget->takeItem(ui.listWidget->currentRow());
	Arrayitem.removeAt(thisj);
	for (int i = 0; i < ui.listWidget->count(); i++)
	{
		QString Sitem = QString("%1").arg(i);
		ui.listWidget->item(i)->setText(Sitem);
	}
}

//-----------------------------------------------------------------------
void dialogue::writeJson()
{
	/*QJsonDocument doc = QJsonDocument::fromVariant(QVariant(obj));
		QByteArray a = doc.toJson();
		qDebug() << a;*/

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
	QJsonDocument parse_doucment = QJsonDocument::fromJson(qstringkey.toUtf8(), &json_error);
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
	    //qDebug() << _item->text();
		int i = _item->text().toInt();
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
