#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],arr1[102],n,i,j,p,r=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<102;i++){
        arr1[i]=0;
    }

    for(i=0;i<n;i++){
            if(arr1[arr[i]]==0){
            for(j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    arr1[arr[i]]++;

                }
            }
        }
    }

    for(i=0;i<102;i++){
           if(arr1[i]!=0){
           p=arr1[i]/2;
           if(p!=0){
            r=r+p;
           }
           }
    }

    cout<<r<<endl;

    return 0;
}
