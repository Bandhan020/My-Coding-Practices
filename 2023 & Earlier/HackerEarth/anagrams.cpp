#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,p;
    cin>>T;
    for(p=0;p<T;p++){
    int cnt1[200],cnt2[200],j,ans=0;
    string a,b;
    cin>>a>>b;
    for(j=0;j<200;j++){
        cnt1[j]=0;
        cnt2[j]=0;
    }
    for(j=0;j<a.size();j++){
        cnt1[a[j]]++;
    }
    for(j=0;j<b.size();j++){
        cnt2[b[j]]++;
    }
    for(char i='a';i<='z';i++){
        if(cnt1[i]!=cnt2[i]){
        ans+=abs(cnt1[i]-cnt2[i]);
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}
