#include <iostream>
using namespace std;

double division(int a, int b) {
    if (b == 0) {
        throw "Division by zero condition!";
    }
    return (a / b);
}

int main2701() {
    int x = 50;
    int y = 0;
    double z = 0;

    try {
        z = division(x, y);
        cout << z << endl;
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }
    system("pause");
    return 0;
}