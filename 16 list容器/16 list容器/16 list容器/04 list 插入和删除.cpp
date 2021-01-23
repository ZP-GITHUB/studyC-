#include<iostream>
using namespace std;
#include <list>
// ����01�ļ���ķ���
extern void printList(const list<int>& L);

//�����ɾ��
void test04()
{
	list<int> L;
	//β��
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	//ͷ��
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);

	printList(L);

	//βɾ
	L.pop_back();
	printList(L);

	//ͷɾ
	L.pop_front();
	printList(L);

	//����
	list<int>::iterator it = L.begin();
	L.insert(++it, 1000);
	printList(L);

	//ɾ��
	it = L.begin();
	L.erase(++it);
	printList(L);

	//�Ƴ�
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	printList(L);
	L.remove(10000);
	printList(L);

	//���
	L.clear();
	printList(L);
}

int main1604() {

	test04();

	system("pause");

	return 0;
}