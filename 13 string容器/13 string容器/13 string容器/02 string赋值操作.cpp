#include<iostream>
using namespace std;

//赋值
void test02()
{
	string str1;
	str1 = "hello world";
	cout << "str1 = " << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;

	string str4;
	str4.assign("hello c++");  //把字符串s赋给当前的字符串
	cout << "str4 = " << str4 << endl;

	string str5;
	str5.assign("hello c++", 5);  //把字符串s的前n个字符赋给当前的字符串
	cout << "str5 = " << str5 << endl;


	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;

	string str7;
	str7.assign(5, 'x');  //用n个字符c赋给当前字符串
	cout << "str7 = " << str7 << endl;
}

int main1302() {

	test02();

	system("pause");

	return 0;
}