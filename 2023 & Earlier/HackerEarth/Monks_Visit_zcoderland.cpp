#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j,N;
    cin>>T;
    for(j=0;j<T;j++){
        long long int total_cost=0;
        cin>>N;
        long long int C[N],L[N];
        for(i=0;i<N;i++){
            cin>>C[i];
        }
        for(i=0;i<N;i++){
            cin>>L[i];
        }
        long long int min=C[0];
        for(i=0;i<N;i++){
            if(C[i]<min){
                min=C[i];
                total_cost=total_cost+ (long long int)(min*L[i]);
            }
            else{
                total_cost=total_cost+ min*L[i];
            }
        }
        cout<<total_cost<<endl;
    }

    return 0;
}
