#include<iostream>
using namespace std;

//�ַ��������ɾ��
void test08()
{
	string str = "hello";
	str.insert(1, "111");
	cout << str << endl;

	str.erase(1, 3);  //��1��λ�ÿ�ʼ3���ַ�
	cout << str << endl;
}

int main1307() {

	test08();

	system("pause");

	return 0;
}