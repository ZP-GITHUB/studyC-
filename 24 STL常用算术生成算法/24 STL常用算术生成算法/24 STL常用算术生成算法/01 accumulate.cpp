#include<iostream>
using namespace std;
#include <numeric>
#include <vector>
// ��������Ԫ���ۼ��ܺ�
void test01()
{
	vector<int> v;
	for (int i = 0; i <= 100; i++) {
		v.push_back(i);
	}

	int total = accumulate(v.begin(), v.end(), 0); //0����ʼֵ

	cout << "total = " << total << endl;
}

int main2401() {

	test01();

	system("pause");

	return 0;
}