#include<iostream>
using namespace std;
#include <vector>
// ����01�ļ���ķ���
extern void printVector(vector<int>& v);

//��ֵ����
void test02()
{
	vector<int> v1; //�޲ι���
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2;
	v2 = v1;
	printVector(v2);

	vector<int>v3;
	v3.assign(v1.begin(), v1.end());  //��[beg, end)�����е����ݿ�����ֵ������
	printVector(v3);

	vector<int>v4;
	v4.assign(10, 100);  //��n��elem������ֵ������
	printVector(v4);
}

int main1402() {

	test02();

	system("pause");

	return 0;
}
