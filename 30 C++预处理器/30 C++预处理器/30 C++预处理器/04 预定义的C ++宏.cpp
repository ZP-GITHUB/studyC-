#include <iostream>
using namespace std;

int main() {
	//它包含正在编译的程序的当前行号。
	cout << "Value of __LINE__ : " << __LINE__ << endl;
	//它包含正在编译的程序的当前文件名。
	cout << "Value of __FILE__ : " << __FILE__ << endl;
	//它包含一个格式为month / day / year的字符串，该字符串是源文件转换为目标代码的日期。
	cout << "Value of __DATE__ : " << __DATE__ << endl;
	//它包含格式为hour：minute：second的字符串，该字符串是程序被编译的时间。
	cout << "Value of __TIME__ : " << __TIME__ << endl;
	system("pause");
	return 0;
}