#include <bits/stdc++.h>
using namespace std;


string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 0) 
        return "";
    
    string ans  = "";
    sort(begin(strs), end(strs));
    for(int i=0;i<strs[i].size();i++){
        cout<<strs[i]<<endl;
    }
    
    string first_String = strs[0];
    string last_String = strs[strs.size()-1];
    
    for(int i = 0; i < first_String.size(); i++)
    {
        if(first_String[i] == last_String[i])
        {
            ans = ans + first_String[i];
        }
        else
        {
            break;
        }
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

