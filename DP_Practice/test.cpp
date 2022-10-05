#include <bits/stdc++.h>
using namespace std;

bool canSum(int size, int targetSum,int arr[]){
    int remainder;
    if(targetSum==0){
        return true;
    }
    if(targetSum<0){
        return false;
    }
    for(int i=0;i<size;i++){
        remainder = targetSum-arr[i];
        if(canSum(size, remainder, arr) == true){
            return true;
        }
    }

    return false;
}

int main()
{
    int n,arr[100],tSum,i;
    cin>>n>>tSum;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    if(canSum(n,tSum,arr)==true){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}