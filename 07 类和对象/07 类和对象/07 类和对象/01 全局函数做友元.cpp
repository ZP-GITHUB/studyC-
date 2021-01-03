#include<iostream>
using namespace std;

//在程序里，有些私有属性 也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术

class Building
{
	//告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
	friend void goodGay(Building* building);

public:

	Building()
	{
		this->m_SittingRoom = "客厅";
		this->m_BedRoom = "卧室";
	}


public:
	string m_SittingRoom; //客厅

private:
	string m_BedRoom; //卧室
};


void goodGay(Building* building)
{
	cout << "好基友正在访问： " << building->m_SittingRoom << endl;
	cout << "好基友正在访问： " << building->m_BedRoom << endl;
}


void test015()
{
	Building b;
	goodGay(&b);
}

int main0401() {

	test015();

	system("pause");
	return 0;
}