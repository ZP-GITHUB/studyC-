#include<iostream>
using namespace std;
#include <functional>

//- ʵ����������
//- ����negate��һԪ���㣬�������Ƕ�Ԫ����
//-template<class T> T plus<T>                //�ӷ��º���
//-template<class T> T minus<T>              //�����º���
//-template<class T> T multiplies<T>    //�˷��º���
//-template<class T> T divides<T>         //�����º���
//-template<class T> T modulus<T>         //ȡģ�º���
//-template<class T> T negate<T>           //ȡ���º���

//negate
void test06()
{
	negate<int> n;  //ȡ���º���
	cout << n(50) << endl;
}

//plus
void test07()
{
	plus<int> p;  //�ӷ��º���
	cout << p(10, 20) << endl;
}

int main1904() {

	test06();
	test07();

	system("pause");

	return 0;
}