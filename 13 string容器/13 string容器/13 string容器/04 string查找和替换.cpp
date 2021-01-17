#include<iostream>
using namespace std;

//查找和替换
void test04()
{
	//查找
	string str1 = "abcdefgde";

	int pos = str1.find("de");  //查找str第一次出现位置,从pos开始查找

	if (pos == -1)
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "pos = " << pos << endl;
	}


	pos = str1.rfind("de");   //查找str最后一次位置,从pos开始查找

	cout << "pos = " << pos << endl;

}

void test05()
{
	//替换
	string str1 = "abcdefgde";
	str1.replace(1, 3, "1111");

	cout << "str1 = " << str1 << endl;
}

int main1304() {

	test04();
	//test05();

	system("pause");

	return 0;
}