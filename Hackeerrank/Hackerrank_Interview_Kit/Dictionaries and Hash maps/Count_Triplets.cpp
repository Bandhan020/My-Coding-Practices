#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,r,i,j,k,flag=0;
    cin>>n>>r;
    int *arr= (int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;k<n;k++){
                if(arr[j]/arr[i]==r && arr[k]/arr[j]==r){
                    flag++;
                }
            }
        }
    }

    cout<<flag<<endl;

    return 0;
}
