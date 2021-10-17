#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b,n,m,i,j,c=0;
    cin>>b>>n>>m;
    int key[n],drive[m];
    for(i=0;i<n;i++){
        cin>>key[i];
    }
    for(i=0;i<m;i++){
        cin>>drive[i];
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(key[i]+drive[j]>c && key[i]+drive[j]<=b){
                c=key[i]+drive[j];
            }
        }
    }

    if(c==0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<c<<endl;
    }

    return 0;
}
