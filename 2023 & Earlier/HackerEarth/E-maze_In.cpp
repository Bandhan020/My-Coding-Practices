#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, x=0,y=0;
    string s;
    cin>>s;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='L'){
            x=x-1;
        }
        else if(s[i]=='R'){
            x=x+1;
        }
        else if(s[i]=='D'){
            y=y-1;
        }
        else{
            y=y+1;
        }
    }
    cout<<x<<" "<<y;
    return 0;
}
