#include <iostream>
using namespace std;

#define MKSTR( x ) #x
#define concat(a, b) a ## b

int main3003() {

	// �������ʹ�滻�ı����ת��Ϊ�����ŵ��ַ�����
	cout << MKSTR(HELLO C++) << endl;
	//ֱ�Ӱ���һ�б����  cout << "HELLO C++" << endl;

	// ##�������������������ǡ�
	int xy = 100;
	cout << concat(x, y);

	system("pause");
	return 0;
}