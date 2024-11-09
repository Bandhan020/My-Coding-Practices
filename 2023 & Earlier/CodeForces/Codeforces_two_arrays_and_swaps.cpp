#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int sum(int arr[],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int t,i,j,k,n;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k;
        int a[n],b[n];
        for(j=0;j<n;j++){
            cin>>a[j];
        }
        for(j=0;j<n;j++){
            cin>>b[j];
        }
        if(k==0){
            cout<<sum(a,n)<<endl;
        }
        else if(k==n){
            if(sum(a,n)>sum(b,n)){
                cout<<sum(a,n)<<endl;
            }
            else{
                cout<<sum(b,n)<<endl;
            }
        }
        else{
            sort(a,n);
            sort(b,n);
            int p=k,l=0;
            for(j=n-1;p!=0 || l!=n;j--){
                for(;l<n;){
                    if(b[j]>a[l]){
                        a[l]=b[j];
                        l++;
                        p--;
                        break;
                    }
                }
            }
            cout<<sum(a,n)<<endl;
        }
    }
    return 0;
}
