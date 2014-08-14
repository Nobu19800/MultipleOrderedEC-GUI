#ifndef ADDBUTTON_H
#define ADDBUTTON_H

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

/*
*�u���b�N�ǉ��{�^�����܂ރE�B�W�F�b�g
*/

class AddButton : public QWidget
{
	Q_OBJECT
public:
	AddButton(QString text,QWidget *parent = 0);
	FEComp *Fc;
	QPushButton *PB;

signals:
	/*
	*�{�^���N���b�N���ɔ��s����V�O�i��
	*/
	void clicked(FEComp *fc);

public slots:
	/*
	*�{�^���N���b�N���ɌĂяo���X���b�g
	*/
	void clickedSlot();

};

#endif