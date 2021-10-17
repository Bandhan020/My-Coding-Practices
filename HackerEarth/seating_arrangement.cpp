#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,i;
    cin>>T;
    char arr[]={'W','M','A','A','M','W'};
    for(i=0;i<T;i++){
    int N,n,f;
    cin>>N;
    n=N/6;
    if(N%6==0){
        if(n%2==0){
            f=N-11;
            cout<<f<<" ";
            cout<<arr[0]<<"S";
        }
        else{
        f=N+(6*n-N)+(6*n-(N-1));
        cout<<f<<" ";
        cout<<arr[0]<<"S";
        }
    }
    else{
        ++n;
        if(n%2==0){
            f=N-(N%6-1)-N%6;
            cout<<f<<" ";
            cout<<arr[(N%6)-1]<<"S";
        }
        else{
        f=N+(6*n-N)+(6*n-(N-1));
        cout<<f<<" ";
        cout<<arr[(N%6)-1]<<"S";
    }
    }
    cout<<endl;
    }

    return 0;
}
