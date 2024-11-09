#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,N,d,e,A=0,B=7;
    cin>>T;
    for(i=0;i<T;i++){
        cin>>N;
        d=abs(N-A);
        e=abs(N-B);
        if(d<=e){
            cout<<"A"<<endl;
            A=N;
        }
        else{
            cout<<"B"<<endl;
            B=N;
        }
    }
    return 0;
}
