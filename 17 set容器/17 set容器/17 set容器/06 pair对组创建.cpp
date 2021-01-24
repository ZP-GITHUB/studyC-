#include<iostream>
using namespace std;
#include <string>

//对组创建
void test07()
{
	pair<string, int> p(string("Tom"), 20);
	cout << "姓名： " << p.first << " 年龄： " << p.second << endl;

	pair<string, int> p2 = make_pair("Jerry", 10);
	cout << "姓名： " << p2.first << " 年龄： " << p2.second << endl;
}

int main1706() {

	test07();

	system("pause");

	return 0;
}