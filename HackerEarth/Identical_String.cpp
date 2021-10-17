#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,i;
    string a,b;
    int c[26];
    cin>>T;
    for(i=0;i<T;i++){
        cin>>a>>b;
        int j,k=0,l=a.size();
        for(j=0;j<26;j++){
            c[j]=0;
        }
        for(j=0;j<l;j++){
            c[a[j]-'a']++;
            c[b[j]-'a']--;
        }
        for(j=0;j<26;j++){
            if(c[j]!=0){
                k=1;
                break;
            }
        }
        if(k==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;

}
