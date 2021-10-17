#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c;
    for(i=5;i>0;i--){
            n=i;
            for(int m=9;m>=2*i-1;m--){
                cout<<" ";
            }
     for(j=1;j<=2*i-1;j++){
            if(j<=i){
                cout<<n++<<" ";
    if(j==i) --n;
            }
            else{
                cout<<--n<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
