#include<iostream>
using namespace std;
#include <functional>

//- 实现四则运算
//- 其中negate是一元运算，其他都是二元运算
//-template<class T> T plus<T>                //加法仿函数
//-template<class T> T minus<T>              //减法仿函数
//-template<class T> T multiplies<T>    //乘法仿函数
//-template<class T> T divides<T>         //除法仿函数
//-template<class T> T modulus<T>         //取模仿函数
//-template<class T> T negate<T>           //取反仿函数

//negate
void test06()
{
	negate<int> n;  //取反仿函数
	cout << n(50) << endl;
}

//plus
void test07()
{
	plus<int> p;  //加法仿函数
	cout << p(10, 20) << endl;
}

int main1904() {

	test06();
	test07();

	system("pause");

	return 0;
}