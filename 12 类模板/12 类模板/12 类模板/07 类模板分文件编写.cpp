#include<iostream>
using namespace std;

//#include "person.h"
//#include "person.cpp" //�����ʽ1������cppԴ�ļ�

//�ܽ᣺�����Ľ����ʽ�ǵڶ��֣�����ģ���Ա����д��һ�𣬲�����׺����Ϊ.hpp
//�����ʽ2����������ʵ��д��һ���ļ���׺����Ϊ.hpp
#include "person.hpp"
void test011()
{
	Person<string, int> p("Tom", 10);
	p.showPerson();
}

int main1207() {

	test011();

	system("pause");

	return 0;
}