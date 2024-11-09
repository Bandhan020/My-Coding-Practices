#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,t,arr[26],status;

    cin>>t;
    for(k=0;k<t;k++){
        string s1,s2;
        cin>>s1>>s2;
        status=0;
        for(i=0;i<26;i++){
            arr[i]=0;
        }
        for(i=0;i<s1.size();i++){
            arr[s1[i]-'a']++;
        }
        for(i=0;i<s2.size();i++){
            if(arr[s2[i]-'a']!=0){
                status=1;
                break;
            }
        }
        if(status==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
