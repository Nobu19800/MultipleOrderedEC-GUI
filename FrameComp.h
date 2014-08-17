
#ifndef FRAMECOMP_H
#define FRAMECOMP_H

#define SEL 0
#define PAL 1

#include "ExComp.h"

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>

#include <rtm/CorbaNaming.h>
#include <rtm/RTObject.h>
#include <rtm/CorbaConsumer.h>
#include <assert.h>
#include <string>
#include <vector>
//#include <QBasicTimer>

#include "SetComp.h"
#include "AddButton.h"
#include "AddButton2.h"
#include "AddButton3.h"
#include "MPComp.h"

#include "MultipleOrderedEC.h"

#include "Config.h"


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
class QTimeLine;
QT_END_NAMESPACE


class SetComp;


/*
*���s�����̃u���b�N��\������E�B�W�F�b�g
*/


class FrameComp : public QWidget
{
	Q_OBJECT
public:
	
    FrameComp(RTC::MultipleOrderedEC *ec, SetComp *sc, QWidget *parent = 0);
	/*
	*����u���b�N�̏������̊֐�
	*/
	void AddComp(FEComp *FC);
	/*
	*����u���b�N�̒ǉ��̊֐�
	*/
	void InsertComp(int num, FEComp *FC);
	/*
	*�T�C�Y�ύX�̊֐�
	*/
	void UpdateSize();
	/*
	*�o�C�i���t�@�C���ۑ��̊֐�
	*/
	bool save(std::ofstream &ofs2, std::vector<main_Rule> &mR);
	
	bool open(std::vector<std::string> &Str, int &an, std::vector<main_Rule> &mR);
	
	bool openb(std::ifstream &ifs, std::vector<main_Rule> &mR);
	void UpdateRTC(std::vector<Rule> &rs);
	/*
	*�������̊֐�
	*/
	void newFile();
	/*
    *RTC���ǉ��A�폜���ꂽ�Ƃ��Ɏ��s�����ɔ��f����֐�
    */
	void SetFrame(main_Rule &mR);
	RTC::MultipleOrderedEC *m_ec;
	Configs *cf;
	int X;
	int Y;
	std::vector<CompLayout *> Comps;
	/*
    *RTC���ǉ��A�폜���ꂽ�Ƃ��Ƀu���b�N�ɔ��f����֐�
    */
	void UpdateComp2(std::vector<std::string> rtclist, std::vector<CORBA::Object_ptr> rtclist2);
	

signals:
	/*
	*�T�C�Y�ύX���ɔ��s����V�O�i��
	*/
	void UpdateSizeSignal();

	






public slots:
   /*
   *����u���b�N�Ƀu���b�N�ǉ�����X���b�g
   */
   void AddCompSlot(ExComp *ec, FEComp *fc);
   /*
   *����u���b�N��ǉ�����X���b�g
   */
   void AddCompSlot1(FEComp *fc);
   /*
   *����u���b�N��ǉ�����X���b�g
   */
   void AddCompSlot2(CompLayout *c);
   void AddCompSlot3(CompLayout *c);
   void AddComps2();
   /*
   *����u���b�N���w��ʒu�ɒǉ�����X���b�g
   */
   void InsertComps2(int num);
   /*
   *����u���b�N��擪�ɒǉ�����X���b�g
   */
   void AddCompsT();
   /*
   *����u���b�N�����̃E�B�W�F�b�g�̎��ɒǉ�����X���b�g
   */
   void AddCompsU(CompLayout *c);
   /*
   *����u���b�N���폜����X���b�g
   */
   void DeleteComp(QWidget *Vl, CompLayout *c);
   /*
   *�u���b�N�̐F��ς���X���b�g
   */
   void UpdateEC(std::vector<Rule> &rs);
   /*
   *���̃u���b�N���폜����X���b�g
   */
   void DeleteFrame();
   

   



protected:
	
    
private:
	std::vector<FEComp *> CLS;
	QTextCodec* tc;

	QVBoxLayout *mainLayout;
	
	
	

	
	

	

	

	SetComp *Sc;

	




};


#endif
