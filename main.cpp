#include <iostream>
#include <string>
#include <stdlib.h>

#include "mainwindow.h"
#include <QApplication>


int main (int argc, char** argv)
{



	Q_INIT_RESOURCE(MPContextGUI);
    QApplication app(argc, argv);
    
	MainWindow *mainWindow = new MainWindow();

	//QScrollArea *area = new QScrollArea();
	//area->setWidget(mainWindow);
	
	

	/*QHBoxLayout *CP = new QHBoxLayout();

	CP->addWidget(mainWindow);
	area->setLayout(CP);*/


	//area->show();

    mainWindow->show();






    return app.exec();

}
