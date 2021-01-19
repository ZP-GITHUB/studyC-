#include<iostream>
using namespace std;
#include <vector>
// 引用01文件里的方法
extern void printVector(vector<int>& v);

//赋值操作
void test02()
{
	vector<int> v1; //无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2;
	v2 = v1;
	printVector(v2);

	vector<int>v3;
	v3.assign(v1.begin(), v1.end());  //将[beg, end)区间中的数据拷贝赋值给本身。
	printVector(v3);

	vector<int>v4;
	v4.assign(10, 100);  //将n个elem拷贝赋值给本身。
	printVector(v4);
}

int main1402() {

	test02();

	system("pause");

	return 0;
}
