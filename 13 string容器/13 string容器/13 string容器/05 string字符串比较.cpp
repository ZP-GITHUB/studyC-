#include<iostream>
using namespace std;

//字符串比较  字符串对比主要是用于比较两个字符串是否相等，判断谁大谁小的意义并不是很大
void test06()
{

	string s1 = "hello";
	string s2 = "aello";

	int ret = s1.compare(s2);

	if (ret == 0) {
		cout << "s1 等于 s2" << endl;
	}
	else if (ret > 0)
	{
		cout << "s1 大于 s2" << endl;
	}
	else
	{
		cout << "s1 小于 s2" << endl;
	}

}

int main1305() {

	test06();

	system("pause");

	return 0;
}