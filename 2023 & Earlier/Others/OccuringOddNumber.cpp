#include <bits/stdc++.h>
using namespace std;

void oddOccurance(int* arr, int n){
    int count=0,index=0,i,j,odd;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count%2!=0){
            odd=count;
            index=i;
        }
    }
    cout<<"Odd occuring Element is "<<arr[index]<<endl;
}

int main()
{
    int arr[100],n,i;
    cout<<"Enter the size of array  "<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    oddOccurance(arr,n);
    return 0;
}
