#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;

    int cnt1[122],cnt2[122], ans=0;
    cin>>a>>b;
    int size1=a.size();
    int size2=b.size();
    cout<<a<<"   "<<b<<endl;
    int i;

   for(char j='a';j<='z';j++){
       cnt1[j]=0;
       cnt2[j]=0;
   }


        for(i=0;i<size2;i++){
        cnt2[b[i]]++;
        cout<<b[i]<<endl;
    }

    for(char j='a';j<='z';j++){
            cout<<cnt1[j]<<"  "<<cnt2[j]<<endl;
        ans+=abs(cnt1[j]-cnt2[j]);
    }

    cout<<ans<<endl;
    return 0;
}
