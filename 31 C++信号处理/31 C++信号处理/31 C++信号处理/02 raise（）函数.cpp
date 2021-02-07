#include <iostream>
#include <csignal>

using namespace std;

//sig是发送任何信号的信号编号：SIGINT，SIGABRT，SIGFPE，SIGILL，SIGSEGV，SIGTERM，SIGHUP。以下是我们使用raise（）函数在内部产生信号
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