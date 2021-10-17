#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,j;
    cin>>t;
    for(j=0;j<t;j++){
    string a;
    cin>>a;
    int i,s,cnt=0;
    s=a.size();
    for(i=0;i<s-1;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    }
    return 0;
}
