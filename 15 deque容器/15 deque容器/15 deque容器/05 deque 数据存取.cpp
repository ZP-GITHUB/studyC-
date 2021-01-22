#include<iostream>
using namespace std;
#include <deque>
// 引用01文件里的方法
extern void printDeque(const deque<int>& d);

//数据存取
void test07()
{

	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}
	cout << endl;


	for (int i = 0; i < d.size(); i++) {
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "front:" << d.front() << endl;

	cout << "back:" << d.back() << endl;

}

int main1505() {

	test07();

	system("pause");

	return 0;
}