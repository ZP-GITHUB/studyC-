#include <iostream>
using namespace std;

#define MKSTR( x ) #x
#define concat(a, b) a ## b

int main3003() {

	// ＃运算符使替换文本标记转换为带引号的字符串。
	cout << MKSTR(HELLO C++) << endl;
	//直接把上一行编译成  cout << "HELLO C++" << endl;

	// ##运算符用于连接两个标记。
	int xy = 100;
	cout << concat(x, y);

	system("pause");
	return 0;
}