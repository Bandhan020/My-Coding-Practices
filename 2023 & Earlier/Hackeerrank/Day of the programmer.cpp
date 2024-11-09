#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y,i,j,d;
    cin>>y;
    if(y==1918){
        cout<<"26.09.1918"<<endl;
    }
    else if(y>1918){
        if((y%400==0)|| ((y%4==0)&&((y%100)!=0))){
            d=256-(214+29)-1;
            cout<<d<<".09."<<y<<endl;
        }
        else{
            d=256-(214+28)-1;
            cout<<d<<".09."<<y<<endl;
        }
    }
    else{
        if(y%4==0){
            d=256-(214+29)-1;
            cout<<d<<".09."<<y<<endl;
        }
        else{
            d=256-(214+28)-1;
            cout<<d<<".09."<<y<<endl;
        }
    }

    return 0;
}
