#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,cont=0;
    cin>>n;
    int cloud[n];
    for(i=0;i<n;i++){
        cin>>cloud[i];
    }
    i=0;
    while(i<n){
        if(cloud[i+2]==0){
            cont++;
            i=i+2;
        }
        else if(cloud[i+1]==0){
            i=i+1;
            cont++;
        }
        else{
            i++;
        }
        if(i==n-1){
            break;
        }
    }
    cout<<cont<<endl;
    return 0;


}
