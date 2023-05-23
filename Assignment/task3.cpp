// Q.3 Write a program to print the current time every second.

#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
    while (true)                                              // for running infinite times loop
    {
        time_t currTime = time(0);                            // get calendar time as (time() func return)

        tm* tmp = localtime(&currTime);                       // convert into local time
        cout << tmp->tm_hour << " : " << tmp->tm_min << " : " << tmp->tm_sec << endl;
        Sleep(1000);                                          // hold for 1 sec
    }
  
    return 0;
}