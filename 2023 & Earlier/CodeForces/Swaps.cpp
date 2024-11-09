#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,i;
    cin>>T;
    for(i=0;i<T;i++){
        cin>>N;
        int x[N];
        int y[N];
        for(int j=0;j<N;j++){
            cin>>x[j];
        }
        for(int j=0;j<N;j++){
            cin>>y[j];
        }
        int s1=0,s2=0,s=0;
        for(int j=0;j<N;j++){
            if(x[j]<y[0]){
                break;
            }
            else{
                s1++;
            }
            if(y[j]>x[0]){
                break;
            }
            else{
                s2++;
            }
        }
        if(s1<s2){
            cout<<s1<<endl;
        }
        else{
            cout<<s2<<endl;
        }
    }
    return 0;
}
