#ifndef ADDBUTTON2_H
#define ADDBUTTON2_H

#include "ExComp.h"

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>



QT_BEGIN_NAMESPACE
class QGraphicsSceneMouseEvent;
class QMenu;
class QPointF;
class QGraphicsLineItem;
class QFont;
class QGraphicsTextItem;
class QColor;
class QPushButton;
class QHBoxLayout;
class QVBoxLayout;
QT_END_NAMESPACE

class CompLayout;


/*
*����u���b�N�ǉ��{�^�����܂ރE�B�W�F�b�g
*/

class AddButton2 : public QWidget
{
	Q_OBJECT
public:
	AddButton2(QString text,QWidget *parent = 0);
	CompLayout *Cl;
	QPushButton *PB;

signals:
	/*
	*�{�^���N���b�N���ɔ��s����V�O�i��
	*/
	void clicked(CompLayout *cl);

public slots:
	/*
	*�{�^���N���b�N���ɌĂяo���X���b�g
	*/
	void clickedSlot();

};

#endif