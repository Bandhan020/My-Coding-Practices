#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char>st;
    int i;
    for(i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            if(s[i]==')'){
                if(st.top()!='(')
                    return false;
            }
            if(s[i]=='}'){
                if(st.top()!='{')
                    return false;
            }
            if(s[i]==']'){
                if(st.top()!='[')
                    return false;
            }
            st.pop();
        }
    }

        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
}

int main()
{
    string s;
    cin>>s;
    int i;
    cout<<isValid(s)<<endl;
    return 0;
}