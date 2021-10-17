#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100000],i,j,t,n,sum,b;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        sum=0;
        for(j=0;j<n;j++){
            cin>>arr[j];
        }
        j=0;
        while(j<n){
            if(arr[j]!=j+1){
                b=arr[j]-1-j;
                if(b>2){
                    sum=0;
                    break;
                }
                sum=sum+b;
                j=arr[j];

            }
        }
        if(sum!=0){
            cout<<sum<<endl;
        }
        else{
            cout<<"Too chaotic"<<endl;
        }
    }
    return 0;
}
