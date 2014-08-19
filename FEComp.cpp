#include "FEComp.h"
#include <QtGui>



using namespace RTC;
using namespace std;


FEComp::FEComp(QWidget *parent)
    : QWidget(parent)
{
	this->CL = new QVBoxLayout();
	this->setLayout(this->CL);
}

