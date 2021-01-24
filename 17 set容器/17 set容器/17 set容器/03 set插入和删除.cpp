#include<iostream>
using namespace std;
#include <set>
// 引用01文件里的方法
extern void printSet(set<int>& s);

//插入和删除
void test04()
{
	set<int> s1;
	//插入
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	printSet(s1);

	//删除
	s1.erase(s1.begin());
	printSet(s1);

	s1.erase(30);
	printSet(s1);

	//清空
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	printSet(s1);
}

int main1703() {

	test04();

	system("pause");

	return 0;
}