#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=10,t,s=0;
    cin>>n;
        while(n!=0){
            t=n%10;
            s=s + (t*i);
            n=n/10;
            i--;
        }

    if(s%11==0){
        cout<<"Legal ISBN"<<endl;
    }
    else{
        cout<<"Illegal ISBN"<<endl;
    }
    return 0;
}
