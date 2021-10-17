#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N,A[100000],i,c,k,l,m,sum,max_sum=INT_MIN;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>A[i];
    }
    for(i=0;i<N;i++){
        c=i+2;
        l=i+1;
        sum=A[i];
        while(c<=N-1){
                m=0;
            for(k=l;k<=c;k++){
                sum=sum+A[k];
                m++;
            }
            l=c+1;
            c=l+m;
        }
        if(sum>max_sum){
            max_sum=sum;
        }
    }
    cout<<max_sum<<endl;
    return 0;
}
