#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s;
    cin>>s;
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
        else{
            s[i]=s[i]+32;
        }
    }
    cout<<s<<endl;
    return 0;
}
