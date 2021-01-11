#include <fstream>
#include<iostream>
using namespace std;

void test01()
{
	ofstream ofs;
	// 若无则会自动创建
	ofs.open("test.txt", ios::out);

	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;

	ofs.close();
}

int main1001() {

	test01();

	system("pause");

	return 0;
}