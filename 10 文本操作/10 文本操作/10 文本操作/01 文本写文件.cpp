#include <fstream>
#include<iostream>
using namespace std;

void test01()
{
	ofstream ofs;
	// ��������Զ�����
	ofs.open("test.txt", ios::out);

	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;

	ofs.close();
}

int main1001() {

	test01();

	system("pause");

	return 0;
}