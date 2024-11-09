#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int arr[5], mx=0, mn=0,sum;
    int i,j;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    for(i=0;i<5;i++){
        sum=0;
        for(j=0;j<5;j++){
            if(j==i){
                continue;
            }
            sum=sum+arr[j];
        }
        if(i==0){
            mn=sum;
        }
        if(sum>mx){
            mx=sum;
        }
        else{
            if(sum<mn){
                mn=sum;
            }
        }
    }
    cout<<mn<<" "<<mx<<endl;
    return 0;
}
