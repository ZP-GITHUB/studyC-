#include<iostream>
using namespace std;
#include <set>
// ����01�ļ���ķ���
extern void printSet(set<int>& s);

//�����ɾ��
void test04()
{
	set<int> s1;
	//����
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	printSet(s1);

	//ɾ��
	s1.erase(s1.begin());
	printSet(s1);

	s1.erase(30);
	printSet(s1);

	//���
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	printSet(s1);
}

int main1703() {

	test04();

	system("pause");

	return 0;
}