#include<iostream>
using namespace std;
#include <deque>
// ����01�ļ���ķ���
extern void printDeque(const deque<int>& d);

//��С����
void test03()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	//�ж������Ƿ�Ϊ��
	if (d1.empty()) {
		cout << "d1Ϊ��!" << endl;
	}
	else {
		cout << "d1��Ϊ��!" << endl;
		//ͳ�ƴ�С
		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
	}

	//����ָ����С
	d1.resize(15, 1);
	printDeque(d1);

	d1.resize(5);
	printDeque(d1);
}

int main1503() {

	test03();

	system("pause");

	return 0;
}