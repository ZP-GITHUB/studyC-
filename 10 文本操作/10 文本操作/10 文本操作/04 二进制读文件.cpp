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

void test04()
{
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
	}

	Person p;
	ifs.read((char*)&p, sizeof(p));

	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
}

int main() {

	test04();

	system("pause");

	return 0;
}