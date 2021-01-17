#include<iostream>
using namespace std;

void test07()
{
	string str = "hello world";

	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;


	//×Ö·ûÐÞ¸Ä
	str[0] = 'x';
	str.at(1) = 'x';
	cout << str << endl;

}

int main1306() {

	test07();

	system("pause");

	return 0;
}