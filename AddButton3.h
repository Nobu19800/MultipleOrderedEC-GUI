#ifndef ADDBUTTON3_H
#define ADDBUTTON3_H

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

class AddButton3 : public QWidget
{
	Q_OBJECT
public:
	AddButton3(QString text,QWidget *parent = 0);
	QWidget *Vl;
	QPushButton *PB;
	CompLayout *c;

signals:
	/*
	*�{�^���N���b�N���ɔ��s����V�O�i��
	*/
	void clicked(QWidget *Vl, CompLayout *cl);

public slots:
	/*
	*�{�^���N���b�N���ɌĂяo���X���b�g
	*/
	void clickedSlot();

};

#endif