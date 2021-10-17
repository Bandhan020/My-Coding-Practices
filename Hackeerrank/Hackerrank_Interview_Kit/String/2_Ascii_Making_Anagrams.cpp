#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    //cout<<a<<endl<<b<<endl;
    int i,j,s1,s2,ans=0;
    s1=a.size();
    s2=b.size();
    //cout<<s1<<" "<<s2<<endl;
    int cnt1[123],cnt2[123];
    memset(cnt1,0,sizeof(cnt1));
    memset(cnt2,0,sizeof(cnt2));
    //cout<<cnt2[121];
    for(i=0;i<s1;i++){
        cnt1[a[i]]++;
        //cout<<cnt1[a[i]]<<endl;
    }
    for(i=0;i<s2;i++){
        cnt2[b[i]]++;
        //cout<<cnt2[b[i]]<<endl;
    }
    j='a';
    j++;
    //cout<<abs(cnt1[j]-cnt2[j])<<endl;
    //cout<<j<<endl;
  for(j='a';j<='z';j++){
        ans=ans+abs(cnt1[j]-cnt2[j]);
  }

    cout<<ans<<endl;
    return 0;
}
