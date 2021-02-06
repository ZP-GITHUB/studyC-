#include <iostream>
#include <exception>
using namespace std;

// �ڴˣ�what�������쳣���ṩ�Ĺ��������������ѱ��������쳣�า�ǡ��⽫�����쳣ԭ��
struct MyException : public exception {
    const char* what() const throw () {
        return "C++ Exception";
    }
};

int main() {
    try {
        throw MyException();
    }
    catch (MyException& e) {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e) {
        //Other errors
    }
    system("pause");
}