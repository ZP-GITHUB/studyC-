#include<iostream>
using namespace std;
#include <map>
// 引用01文件里的方法
extern void printMap(map<int, int>& m);

void test04()
{
	//插入
	map<int, int> m;
	//第一种插入方式
	m.insert(pair<int, int>(1, 10));
	//第二种插入方式
	m.insert(make_pair(2, 20));
	//第三种插入方式
	m.insert(map<int, int>::value_type(3, 30));
	//第四种插入方式
	m[4] = 40;
	printMap(m);

	//删除
	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);

	//清空
	m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
}

int main1803() {

	test04();

	system("pause");

	return 0;
}