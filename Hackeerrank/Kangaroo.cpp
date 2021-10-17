#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,v1,x2,v2,i=0;
    cin>>x1>>v1>>x2>>v2;
    if((x1>x2 && v1>v2)||(x2>x1&&v2>v1)){
        cout<<"NO"<<endl;
    }
    else{
    while(x1!=x2){
        i++;
        x1=x1+v1;
        x2=x2+v2;
        if(i>10){
            cout<<"NO"<<endl;
            break;
        }
    }
    cout<<"YES"<<endl;
    }
    return 0;
}
