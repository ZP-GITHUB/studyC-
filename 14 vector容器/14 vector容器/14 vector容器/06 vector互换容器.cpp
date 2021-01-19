#include<iostream>
using namespace std;
#include <vector>
// ����01�ļ���ķ���
extern void printVector(vector<int>& v);

void test06()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);

	//��������
	cout << "������" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}

void test07()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
	}

	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;

	v.resize(3);

	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;

	//�����ڴ�
	vector<int>(v).swap(v); //��������

	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;
}

int main1406() {

	test06();

	test07();

	system("pause");

	return 0;
}