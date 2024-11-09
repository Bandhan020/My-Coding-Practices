#include <bits/stdc++.h>
using namespace std;

int prefix_sum(int n, int arr[], int prefix_Sum[]){
    prefix_Sum[0]= arr[0];
    for(int i=1;i<n;i++){
        prefix_Sum[i]=prefix_Sum[i-1] + arr[i];
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int prefix[n];
    prefix_sum(n,arr,prefix);
    for(int i=0;i<n;i++){
        cout<<prefix[i]<<endl;
    }
    return 0;

}
