#include <bits/stdc++.h>
using namespace std;

int knapsack(int w[],int m,int Max){
    int k[m+1][Max+1];
    int i,wt;
    for(i=0;i<=m;i++){
        for(wt=0;wt<=Max;wt++){
            if(i==0 || wt==0){
                k[i][wt]=0;
                cout<<k[i][wt]<<" ";
            }
            else if(w[i-1]<=wt){
                k[i][wt]=max(k[i-1][wt],w[i-1]+k[i-1][wt-w[i-1]]);
                cout<<k[i][wt]<<" ";
            }
            else{
                k[i][wt]=k[i-1][wt];
                cout<<k[i][wt]<<" ";
            }
        }
        cout<<endl;
    }
    return k[m][Max];
}



int main()
{
    int n,m,i,j;
    int sum;
    cin>>n;
    for(i=0;i<n;i++){
       cin>>m;
       int w[m];
       sum=0;
       for(j=0;j<m;j++){
        cin>>w[j];
        sum=sum+w[j];
       }
       int Max=sum/2;
       int A=knapsack(w,m,Max);
       float Max1=(float)sum/2.00;
       cout<<2*(Max1-(float)A)<<endl;
    }
    return 0;
}
