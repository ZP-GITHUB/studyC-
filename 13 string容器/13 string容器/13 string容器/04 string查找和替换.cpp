#include<iostream>
using namespace std;

//���Һ��滻
void test04()
{
	//����
	string str1 = "abcdefgde";

	int pos = str1.find("de");  //����str��һ�γ���λ��,��pos��ʼ����

	if (pos == -1)
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "pos = " << pos << endl;
	}


	pos = str1.rfind("de");   //����str���һ��λ��,��pos��ʼ����

	cout << "pos = " << pos << endl;

}

void test05()
{
	//�滻
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