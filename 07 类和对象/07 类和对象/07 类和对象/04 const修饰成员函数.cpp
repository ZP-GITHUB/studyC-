#include<iostream>
using namespace std;

/*
��������
- ��Ա�������const�����ǳ�Ϊ�������Ϊ������
- �������ڲ������޸ĳ�Ա����
- ��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�

������
- ��������ǰ��const�Ƹö���Ϊ������
- ������ֻ�ܵ��ó�����
*/

class Person {
public:
	Person() {
		m_A = 0;
		m_B = 0;
	}

	//thisָ��ı�����һ��ָ�볣����ָ���ָ�򲻿��޸�
	//�������ָ��ָ���ֵҲ�������޸ģ���Ҫ����������
	void ShowPerson() const {
		//const Type* const pointer;
		//this = NULL; //�����޸�ָ���ָ�� Person* const this;
		//this->mA = 100; //����thisָ��ָ��Ķ���������ǿ����޸ĵ�

		//const���γ�Ա��������ʾָ��ָ����ڴ�ռ�����ݲ����޸ģ�����mutable���εı���
		this->m_B = 100;
	}

	void MyFunc() const {
		//mA = 10000;
	}

public:
	int m_A;
	mutable int m_B; //���޸� �ɱ��
};


//const���ζ���  ������
void test014() {

	const Person person; //��������  
	cout << person.m_A << endl;
	//person.mA = 100; //���������޸ĳ�Ա������ֵ,���ǿ��Է���
	person.m_B = 100; //���ǳ���������޸�mutable���γ�Ա����

	//��������ʳ�Ա����
	person.MyFunc(); //�������ܵ���const�ĺ���

}

int main0304() {

	test014();

	system("pause");

	return 0;
}