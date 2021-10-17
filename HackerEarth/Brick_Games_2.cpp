#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,c=0;
    cin>>N;
    int i;
    for(i=1;N>0;i++){
        if(N<=i){
            c=1;
        }
        N=N-(i+i*2);
    }
    if(c==1){
        cout<<"Patlu"<<endl;
    }
    else{
        cout<<"Motu"<<endl;
    }
    return 0;
}
