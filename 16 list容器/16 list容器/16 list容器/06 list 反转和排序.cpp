#include<iostream>
using namespace std;
#include <list>
// ����01�ļ���ķ���
extern void printList(const list<int>& L);

bool myCompare(int val1, int val2)
{
	return val1 > val2;
}

//��ת������
void test06()
{
	list<int> L;
	L.push_back(90);
	L.push_back(30);
	L.push_back(20);
	L.push_back(70);
	printList(L);

	//��ת������Ԫ��
	L.reverse();
	printList(L);

	//����
	L.sort(); //Ĭ�ϵ�������� ��С����
	printList(L);

	L.sort(myCompare); //ָ�����򣬴Ӵ�С
	printList(L);
}

int main1606() {

	test06();

	system("pause");

	return 0;
}