#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,i,r;
    cin>>s;
    cin>>n;
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='0' &&s[i]<='9'){
            r=n%10;
            if((s[i]+r)>'9'){
                s[i]='0'+(s[i]+r-'9')-1;
            }
            else{
                s[i]=s[i]+r;
            }
        }
        else if(s[i]>='a'&& s[i]<='z'){
            r=n%26;
            if((s[i]+r)>'z'){
                s[i]='a'+(s[i]+r-'z')-1;
            }
            else{
                s[i]=s[i]+r;
            }
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            r=n%26;
            if((s[i]+r)>'Z'){
                s[i]='A'+(s[i]+r-'Z')-1;
            }
            else{
                s[i]=s[i]+r;
            }
        }
        else{
           continue;
        }
    }
    cout<<s<<endl;
    return 0;
}
