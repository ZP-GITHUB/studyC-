#include<iostream>
using namespace std;

int main3() {

	//������float ռ�ÿռ�4�ֽ� ��Ч���ַ�Χ7λ��Ч����
	float f1 = 3.14f;

	//˫����double ռ��8�ֽ� 15~16λ��Ч����
	double d1 = 3.14;

	cout << f1 << endl;
	cout << d1 << endl;

	//ռ�ÿռ�
	cout << "float  sizeof = " << sizeof(f1) << endl;
	cout << "double sizeof = " << sizeof(d1) << endl;

	//��ѧ������
	float f2 = 3e2; //3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;  // 3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;
}