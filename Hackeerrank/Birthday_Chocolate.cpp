#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s[100],d,m,i,j,n,number=0,c;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    cin>>d>>m;
    for(i=0;i<=n-m;i++){
            c=0;
        for(j=i;j<i+m;j++){
            c=c+s[j];
        }
        if(c==d){
            number++;
        }
    }
    cout<<number<<endl;
    return 0;
}
