#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n,m,i,j;
    long arr1[51][251]={};
    cin>>n>>m;
    long arr[m];
    for(i=0;i<m;i++){
        cin>>arr[i];
    }
    for(i=0,j=0;i<m;i++){
        arr1[i][j]=1;
    }
    for(i=0,j=0;j<=n;j++){
        if(j%arr[i]==0){
            arr1[i][j]=1;
        }
        else{
            arr1[i][j]=0;
        }
    }
    for(i=1;i<m;i++){
        for(j=1;j<=n;j++){
                if(j>=arr[i]){
                    arr1[i][j]=arr1[i-1][j]+arr1[i][j-arr[i]];
                }
                else{
                    arr1[i][j]=arr1[i-1][j];
                }
            }
    }

    cout<<arr1[m-1][n]<<endl;
    return 0;
}


