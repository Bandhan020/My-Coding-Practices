#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    char b[100];
    cin>>a;
    int i=0,j,k,l=a.size(),s=0,e;
    cout<<l<<endl;
    char temp;
    while(i!=l-1){
        if(a[i]==' '){
            e=i-1;
            for(j=s,k=e;j<=e;j++,k--){

                strcpy(b[j],a[k]);
            }
            b[j+1]=' ';
        }
        s=i+1;
        i++;
    }

    cout<<b<<endl;
}
