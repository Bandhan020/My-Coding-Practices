#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,k,b,arr[100000];
    cin>>t;
    for(i=0;i<t;i++){
        b=0;
        cin>>n;
        for(j=0;j<n;j++){
            cin>>arr[j];
        }
        for(j=0;j<n;j++){
            if(arr[j]-(j+1)>2){
                b=0;
                break;
            }
            for(k=0;k<j;k++){
                if(arr[k]>arr[j]){
                    b++;
                }
            }
        }
        if(b==0){
            cout<<"Too chaotic"<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
    return 0;
}
