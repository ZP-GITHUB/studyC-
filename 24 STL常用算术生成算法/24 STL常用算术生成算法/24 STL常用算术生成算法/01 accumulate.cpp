#include<iostream>
using namespace std;
#include <numeric>
#include <vector>
// 计算容器元素累计总和
void test01()
{
	vector<int> v;
	for (int i = 0; i <= 100; i++) {
		v.push_back(i);
	}

	int total = accumulate(v.begin(), v.end(), 0); //0是起始值

	cout << "total = " << total << endl;
}

int main2401() {

	test01();

	system("pause");

	return 0;
}