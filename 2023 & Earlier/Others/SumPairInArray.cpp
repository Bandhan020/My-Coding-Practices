#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr1[100],i,j,n,e,sum,count=0;
    cout<<"How many elements you want to take as input?"<<endl;
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(i=0;i<n;i++){
        cin>>e;
        arr1[i]=e;
    }
    cout<<"Enter the sum for which you want to find the pair?"<<endl;
    cin>>sum;
    for(i=0;i<n;i++){
         for(j=i+1;j<=n && i!=j;j++){
        if(arr1[i]+arr1[j]==sum){
            cout<<arr1[i]<<" , "<<arr1[j]<<endl;
            count++;
        }
         }

    }
    cout<<"Total Number of pair is: "<<count<<endl;
    return 0;
}

