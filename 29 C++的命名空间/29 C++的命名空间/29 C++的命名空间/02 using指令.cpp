#include <iostream>
using namespace std;

// first name space
namespace first_space1 {
    void func() {
        cout << "Inside first_space" << endl;
    }
}

// second name space
namespace second_space1 {
    void func() {
        cout << "Inside second_space" << endl;
    }
}

using namespace first_space1;
int main2902() {
    // This calls function from first name space.
    func();
    system("pause");
    return 0;
}