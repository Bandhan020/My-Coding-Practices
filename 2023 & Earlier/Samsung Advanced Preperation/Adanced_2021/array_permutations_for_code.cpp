#include <bits/stdc++.h>
using namespace std;
int arr1[100000][8]={0};
int i=0;

void swapp(int *arr,int s, int e){
    int t;
    t=arr[s];
    arr[s]=arr[e];
    arr[e]=t;
}


void permute(int *arr,int l,int r){
    if(l==r){
        for(int j=0;j<=r;j++){
            arr1[i][j]=arr[j];
        }
    i++;
    }
    else{
       for(int k=l;k<=r;k++){
        swapp(arr,l,k);
        permute(arr,l+1,r);
        swapp(arr,l,k);
       }
    }
}

int main()
{
    int n,j,k;
    int arr[8]={0};
    cin>>n;
    for(j=0;j<n;j++){
        cin>>arr[j];
    }
     for(j=0;j<n;j++){
        cout<<arr[j]<<endl;
    }
    permute(arr,0,n-1);
    cout<<endl<<endl<<"All Permutations: "<<endl;

    int m=1;
    for(j=0;j<i;j++){
        for(k=0;k<n;k++){
            cout<<arr1[j][k]<<"   ";
        }
        cout<<"count "<<m<<":"<<endl;
        m++;
    }
    return 0;
}
