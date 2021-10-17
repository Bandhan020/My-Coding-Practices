#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    if(b%a==0){
        return a;
    }
    else{
        GCD(b%a,a);
    }
}

int main()
{
    int t,a,b,i,j,x,c,d,e;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x;
        for(a=1;a<x;a++){
            e=0;
            for(b=1;b<=x;b++){
                c=GCD(a,b);
                d=((a*b)/c);
                if(c+d==x){
                    e=1;
                    cout<<a<<" "<<b<<endl;
                }
            }
            if(e==1){
                break;
            }
        }

    }
    return 0;

}
