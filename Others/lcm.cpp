#include<bits/stdc++.h>
using namespace std;

int main()
{
    int lcm,t,i,j,a[10],b[100];
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a[i];
    }
    for(i=0;i<t;i++){
            j=2;
        while(a[i]!=0){
            if((a[i]/j)==0){
                break;
            }
            if(a[i]%j==0){
                a[i]=a[i]/j;
                b[j]++;
            }
            else{
                j++;
            }
        }
    }

return 0;
}
