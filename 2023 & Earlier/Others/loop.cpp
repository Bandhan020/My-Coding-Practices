#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    for(i=1,j=9;i<=20;i++){

        if(i<=10)
            cout<<i<<" ";
            if(i==10){
                cout<<endl;
            }
        }

        else{
            cout<<j<<" ";
            if(i==20){
                cout<<endl;
            }
            j--;
        }
    }
    return 0;
}
