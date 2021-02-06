#include <iostream>
using namespace std;

// first name space
namespace first_space2 {
    void func() {
        cout << "Inside first_space" << endl;
    }

    // second name space
    namespace second_space2 {
        void func() {
            cout << "Inside second_space" << endl;
        }
    }
}

using namespace first_space2::second_space2;
int main() {
    // This calls function from second name space.
    func();
    system("pause");
    return 0;
}