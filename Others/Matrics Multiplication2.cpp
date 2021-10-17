#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,m,n,p,q,e,f,sum,arr1[10][10],arr2[10][10],arr3[10][10];
    cout<<"Enter the dimension of an array: "<<endl;
    cin>>m>>n;
    cout<<"Enter the elements of 1st array: "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>e;
            arr1[i][j]=e;
           cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the dimension of 2nd array: "<<endl;
    cin>>p>>q;
    cout<<"Enter the elements of 2nd array: "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>f;
            arr2[i][j]=f;
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    if(n!=p){
        cout<<"Multiplication is not possible"<<endl;
    }
    else{
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            sum=0;
            for(k=0;k<p;k++){
                sum=sum + arr1[i][k]*arr2[k][j];
                //cout<<sum<<endl;
            }
        arr3[i][j]=sum;
          cout<<arr3[i][j]<<" ";
        }
          cout<<endl;
    }
    }
//    for(int i=0;i<m;i++)
//    {
//        for(int j=0;j<q;j++)
//        {
//
//            cout<<arr3[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    return 0;
}
