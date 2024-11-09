#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr2[1000];
    int sum,k=0;
   for(int i=0;i<n;i++){
        sum=1;
    for(int j=0;j<n;j++){
        if(i==j){
            continue;
        }else{
            sum=sum*arr[j];
        }
    }
   arr2[k++]=sum;
   }
    return 0;
}
