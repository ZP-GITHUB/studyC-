#include<iostream>
using namespace std;
#include <deque>
// 引用01文件里的方法
extern void printDeque(const deque<int>& d);

//赋值操作
void test02()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int>d2;
	d2 = d1;
	printDeque(d2);

	deque<int>d3;
	d3.assign(d1.begin(), d1.end());
	printDeque(d3);

	deque<int>d4;
	d4.assign(10, 100);
	printDeque(d4);

}

int main1502() {

	test02();

	system("pause");

	return 0;
}