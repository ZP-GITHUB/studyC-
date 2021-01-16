#include<iostream>
using namespace std;

//#include "person.h"
//#include "person.cpp" //解决方式1，包含cpp源文件

//总结：主流的解决方式是第二种，将类模板成员函数写到一起，并将后缀名改为.hpp
//解决方式2，将声明和实现写到一起，文件后缀名改为.hpp
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