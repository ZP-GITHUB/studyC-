#include<iostream>
using namespace std;
#include <map>
// ����01�ļ���ķ���
extern void printMap(map<int, int>& m);

void test04()
{
	//����
	map<int, int> m;
	//��һ�ֲ��뷽ʽ
	m.insert(pair<int, int>(1, 10));
	//�ڶ��ֲ��뷽ʽ
	m.insert(make_pair(2, 20));
	//�����ֲ��뷽ʽ
	m.insert(map<int, int>::value_type(3, 30));
	//�����ֲ��뷽ʽ
	m[4] = 40;
	printMap(m);

	//ɾ��
	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);

	//���
	m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
}

int main1803() {

	test04();

	system("pause");

	return 0;
}