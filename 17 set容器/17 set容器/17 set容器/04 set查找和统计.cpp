#include<iostream>
using namespace std;
#include <set>
// ����01�ļ���ķ���
extern void printSet(set<int>& s);

//���Һ�ͳ��
void test05()
{
	set<int> s1;
	//����
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//����
	set<int>::iterator pos = s1.find(30);

	if (pos != s1.end())
	{
		cout << "�ҵ���Ԫ�� �� " << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��
	int num = s1.count(30);
	cout << "num = " << num << endl;
}

int main1704() {

	test05();

	system("pause");

	return 0;
}