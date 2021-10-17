#include <bits/stdc++.h>
using namespace std;
int arr[100];

void print(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        arr[i]=0;
    }
    print(arr,n);
    return 0;
}
