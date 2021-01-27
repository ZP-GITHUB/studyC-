#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>

//1.一元谓词  参数只有一个的谓词，称为一元谓词
struct GreaterFive {
	bool operator()(int val) {
		return val > 5;
	}
};

void test04() {

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end()) {
		cout << "没找到!" << endl;
	}
	else {
		cout << "找到:" << *it << endl;
	}

}

int main1902() {

	test04();

	system("pause");

	return 0;
}