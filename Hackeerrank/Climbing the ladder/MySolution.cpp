#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j=1,t,k,r;
    int scores[200000],alice[200000];
    cin>>n;
    for(i=0,j=0;i<n;i++){
        cin>>t;
        if(j!=0){
           if(t!=scores[j-1]){
            scores[j]=t;
            j++;
        }
        }
        else{
            scores[j]=t;
            j++;
        }
        }


      cin>>m;

    for(i=0;i<m;i++){
        cin>>alice[i];
    }

    for(i=0;i<m;i++){
            r=j;
       for(k=j;k>0;k--){
           if(alice[i]>scores[k-1] && k-1!=0){
            r--;
           }
           else if(alice[i]>scores[k-1] && k-1==0){
            cout<<r<<endl;
            break;
           }
           else if(alice[i]==scores[k-1]){
            r--;
            cout<<r<<endl;
            break;
           }
           else if(alice[i]<scores[k-1]){
            r++;
            cout<<r<<endl;
            break;
           }

            }
        }
        return 0;
    }
