#include <iostream>
#include <windows.h>
#include <csignal>

using namespace std;

//Ϊ��������˺�������������������һ������Ϊ��ʾ�źű�ŵ��������ڶ�������Ϊָ���źŴ�������ָ�롣
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