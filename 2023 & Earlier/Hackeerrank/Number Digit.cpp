#include <bits/stdc++.h>
using namespace std;

int main()
{
int i,n,s,h;
cin>>s;
for(i=0;i<2;i++){
        while(n!=0){
            n=s/10;
            h=s%10;
            s=n;
            cout<<h<<endl;
        }
    }
return 0;
}
