#include<iostream>
using namespace std;

//����ռλ���� ��ռλ����Ҳ������Ĭ�ϲ���
void func(int a, int) {
	cout << "this is func" << endl;
}

int main2() {

	func(10, 10); //ռλ���������

	system("pause");

	return 0;
}