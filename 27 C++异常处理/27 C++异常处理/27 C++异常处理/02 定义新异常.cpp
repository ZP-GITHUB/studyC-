#include <iostream>
#include <exception>
using namespace std;

// 在此，what（）是异常类提供的公共方法，并且已被所有子异常类覆盖。这将返回异常原因。
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