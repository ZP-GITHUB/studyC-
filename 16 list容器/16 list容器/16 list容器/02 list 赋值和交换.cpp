#include<iostream>
using namespace std;
#include <list>
// ����01�ļ���ķ���
extern void printList(const list<int>& L);

//��ֵ�ͽ���
void test02()
{

	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int>L2;
	L2.assign(10, 100);

	cout << "����ǰ�� " << endl;
	printList(L1);
	printList(L2);

	cout << endl;

	L1.swap(L2);

	cout << "������ " << endl;
	printList(L1);
	printList(L2);

}

int main1602() {

	test02();

	system("pause");

	return 0;
}