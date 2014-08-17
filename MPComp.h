#ifndef MPCOMP_H
#define MPCOMP_H
#include <rtm/RTC.h>
#include <rtm/Manager.h>
#include <rtm/PeriodicExecutionContext.h>

#include <vector>


/*
*���s�����̃N���X
*/
class add_Rule
{
public:
	add_Rule(){};
	int state;
	std::string name;
	RTC::LightweightRTObject_var r;
};

/*
*����u���b�N�̃N���X
*/

class sub_Rule
{
public:
	sub_Rule(){};
	std::string v;
	RTC::LightweightRTObject_var r;
	int s;
};

/*
*����u���b�N�̃N���X
*/

class Rule
{
private:
    
public:
	std::vector<std::vector<sub_Rule> > SR;
	Rule(){};
	~Rule(){};
	void addP();
	void addsubRule(int num, std::string v);
    
};

/*
*���s�����̃N���X
*/
class main_Rule
{
public:
	main_Rule(){};
	std::vector<Rule> rs;
	std::vector<add_Rule> ar;

	/*
	*����u���b�N�̒ǉ��̊֐�
	*/
	void addRule();
	/*
	*���s�����̒ǉ��̊֐�
	*/
	void addaddRule(std::string n, int s);

	Rule *getRule(int num);
	add_Rule *getaddRule(int num);
	
};

/*
*�t�@�C�������s�����̓ǂݍ��ފ֐�
*/
bool LoadMainRule(std::vector<main_Rule> &rs, std::string Name);
/*
*�e�L�X�g�t�@�C������̎��s�����ǂݍ��ފ֐�
*/
void LoadAddRule(std::vector<std::string> &cs, int &nm, std::vector<add_Rule> &ar);
void LoadSubRule(std::vector<std::string> &cs, int &nm, std::vector<sub_Rule> &sr);
void LoadHRule(std::vector<std::string> &cs, int &nm, std::vector<Rule> &rs);
void LoadSRule(std::vector<std::string> &cs, int &nm, Rule &r);
bool AddCount(std::vector<std::string> &cs, int &nm);

/*
*�����̒u�������̊֐�
*/
std::string Replace( std::string String1, std::string String2, std::string String3 );

#endif