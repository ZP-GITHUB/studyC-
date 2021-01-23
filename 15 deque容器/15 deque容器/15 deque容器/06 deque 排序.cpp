#include<iostream>
using namespace std;
#include <algorithm>
#include <deque>
// 引用01文件里的方法
extern void printDeque(const deque<int>& d);

void test08()
{

	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	printDeque(d);
	sort(d.begin(), d.end());
	printDeque(d);

}

int main1506() {

	test08();

	system("pause");

	return 0;
}