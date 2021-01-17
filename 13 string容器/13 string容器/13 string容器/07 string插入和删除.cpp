#include<iostream>
using namespace std;

//字符串插入和删除
void test08()
{
	string str = "hello";
	str.insert(1, "111");
	cout << str << endl;

	str.erase(1, 3);  //从1号位置开始3个字符
	cout << str << endl;
}

int main1307() {

	test08();

	system("pause");

	return 0;
}