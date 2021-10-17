#include <bits/stdc++.h>
using namespace std;

void even(int a[],int i, int j,int *n){
    if(i==*n){
        *n=j;
        return;
    }
    if(a[i]%2==0){
        a[j++]=a[i];
    }
    even(a,i+1,j,n);
}
int main()
{
    int a[100],n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    even(a,0,0,&n);

    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
