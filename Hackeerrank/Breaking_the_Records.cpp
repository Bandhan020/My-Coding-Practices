#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[1000],i,j,ht,lt,h=0,l=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(i==0){
            ht=a[i];
            lt=a[i];
        }
        if(a[i]>ht){
            h++;
            ht=a[i];
        }
        else if(a[i]<lt){
            lt=a[i];
            l++;
        }
    }
    cout<<h<<" "<<l<<endl;
    return 0;
}
