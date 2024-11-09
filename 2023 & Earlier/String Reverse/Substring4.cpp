#include <iostream>
#include <string>

using namespace std;
int i;

int main()
{
    string a = "abcde";

    for (i=0;i<a.length(); i++)
    {
        if (a.substr(i,2) == "cd")
        {
        cout << "substring of a is: " << a.substr(i,2) << endl;    // i will iterate from 0 to 5 and will display the substring only when the condition is fullfilled
        }
    }
    return 0;
}
