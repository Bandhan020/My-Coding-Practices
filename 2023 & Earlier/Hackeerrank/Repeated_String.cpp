#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,s,n,c=0;
    string str;
    cin>>str>>n;
    s=str.size();
    for(i=0;i<s;i++){
        if(str[i]=='a'){
            c++;
        }
    }
    c=(n/s)*c;
    for(i=0;i<(n%s);i++){
        if(str[i]=='a'){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
