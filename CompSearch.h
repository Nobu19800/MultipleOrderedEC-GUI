#ifndef COMPSEARCH_H
#define COMPSEARCH_H

#include <stdio.h>


#include <iostream>
#include <rtm/CorbaNaming.h>
#include <rtm/RTObject.h>
#include <rtm/CorbaConsumer.h>
#include <assert.h>
#include <string>
#include <vector>

/*
*�o�C�i���t�@�C���ɕ����ۑ�����֐�
*/
void WriteString(std::string a, std::ofstream &ofs);
/*
*�o�C�i���t�@�C����蕶���ǂݍ��݂���֐�
*/
std::string ReadString(std::ifstream &ifs);

/*
*
*/
std::string GetExtension(std::string &path);
/*
*�p�X���t�@�C�����������֐�
*/
std::string ExtractPathWithoutExt(std::string &fn);
/*
*�p�X���t�@�C�����擾����֐�
*/
std::string ExtractFileName(std::string &path);

#endif