#include <iostream>
using namespace std;

int main() {
	//���������ڱ���ĳ���ĵ�ǰ�кš�
	cout << "Value of __LINE__ : " << __LINE__ << endl;
	//���������ڱ���ĳ���ĵ�ǰ�ļ�����
	cout << "Value of __FILE__ : " << __FILE__ << endl;
	//������һ����ʽΪmonth / day / year���ַ��������ַ�����Դ�ļ�ת��ΪĿ���������ڡ�
	cout << "Value of __DATE__ : " << __DATE__ << endl;
	//��������ʽΪhour��minute��second���ַ��������ַ����ǳ��򱻱����ʱ�䡣
	cout << "Value of __TIME__ : " << __TIME__ << endl;
	system("pause");
	return 0;
}