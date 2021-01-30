#include<iostream>
using namespace std;
#include <algorithm>
#include <vector>

// 查找指定的元素，查到 返回true  否则false
void test06()
{
	vector<int>v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//二分查找
	bool ret = binary_search(v.begin(), v.end(), 2);
	if (ret)
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
}

int main2104() {

	test06();

	system("pause");

	return 0;
}