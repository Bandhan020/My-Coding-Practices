#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int N;
    int Q,i,q,l,r,s;
    cin>>N>>Q;
    int arr[100000];
    for(i=0;i<N;i++){
        cin>>arr[i];
    }
    for(i=0;i<Q;i++){
        cin>>q>>l>>r;
        if(q==1){
            for(int j=0;j<=l;j++){
                if(j==l){
                    arr[j]++;
                }
            }
        }
        else if(q==2){
            s=0;
            for(int j=l;j<=r;j++){
                s=s+arr[j];
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
