#include <bits/stdc++.h>
using namespace std;

int return_pos(int arr[],int n,int k){
    int i,pos;
    for(i=0;i<n;i++){
        if(arr[i]==k){
            pos=i+1;
        }
    }
    return pos;
}


int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=1;i<=n;i++){
        cout<<return_pos(arr,n,return_pos(arr,n,i))<<endl;
    }

    return 0;
}
