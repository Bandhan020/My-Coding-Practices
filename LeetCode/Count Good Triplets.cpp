#include <bits/stdc++.h>
using namespace std;

int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n=arr.size();
        int i,j,k,countt=0;
        for(i=0;i<n-2;i++){
            for(j=i+1;j<n-1;j++){
                if(arr[i]-arr[j]<=a){
                for(k=j+1;k<n;k++){
                    if(abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c){
                          countt++;
                        //cout<<arr[i]-arr[j]<<"\t"<<arr[j]-arr[k]<<"\t"<<arr[i]-arr[k]<<"\t"<<countt<<endl;
                    }
                }
            }
        }
        }
        return countt;
    }

    int main(){
        vector<int>arr1;
        arr1={7,3,7,3,12,1,12,2,3};
        int a=5,b=8,c=1;
        int result=countGoodTriplets(arr1,a,b,c);
        return 0;
    }
