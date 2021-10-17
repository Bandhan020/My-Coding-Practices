#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,j,c;
    cin>>N;
    for(i=2;i<=N;i++){
            c=0;
        for(j=2;j<=i;j++){
            if(i%j==0 && i!=j){
                c=1;
            }
        }
        if(c==0){
            cout<<i<<" "<<endl;
        }
    }
    return 0;
}
