#include<iostream>
using namespace std;
#include <list>
// ����01�ļ���ķ���
extern void printList(const list<int>& L);

//��С����
void test03()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	if (L1.empty())
	{
		cout << "L1Ϊ��" << endl;
	}
	else
	{
		cout << "L1��Ϊ��" << endl;
		cout << "L1�Ĵ�СΪ�� " << L1.size() << endl;
	}

	//����ָ����С
	L1.resize(10);
	printList(L1);

	L1.resize(2);
	printList(L1);
}

int main1603() {

	test03();

	system("pause");

	return 0;
}