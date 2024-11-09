#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b="";
    int l,i,j;
    cin>>a;
    l=a.size();
    for(i=l-1;i>=0;i--){
        b+=a[i];
    }
    if(a==b){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
