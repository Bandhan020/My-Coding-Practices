#include <bits/stdc++.h>
using namespace std;

int sorted_1st(int arr[], int n){
    int i,c=0;
    for(i=0;i<(n/2)-1;i++){
        if(arr[i]>arr[i+1]){
            c++;
        }
    }
    return c;
}

int sorted_2nd(int arr[], int n){
    int i,c=0;
    for(i=n/2;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            c++;
        }
    }
    return c;
}


int main()
{
    int i,j,n,arr[16],s=1,d=1;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    while(s!=0 || d!=0){
        s=sorted_1st(arr,n);
        d=sorted_2nd(arr,n);
        if(s<=d){
            if(s==0 && d==0){
                if(arr[(n/2)-1]>arr[n/2]){
                    n=n/2;
                    break;
                }
            }
            else if(s==0){
                n=n/2;
                break;
            }
            else{
                for(i=n/2;i<n;i++){
                    arr[i]=0;
                }
                n=n/2;
            }
        }
        else{
            if(d==0){
                n=n/2;
                break;
            }
            else{
                for(i=0,j=n/2;i<n/2;i++,j++){
                    arr[i]=arr[j];
                    arr[j]=0;
                }
                n=n/2;
            }
        }

        }
        cout<<n<<endl;
        return 0;
    }

