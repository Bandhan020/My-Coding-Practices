#include <bits/stdc++.h>
using namespace std;

void swapp(string &a,int s, int e){
    char t;
    t=a[s];
    a[s]=a[e];
    a[e]=t;
}

void permute(string a, int l,int r){

    if(l==r){
        cout<<a<<endl;
    }
    else{
        for(int i=l;i<=r;i++){
            swapp(a,l,i);        //swap
            permute(a,l+1,r);   //recursion
            swapp(a,l,i);    //backtrack
        }
    }
}

int main()
{
    string str;
    cin>>str;
    int n=str.size();
    //str=swapp(str,0,n-1);
   //cout<<str<<endl;
    permute(str,0,n-1);
    return 0;
}
