#include<iostream>
using namespace std;
#include <numeric>
#include <vector>
#include <algorithm>

class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
//�����������ָ����Ԫ��
void test02()
{

	vector<int> v;
	v.resize(10);
	//���
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
}

int main() {

	test02();

	system("pause");

	return 0;
}