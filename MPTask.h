#ifndef MPTASK_H
#define MPTASK_H

#include <rtm/RTC.h>



#include <rtm/Manager.h>
#include <rtm/PeriodicExecutionContext.h>


#include "MultipleOrderedEC.h"
#include "MPComp.h"
#include "mainwindow.h"
#include <QApplication>


/*
*����X���b�h�ł̎��s�����N���X
*/
class MPComp
{
public:
	MPComp(){};
	sub_Rule *comp;
	int I;
	int J;
	int K;
};

/*
*����u���b�N�����s����X���b�h�̃N���X
*/
class MPTask : public virtual coil::Task
{
public:
		MPTask(RTC::MultipleOrderedEC *c);
		/*
		*�X���b�h���s�֐�
		*/
		virtual int svc();
		/*
		*�R���|�[�l���g��ǉ�����֐�
		*/
		void addComp(sub_Rule *c, int I, int J, int K);
private:
	std::vector<MPComp> m_comp;
	RTC::MultipleOrderedEC *m_ec;

};

/*
*GUI�����s����X���b�h�̃N���X
*/

class GUITask : public virtual coil::Task
{
public:
		GUITask(RTC::MultipleOrderedEC *ec);
		/*
		*�X���b�h���s�֐�
		*/
		virtual int svc();
		void updateRTC();
		coil::Mutex mu;

		static bool app_flag;
private:
	RTC::MultipleOrderedEC *m_ec;
	MainWindow *mw;
	QApplication *app;

	
	
};



#endif
