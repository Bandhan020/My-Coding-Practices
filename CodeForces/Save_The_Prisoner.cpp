#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,s,i,j,no;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>m>>s;
        no=(m+s-1)%n;
        if(no==0){
            no=n;
            cout<<no<<endl;
        }
        else{
        cout<<no<<endl;
        }
    }
    return 0;

}
