#include <bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber) {
    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ans="";
     int n=columnNumber,k;
    while(n>0){
        n=n-1;
        k=n%26;
        ans+=s[k];
        n=n/26;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    int columnNumber;
    cin>>columnNumber;
    cout<<convertToTitle(columnNumber)<<endl;
    return 0;
}
