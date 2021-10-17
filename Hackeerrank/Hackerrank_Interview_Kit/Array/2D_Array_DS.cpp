#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,arr[6][6],mx=-1111111111,sum;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<=3;i++){
        for(j=0;j<=3;j++){
            sum=0;
            n=i;
            while(n!=i+3){
                for(m=j;m<=j+2;m++){
                    if(n==i+1 && (m==j || m==j+2)){
                        continue;
                    }
                    else{
                    sum=sum+arr[n][m];
                    }
                }
                n++;
            }
            if(sum>mx){
                mx=sum;
            }
        }
    }
    cout<<mx<<endl;
    return 0;
}
