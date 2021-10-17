#include <bits/stdc++.h>
using namespace std;
int arr1[100000][8]={0};
int i;

void swapp(int *arr,int s, int e){
    int t;
    t=arr[s];
    arr[s]=arr[e];
    arr[e]=t;
}

void permute(int *arr,int l,int r){
    if(l==r){
        for(int j=0;j<=r;j++){
            arr1[i][j]=arr[j];
        }
    i++;
    }
    else{
       for(int k=l;k<=r;k++){
        swapp(arr,l,k);
        permute(arr,l+1,r);
        swapp(arr,l,k);
       }
    }
}


int main()
{
    int T,N,K,a,b,c,d,f1,f2,f3,fx,fy;
    cin>>T;
    int inflate[8],deflate[8];
    for(a=0;a<T;a++){
        cin>>N>>K;
        inflate[8]={0};
        deflate[8]={0};
        for(b=0;b<N;b++){
            cin>>inflate[b]>>deflate[b];
        }
        int arr[N]={0};
        for(b=0;b<N;b++){
            arr[b]=b;
        }
        i=0;
        permute(arr,0,N-1);
        //int m=1;

//    for(b=0;b<i;b++){
//        for(c=0;c<N;c++){
//            cout<<arr1[b][c]<<"   ";
//        }
//        cout<<"count "<<m<<":"<<endl;
//        m++;
//    }

    for(d=0;d<=55;d++){
        for(b=0;b<i;b++){
                fx=d;
                f1=0;
                f2=0;
                f3=0;
            for(c=0;c<N;c++){
                fx=fx+inflate[arr1[b][c]];
                if(fx>K){
                    f1=1;
                    //cout<<"Break    "<<endl<<endl<<endl;
                    break;
                }
                fy=fx-deflate[arr1[b][c]];
                if(fy<0){
                    f1=1;
                     //cout<<"Break"<<endl<<endl<<endl;
                    break;
                }

//                if(d==15){
//                cout<<"after inflate: "<<fx<<"       initial is "<<d<<endl;
//                cout<<"after deflate: "<<fy<<"      initial is "<<d<<endl<<endl<<endl;
//                }
                fx=fy;

            }
            if(f1!=1){
                f2=1;
                cout<<d<<endl;
                break;
            }
        }
        if(f2==1){
            f3=1;
            break;
        }
    }
    if(f3==0){
        cout<<"-1"<<endl;
    }
    }
    return 0;
}



//input & output
/*
Input:
3
3 100
75 30
45 55
80 95

2 100
65 20
90 30

5 150
35 115
75 105
100 55
45 35
105 75
-

output:
15
-1
25

*/
