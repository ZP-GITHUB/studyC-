#include <fstream>
#include <string>
#include<iostream>
using namespace std;

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

//�������ļ�  д�ļ�
void test03()
{
	//1������ͷ�ļ�

	//2���������������
	ofstream ofs("person.txt", ios::out | ios::binary);

	//3�����ļ�
	//ofs.open("person.txt", ios::out | ios::binary);

	Person p = { "����"  , 18 };

	//4��д�ļ�
	ofs.write((const char*)&p, sizeof(p));

	//5���ر��ļ�
	ofs.close();
}

int main1003() {

	test03();

	system("pause");

	return 0;
}