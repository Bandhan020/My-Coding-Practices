#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,X,Y,i;
    cin>>N>>X;
    for(i=0;i<N;i++){
        cin>>Y;
        if(Y>=X){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

}
