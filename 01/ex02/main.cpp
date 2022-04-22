#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string &stringREF = str;

    cout << &str << endl;
    cout << &stringPTR << endl;
    cout << &stringREF << endl << endl;

    cout << str << endl;
    cout << *stringPTR << endl;
    cout << stringREF << endl << endl;
}

//레퍼런스와 포인터의 차이를 좀 더 공부해야함