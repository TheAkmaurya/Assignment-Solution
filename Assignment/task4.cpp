// Q.4 Write the program that takes input from user and write the content in the file
// for file manipulation we have "fstream" header file that provides us some classes : fstreambase, ifstream(read oper), ofstream(write oper)

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string str; cout << "Enter input as String : ";
    getline(cin, str);

    ofstream writeContent("info.txt");
    writeContent << str;
    
    return 0;
}
