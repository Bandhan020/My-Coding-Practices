#include <bits/stdc++.h>
using namespace std;

void sorting(int *arr, int s,int e){
    int i,j,temp;
    for(i=s;i<e-1;i++){
        for(j=i;j<e;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int median(int *arr,int position,int d){
    int m;
    m=(2*position+d)/2;
    if(d%2!=0){
        return arr[m];
    }
    else{
        return ((arr[m]+arr[m+1])/2);
    }
}

int main(){
    int n,d,i,j,s,e,m,notice=0;
    cin>>n>>d;
    int *exp;
    exp=new int[n];
    for(i=0;i<n;i++){
        cin>>exp[i];
    }

    for(i=d;i<n;i++){
        s=i-d;
        e=s+d-1;
        sorting(exp,s,e);
        m=median(exp,s,d);
        //cout<<"m = "<<m<<endl;
        if(exp[i]>=(2*m)){
            notice++;
        }
    }
    cout<<notice<<endl;
}
