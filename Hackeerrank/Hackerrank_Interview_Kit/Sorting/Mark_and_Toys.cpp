#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,j,a[100000],sum=0,c=-1;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++) {

    for (int j = i+1; j < n && j!=i ; j++) {
        if (a[i] > a[j]) {
            swap(a[i], a[j]);
        }
    }
    if(sum<k){
        sum=sum+a[i];
        c++;
    }
    else{
        break;
    }
}

    cout<<c<<endl;
    return 0;
}

