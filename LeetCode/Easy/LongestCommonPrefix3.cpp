#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string temp="";
    string ans="";
    temp=strs[0];
    int i,j;
    for(i=0;i<temp.size();i++){
        for(j=1;j<strs.size();j++){
            if(temp[i]!=strs[j][i]){
                return ans;
            }
        }
        ans=ans+temp[i];
    }

    return ans;
}


int main()
{
    vector<string>s;
    string s1;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s1;
        s.push_back(s1);
    }
    cout<<longestCommonPrefix(s)<<endl;
    return 0;
}