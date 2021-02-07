#include <iostream>
#include <csignal>

using namespace std;

//sig�Ƿ����κ��źŵ��źű�ţ�SIGINT��SIGABRT��SIGFPE��SIGILL��SIGSEGV��SIGTERM��SIGHUP������������ʹ��raise�����������ڲ������ź�
void signalHandler(int signum) {
    cout << "Interrupt signal (" << signum << ") received.\n";

    // cleanup and close up stuff here  
    // terminate program  

    exit(signum);
}

int main() {
    int i = 0;
    // register signal SIGINT and signal handler  
    signal(SIGINT, signalHandler);

    while (++i) {
        cout << "Going to sleep...." << endl;
        if (i == 3) {
            raise(SIGINT);
        }
        sleep(1);
    }

    return 0;
}