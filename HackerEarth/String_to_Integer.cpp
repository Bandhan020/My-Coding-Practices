#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int i,num=0;
    for(i=0;i<str.size();i++){
        num=num*10+str[i]-'0';
    }
    cout<<num<<endl;
    return 0;
}
