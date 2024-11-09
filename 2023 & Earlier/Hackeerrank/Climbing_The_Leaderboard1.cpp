#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr,arr1;
    int n,m,c,i,j,k=0,rank;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>c;
        if(i==0){
            arr.push_back(c);
            k++;
        }
        else{
            if(c!=arr[k-1]){
                arr.push_back(c);
                k++;
            }
        }}

        cin>>m;
        for(i=0;i<m;i++){
            cin>>c;
            arr1.push_back(c);
        }

        j=k-1;

          for(i=0;i<m;i++)
    {
        while(j>=0 && arr1[i]>arr[j])
            j--;
        if(j==-1)
            rank=1;
        else if(arr1[i]==arr[j])
            rank=j+1;
        else if(arr1[i]<arr[j])
            rank=j+2;
        cout<<rank<<endl;
    }

    return 0;
}


