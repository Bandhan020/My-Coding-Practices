#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int i,j,s=a.size();
    int mn=100000,mn_count=0,f=0;
    int cnt[123];
    memset(cnt,0,sizeof(cnt));

    for(j=0;j<s;j++){
        cnt[a[j]]++;
    }
    for(j=0;j<s;j++){
        if(cnt[a[j]]<mn){
            mn=cnt[a[j]];
        }
    }

   for(j='a';j<='z';j++){
        if(cnt[a[j]]!=0){
            if(cnt[a[j]]>mn){
                if(cnt[a[j]]-mn==1){
                    mn_count++;
                }
                else{
                    f=1;
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
   }

   if(f==0){
    if(mn_count>1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
   }

    return 0;
}


