#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,score[200000],alice[200000],a[100000],i,j,k,temp;
    for(i=0;i<100000;i++){
        a[i]=0;
    }
    cin>>n>>m;
    for(i=0,k=0;i<n;i++){
        cin>>j;
        if(a[j]==0){
            score[k++]=j;
        }
        a[j]++;
    }
    n=0;
    for(i=0;score[i]!=0;i++){
        n++;
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(score[i]>score[j]){
                temp=score[j];
                score[j]=score[i];
                score[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<score[i]<<" ";
    }

    for(i=0;i<n;i++){
        cin>>alice[i];
        for(j=0;j<m;j++){
            if(alice[i]>score[j]){

            }
            else{

            }
        }
    }

}
