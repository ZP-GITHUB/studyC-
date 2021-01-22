#include<iostream>
using namespace std;
#include <deque>
// ����01�ļ���ķ���
extern void printDeque(const deque<int>& d);

//���˲���
void test04()
{
	deque<int> d;
	//β��
	d.push_back(10);
	d.push_back(20);
	//ͷ��
	d.push_front(100);
	d.push_front(200);

	printDeque(d);

	//βɾ
	d.pop_back();
	//ͷɾ
	d.pop_front();
	printDeque(d);
}

//����
void test05()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	d.insert(d.begin(), 1000);
	printDeque(d);

	d.insert(d.begin(), 2, 10000);
	printDeque(d);

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d.insert(d.begin(), d2.begin(), d2.end());
	printDeque(d);

}

//ɾ��
void test06()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	d.erase(d.begin());
	printDeque(d);

	d.erase(d.begin(), d.end());  //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
	d.clear();
	printDeque(d);
}

int main1504() {

	//test04();

	//test05();

	test06();

	system("pause");

	return 0;
}