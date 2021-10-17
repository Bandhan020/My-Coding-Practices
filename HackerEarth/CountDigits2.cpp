#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    cin>>s;
    int i,j,c,l=strlen(s);
    for(i=0;i<=9;i++){
        c=0;
        for(j=0;j<l;j++){
            if((s[j]-'0')==i){
                c++;
            }

        }
        cout<<i<<" "<<c<<endl;
    }
    return 0;
}
