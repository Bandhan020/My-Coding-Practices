#include <iostream>
#include <string>

    using namespace std;
int i;

int main()
{
    string a = "abcde";
    string b = a.substr(2,2);    // 2 will be c. Why? because we start counting from 0 in a string, not from 1.

    cout << "substring of a is: " << b << endl;
    return 0;
}
