#include<iostream>
using namespace std;
#include <vector>

// 总结：如果数据量较大，可以一开始利用reserve预留空间
void test08()
{
	vector<int> v;

	//预留空间
	v.reserve(100000);

	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}

	cout << "num:" << num << endl;
}

int main() {

	test08();

	system("pause");

	return 0;
}