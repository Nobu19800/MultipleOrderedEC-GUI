#ifndef MPLUA_H
#define MPLUA_H

#include "MultipleOrderedEC.h"
#include "MPComp.h"

/*
*Lua�����s�����̓ǂݍ��ފ֐�
*/
bool LoadMainRule_Lua(std::vector<main_Rule> &rs, std::string Name);

/*
*�S���s�����̃N���X
*/
class MainLules
{
public:
	MainLules(){};
	std::vector<main_Rule> rs;
	void addMainRule();
	main_Rule* getMainRule(int num);
};



#endif
