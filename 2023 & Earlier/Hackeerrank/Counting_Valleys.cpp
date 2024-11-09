#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,j,k=0,sea=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++){
        if(s[i]=='U'){
            sea++;
            if(sea==0){
                k++;
            }
        }
        else{
            sea--;
        }
    }
    cout<<k<<endl;

    return 0;
}
