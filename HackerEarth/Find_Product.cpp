#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int N,A[1000],i;
    long int answer=1;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>A[i];
    }
    for(i=0;i<N;i++){
        answer=(answer*A[i])%(1000000000+7);
    }
    cout<<answer;
    return 0;
}
