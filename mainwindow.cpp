
#include <QLabel>
#include <QtWidgets>

#include "mainwindow.h"







MainWindow::MainWindow(RTC::MultipleOrderedEC *ec)
{
	
	
	tc = QTextCodec::codecForLocale();

	
	
    QVBoxLayout *layout = new QVBoxLayout;

	 
	

	this->m_ec = ec;
	SC = new SetComp(ec);
	connect(SC, SIGNAL(UpdateSizeSignal(int , int )),
            this, SLOT(m_resize(int , int )));

	layout->addWidget(SC);

	layout->addStretch();
	UB = new QPushButton(tc->toUnicode("更新"));
	layout->addWidget(UB);

	connect(UB, SIGNAL(clicked()),
            this, SLOT(UpdateComp()));

	QPushButton *DB = new QPushButton(tc->toUnicode("追加"));
	layout->addWidget(DB);

	connect(DB, SIGNAL(clicked()),
            SC, SLOT(CreateComp()));

	

    widget = new QWidget;
    widget->setLayout(layout);

	
	QScrollArea *area = new QScrollArea();
	area->setWidget(widget);
	
	

    setCentralWidget(area);
    setWindowTitle(tr("MultipleOrderedECGUI"));
    setUnifiedTitleAndToolBarOnMac(true);

	
	SC->UpdateSizeSlot();


	createAction();
	createMenus();
}

void MainWindow::m_resize(int w, int h)
{
	widget->resize(w, h);
}

void MainWindow::UpdateComp()
{
	SC->UpdateComps();
	SC->UpdateComp2();
}

void MainWindow::createAction()
{
	newAct = new QAction(tr("&New..."),this);
	newAct->setShortcuts(QKeySequence::New);
    connect(newAct, SIGNAL(triggered()), this, SLOT(newFile()));


	openAct = new QAction(tr("&Open..."),this);
    openAct->setShortcuts(QKeySequence::Open);
    connect(openAct, SIGNAL(triggered()), this, SLOT(open()));


    saveAct = new QAction(tr("&Save"),this);
    saveAct->setShortcuts(QKeySequence::Save);
    connect(saveAct, SIGNAL(triggered()), this, SLOT(save()));
}

void MainWindow::createMenus()
{
	fileMenu = menuBar()->addMenu(tr("&File"));
	fileMenu->addAction(newAct);
    fileMenu->addAction(openAct);
    fileMenu->addAction(saveAct);
	

}


void MainWindow::open()
{
	QString fileName = QFileDialog::getOpenFileName(this,
							tc->toUnicode("開く"), "",
							tr("Config File (*.conf);;Lua File (*.lua);;All Files (*)"));
	

	QByteArray ba = fileName.toLocal8Bit();
	SC->open(ba);

}

bool MainWindow::save()
{
	QString fileName = QFileDialog::getSaveFileName(this,
							tc->toUnicode("保存"), "",
							tr("Config File (*.conf);;All Files (*)"));
	if (fileName.isEmpty())
        return false;

	QByteArray ba = fileName.toLocal8Bit();
	


    return SC->save(ba);
}


void MainWindow::newFile()
{
	SC->newFile();


    
}


void MainWindow::UpdateRTC(std::vector<Rule> &rs)
{
	SC->UpdateRTC(rs);
	
}