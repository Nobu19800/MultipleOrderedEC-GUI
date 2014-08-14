
#ifndef SETCOMP_H
#define SETCOMP_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QTabWidget>

#include "ExComp.h"
#include "FrameComp.h"
#include "FEComp.h"
#include "MPComp.h"

#include "MultipleOrderedEC.h"



QT_BEGIN_NAMESPACE
class QGraphicsSceneMouseEvent;
class QMenu;
class QPointF;
class QGraphicsLineItem;
class QFont;
class QGraphicsTextItem;
class QColor;
class QTabWidget;
QT_END_NAMESPACE

class FrameComp;

/*
*�S���s�����̃u���b�N�\���E�B�W�F�b�g
*/

class SetComp : public QTabWidget
{
	Q_OBJECT
public:
	
    SetComp(RTC::MultipleOrderedEC *ec, QWidget *parent = 0);
	void UpdateComp();
	void UpdateRTC(std::vector<Rule> &rs);
	RTC::MultipleOrderedEC *m_ec;
	/*
	*�������̊֐�
	*/
	void newFile();
	/*
	*���s�����̍폜�̊֐�
	*/
	void DeleteComp(FrameComp *fc);
	std::vector<std::string> rtclist;
	std::vector<CORBA::Object_ptr> rtclist2;
	
	
signals:
	/*
	*�T�C�Y�ύX���̔��s����V�O�i��
	*/
	void UpdateSizeSignal(int w, int h);


public slots:
	/*
	*�T�C�Y�ύX���ɌĂ΂��X���b�g
	*/
	void UpdateSizeSlot();
	/*
	*�t�@�C���ǂݍ��݃X���b�g
	*/
	bool save(const char *Name);
	/*
	*�t�@�C���ۑ��̃X���b�g
	*/
	bool open(const char *Name);
	/*
	*���s�����ǉ��̃X���b�g
	*/
	void CreateComp();
	/*
	*���s���Ă���RTC�̃u���b�N�̐F��ς���X���b�g
	*/
	void UpdateEC();
	/*
	*RTC���ǉ��A�폜���ꂽ�Ƃ��Ƀu���b�N�}�ɔ��f����X���b�g
	*/
	void UpdateComps();
	/*
	*RTC���ǉ��A�폜���ꂽ�Ƃ��Ɏ��s�����ɔ��f����X���b�g
	*/
	void UpdateComp2();
	
	


protected:
    
private:
	std::vector<FrameComp *> FCS;
	QTextCodec* tc;
	QTimer *time;

	

	




};


#endif
