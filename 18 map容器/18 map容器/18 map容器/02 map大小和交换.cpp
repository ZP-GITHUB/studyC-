#include<iostream>
using namespace std;
#include <map>
// ����01�ļ���ķ���
extern void printMap(map<int, int>& m);

void test02()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	if (m.empty())
	{
		cout << "mΪ��" << endl;
	}
	else
	{
		cout << "m��Ϊ��" << endl;
		cout << "m�Ĵ�СΪ�� " << m.size() << endl;
	}
}


//����
void test03()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	map<int, int>m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));

	cout << "����ǰ" << endl;
	printMap(m);
	printMap(m2);

	cout << "������" << endl;
	m.swap(m2);
	printMap(m);
	printMap(m2);
}

int main1802() {

	test02();

	test03();

	system("pause");

	return 0;
}