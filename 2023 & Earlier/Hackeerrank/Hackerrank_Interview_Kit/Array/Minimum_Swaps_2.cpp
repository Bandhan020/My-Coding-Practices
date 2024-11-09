#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,arr[100000],m=0,temp;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    i=0;
    while(i<n-1){
        if(arr[i]!=i+1){
            temp=arr[arr[i]-1];
            arr[arr[i]-1]=arr[i];
            arr[i]=temp;
            m++;
        }
        else{
            i++;
        }
    }
    cout<<m<<endl;
    return 0;
}
