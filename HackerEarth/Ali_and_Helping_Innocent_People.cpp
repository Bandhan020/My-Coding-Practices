#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int i,l=a.size(),c=0;
    for(i=0;i<l-1;i++){
        if(i==2){
            if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y'){
                c=1;
                break;
            }
            else{
                continue;
            }
        }
        if(i==1 || i==6 || i==5){
            continue;
        }
        if((a[i]+a[i+1])%2!=0){
            c=1;
        }

    }
    if(c==1){
        cout<<"invalid"<<endl;
    }
    else{
        cout<<"valid"<<endl;
    }
    return 0;
}
