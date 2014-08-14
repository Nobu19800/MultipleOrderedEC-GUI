#include <QtGui>
#include "GetComp.h"

using namespace RTC;
using namespace std;

GetComp::GetComp(QWidget *parent)
    : QWidget(parent)
{

	tc = QTextCodec::codecForLocale();
	//tc->toUnicode
	CB = new QComboBox();
		
	

	

	

	connect(CB, SIGNAL(currentIndexChanged(int)),
            this, SLOT(SelectComp()));

	

	BT = new QPushButton(tc->toUnicode("XV"));

	connect(BT, SIGNAL(clicked()),
            this, SLOT(UpdateComp()));

	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addWidget(CB);
	mainLayout->addWidget(BT);
	setLayout(mainLayout);
}


void GetComp::UpdateComp()
{
	CB->clear();
	//CB->addItem(tr("MPContextGUI"));
	int _argc(1);
    char* _argv[]={"initialize"};
	CORBA::ORB_var corbaORB = CORBA::ORB_init(_argc, (char**)_argv);
	
	CorbaNaming corbaNaming(corbaORB, "localhost:2809");

    rtc_get_rtclist(corbaNaming,rtclist,rtclist2);

	for(int i=0;i < rtclist.size();i++)
	{
		CB->addItem(tr(rtclist[i].c_str()));
	}

	corbaORB->destroy();

}

void GetComp::SelectComp()
{
	

}