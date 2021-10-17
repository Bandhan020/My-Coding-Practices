#include <bits/stdc++.h>
using namespace std;
int ind[34],top[34],bottom[34];

void make_zero(int n,int arr[]){
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
}

int check_winner(int arr[][34],int n){
    int t=0,i,j,t_c,b_c,t_w,b_w;
    int b=0;

    for(j=0;j<n;j++){
        top[arr[j][0]]++;
        bottom[arr[j][n-1]]++;
    }
    t_c=0,t_w=-1,b_c=0,b_w=-1;
    for(j=0;j<n;j++){
        if(top[j]>t_c){
            t_c=top[j];
            t_w=j;
        }
        if(bottom[j]>b_c){
            b_c=bottom[j];
        }
    }
}
//    if(t_c>(n/2)){
//        return t_w;
//    }
//    else{
//        for(i=0;i<n;i++){
//            if(bottom[j]==b_c){
//
//            }
//        }
//    }

void Adjust_array(int n,int c, int arr[][34]){
    int m,i,j,bottom;
    for(i=0;i<n;i++){
        for(j=0;j<ind[i];j++){
            if(arr[i][j]==c){
                if(j!=n-1){
                    for(int k=j;k<n-1;k++){
                        arr[i][k]=arr[i][k+1];
                    }
                }
                ind[i]--;
                break;
            }
        }
    }
}

int main()
{
    int i,j,n,c,arr[34][34];
    cin>>n>>c;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<34;i++){
        ind[i]=n;
        top[i]=0;
        bottom[i]=0;
    }

    Adjust_array(n,1,arr);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }














//    Adjust_array(n,c,arr);
//    for(i=0;i<n;i++){
//        for(j=0;j<ind[i];j++){
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    return 0;
}
