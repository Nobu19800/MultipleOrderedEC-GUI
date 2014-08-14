#ifndef RTC_MUTIPLEORDEREDEC_H
#define RTC_MUTIPLEORDEREDEC_H

#include <rtm/RTC.h>



#include <rtm/Manager.h>
#include <rtm/PeriodicExecutionContext.h>

#include "MPComp.h"


#ifdef WIN32
#pragma warning( disable : 4290 )
#endif

class MPTask;
class GUITask;

namespace RTC
{
  /*
  *���s�����̐ݒ肪�ł�����s�R���e�L�X�g�N���X
  */
  class MultipleOrderedEC
    : public virtual PeriodicExecutionContext
  {

  public:

    MultipleOrderedEC();

    virtual ~MultipleOrderedEC(void);

	/*
	*�X���b�h���s�֐�
	*/
    virtual int svc(void);
	/*
	*�R���|�[�l���g�̃��W�b�N���s�̊֐�
	*/
	void workerComp(sub_Rule *c);

	
	/*
	*�t�@�C��������s�����̓ǂݍ��݂̊֐�
	*/
	void LoadRule();

	
	/*
	*�R���|�[�l���g�̖��O�擾�̊֐�
	*/
	std::string getCompName(int num);
	/*
	*�R���|�[�l���g�̐��擾�̊֐�
	*/
	int getCompNum();

	/*
	*GUI������s�����̓ǂݍ��݂̊֐�
	*/
	void LoadRuleGUI(std::vector<main_Rule> &RS_d);

	/*
	*�ݒ肵�����s������RTC���i�[����֐�
	*/
	void LoadRules();

	std::vector<main_Rule> rs;
	GUITask *g_task;

	int r_num;

	coil::Mutex mutex_2;

	std::string FileName;
	std::string SetGui;

	//std::vector<Comp> s_comp;
	/*
	*rtc.conf�̐ݒ���擾����֐�
	*/
	template <class T>
    void getProperty(coil::Properties& prop, const char* key, T& value)
    {
    if (prop.findNode(key) != 0)
      {
        T tmp;
        if (coil::stringTo(tmp, prop[key].c_str()))
          {
            value = tmp;
          }
      }
    }

	
	
	



  };
};

#ifdef WIN32
#pragma warning( default : 4290 )
#endif


extern "C"
{
  DLL_EXPORT void MultipleOrderedECInit(RTC::Manager* manager);
};

#endif
