#include<iostream>
using namespace std;
#include <string>

//���鴴��
void test07()
{
	pair<string, int> p(string("Tom"), 20);
	cout << "������ " << p.first << " ���䣺 " << p.second << endl;

	pair<string, int> p2 = make_pair("Jerry", 10);
	cout << "������ " << p2.first << " ���䣺 " << p2.second << endl;
}

int main1706() {

	test07();

	system("pause");

	return 0;
}