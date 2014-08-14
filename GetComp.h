
#ifndef GETCOMP_H
#define GETCOMP_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>

#include "CompSearch.h"

QT_BEGIN_NAMESPACE
class QGraphicsSceneMouseEvent;
class QMenu;
class QPointF;
class QComboBox;
class QPushButton;
class QGraphicsLineItem;
class QFont;
class QGraphicsTextItem;
class QColor;
QT_END_NAMESPACE



/*エディタ*/

class GetComp : public QWidget
{
	Q_OBJECT
public:
	
    GetComp(QWidget *parent = 0);

	




private slots:
   void UpdateComp();
   void SelectComp();


protected:
    
private:
	QComboBox *CB;
	QPushButton *BT;
	QTextCodec* tc;

	std::vector<std::string> rtclist;
	std::vector<CORBA::Object_ptr> rtclist2;





};


#endif
