#include<iostream>
using namespace std;
#include <vector>
#include <functional>
#include <algorithm>
//-template<class T> bool logical_and<T>              //�߼���
//-template<class T> bool logical_or<T>                //�߼���
//-template<class T> bool logical_not<T>              //�߼���
void test09()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//�߼���  ��v�������˵�v2�У���ִ���߼�������
	vector<bool> v2;
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main() {

	test09();

	system("pause");

	return 0;
}