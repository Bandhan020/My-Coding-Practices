#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,t,m;
    cin>>t;
    for(k=0;k<t;k++){
        string s1,s2;
        cin>>s1>>s2;
        m=0;
        for(i=0;i<s1.size();i++){
            for(j=0;j<s2.size();j++){
                if(s1[i]==s2[j]){
                    m=1;
                    break;
                }
            }
        }
        if(m==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
