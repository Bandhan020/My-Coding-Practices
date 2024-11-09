#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,i,j,fp=0,lp=0;
    cin>>n>>p;
    i=1;
    j=n;
    while(p>i){
        fp++;
        i+=2;
    }

    while(p<j){
        if(j-1==p & j%2!=0){
            break;
        }
        lp++;
        j-=2;
    }


    if(fp<lp){
        cout<<fp<<endl;
    }
    else{
        cout<<lp<<endl;
    }

    return 0;
}
