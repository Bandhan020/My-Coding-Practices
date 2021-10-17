#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

int lcd(int a, int b, int c){
    int d=(a*b)/c;
    return d;
}

int main()
{
    int n,m,arr[11],b[11],i,j,Lcd,Gcd,c,d,e=0,f;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    j=0;
    Lcd=0;
    Gcd=1;
    while(j!=n){
        int a=arr[j];
        c=gcd(a,Gcd);
        d=lcd(a,Gcd,c);
        Gcd=d;
        j++;
    }
    for(j=2;Gcd<=b[0];j++){
        f=0;
        for(i=0;i<m;i++){
            if(b[i]%Gcd!=0){
                f=1;
            }
        }
        if(f==0){
            e++;
        }
        Gcd=d*j;
    }
    cout<<e<<endl;
    return 0;
}
