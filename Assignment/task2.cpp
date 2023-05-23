// Q.2 Write a program to print a table of any given number. Ex: 2x1 = 2, 2x2 = 4 …
#include<iostream>
using namespace std;
 
int main()
{
    int num; cout << "Enter Number : " ;
    cin >> num;
    for (int i = 1; i <=10; i++)
    {
        cout << num << " X " << i << " = " << num*i << endl;
    }
    return 0;
}