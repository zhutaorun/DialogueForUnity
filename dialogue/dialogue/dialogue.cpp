#include "dialogue.h"
#include <QDebug>
#include <qfiledialog.h>

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
}
//-----------------------------------------------------------------------
void dialogue::bindEvent()
{
	connect(ui.action_4, &QAction::triggered, [&](bool _flag){
		this->open();
	});
	connect(ui.pushButton_5, &QPushButton::clicked, [&](bool _flag){
		this->openfile(file);
	});
}
//-----------------------------------------------------------------------
void dialogue::open()
{
	 file = QFileDialog::getOpenFileName(
		this,
		"Images (*.png *.xpm *.jpg)",
		"F:/home/test.txt");
	qDebug() << file;
}

void dialogue::openfile(const QString &_flie)
{
	//ui->tb_key->clear();
	QString key;
	QFile file1(_flie);
	if (file1.open(QIODevice::ReadOnly))
	{
		QTextStream in(&file1);
		while (!in.atEnd())
		{
			in >> key;
			//	ui->tb_key->append(key);
			qDebug() << key;
		}
		
		file1.close();
	}
}

//-----------------------------------------------------------------------


//void dialogue::setExistingDirectory()
//{  //选择一个文件夹;
//	QPushButton*  native = new QPushButton();
//	QString* directoryLabel = new QString();
//	QFileDialog::Options options = QFileDialog::DontResolveSymlinks | QFileDialog::ShowDirsOnly;
//	if (!native->isChecked())
//		options |= QFileDialog::DontUseNativeDialog;
//	QString directory = QFileDialog::getExistingDirectory(this,
//		tr("QFileDialog::getExistingDirectory()"),
//		directoryLabel->text(),
//		options);
//	if (!directory.isEmpty())
//		directoryLabel->setText(directory);
//}
////---------------------------------------------------
//	void dialogue::setOpenFileName()
//	{  //打开一个文件;
//		QFileDialog::Options options;
//		if (!native->isChecked())
//			options |= QFileDialog::DontUseNativeDialog;
//		QString selectedFilter;
//		QString fileName = QFileDialog::getOpenFileName(this,
//			tr("QFileDialog::getOpenFileName()"),
//			openFileNameLabel->text(),
//			tr("All Files (*);;Text Files (*.txt)"),
//			&selectedFilter,
//			options);
//		if (!fileName.isEmpty())
//			openFileNameLabel->setText(fileName);
//-----------------------------------------------------------------------