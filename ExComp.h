
#ifndef EXCOMP_H
#define EXCOMP_H

#include <stdio.h>


#include <iostream>

#include <rtm/CorbaNaming.h>
#include <rtm/RTObject.h>
#include <rtm/CorbaConsumer.h>
#include <assert.h>
#include <string>
#include <vector>

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>

#include "AddButton2.h"

#include "FEComp.h"


QT_BEGIN_NAMESPACE
class QGraphicsSceneMouseEvent;
class QMenu;
class QPointF;
class QGraphicsLineItem;
class QFont;
class QGraphicsTextItem;
class QColor;
class QComboBox;
class QPushButton;
class QVBoxLayout;
class QHBoxLayout;
class QGroupBox;
class QLabel;
QT_END_NAMESPACE


class FEComp;

class AddButton2;

/*
*RTC�̃u���b�N�̃E�B�W�F�b�g
*/

class ExComp : public QWidget
{
	Q_OBJECT
public:
	
    ExComp(QWidget *parent = 0);
	/*
    *RTC���ǉ��A�폜���ꂽ�Ƃ��Ɏ��s�����ɔ��f����֐�
    */
	void UpdateComp(std::vector<std::string> &rtclist, std::vector<CORBA::Object_ptr> &rtclist2);
	FEComp *Fc;
	QComboBox *CB;
	QWidget *subWidget;

signals:
	/*
	*RTC��ǉ��{�^�����������Ƃ��ɔ��s����V�O�i��
	*/
	void AddCompSignal(ExComp *ec, FEComp *fc);


public slots:
	/*
	*�u���b�N���폜�����Ƃ��ɌĂяo�����X���b�g
	*/
	void DeleteComp();
	/*
	*RTC��ǉ��{�^�����������Ƃ��ɌĂяo�����X���b�g
	*/
	void AddCompSlot();


protected:
    
private:
	QPushButton *BT;
	QPushButton *DT;
	QTextCodec* tc;
	
	

	
	

	



};



/*
*RTC�̃u���b�N�̃��C�A�E�g
*/

class CompLayout
{
public:
	CompLayout();
	std::vector<QVBoxLayout *> VL;
	QHBoxLayout * subLayout;
	AddButton2 *AB;
	QVBoxLayout *mainLayout;
	QWidget *mainWidget;
	QWidget *subWidget;
	QLabel *Lb;



};


#endif
