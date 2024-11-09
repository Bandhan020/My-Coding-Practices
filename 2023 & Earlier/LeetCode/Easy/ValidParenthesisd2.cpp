#include <bits/stdc++.h>
using namespace std;


 bool isValid(string s) {
    if(s.size() & 1){
        return false;
    }
    stack<int>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if(!st.empty()){
            char c;
            c=st.top();
            st.pop();
            if((s[i]==')' && c=='(') || (s[i]=='}' && c=='{') || (s[i]==']' && c=='[')){
                continue;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
        
        

    }
}
int main()
{
    string s;
    cin>>s;
    if(isValid(s)==true){
        cout<<"true"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}