#include <iostream>
#include <windows.h>
#include <csignal>

using namespace std;

//为简单起见，此函数接收两个参数：第一个参数为表示信号编号的整数，第二个参数为指向信号处理函数的指针。
void signalHandler(int signum) {
    cout << "Interrupt signal (" << signum << ") received.\n";

    // cleanup and close up stuff here  
    // terminate program  

    exit(signum);
}

int main3101() {
    // register signal SIGINT and signal handler  
    signal(SIGINT, signalHandler);

    while (1) {
        cout << "Going to sleep...." << endl;
        Sleep(1);
    }

    return 0;
}