#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str,rev;
    cin>>str;
    int i,j,n;
    for(i=0;str[i]!='\0';i++){
        n=i;
    }
    n=n+1;
    cout<<n;
    for(i=0,j=n-1;i<n;i++){
        rev[i]=str[j];
    }
    if(rev==str){
        cout<<"palindrome";
    }
    else{
        cout<<"not Palindrome"<<endl;
    }
    return 0;
}
