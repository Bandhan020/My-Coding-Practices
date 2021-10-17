#include <bits/stdc++.h>
using namespace std;

int prime(int a){
    int c=0;
    for(int j=2;j<=(a/2);j++){
            if(a%j==0){
                c=1;
            }
        }
        return c;
}

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        int d=prime(i);
        if(d==0){
            int r,s=i,p=0;
            while(s!=0){
                r=s%10;
                p=p+r;
                s=s/10;
            }
            int e=prime(p);
            if(e==0){
                cout<<i<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}
