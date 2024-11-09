#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
        map<char,int>roman;
        roman.insert(pair<char, int>('I',1));
        roman.insert(pair<char, int>('V',5));
        roman.insert(pair<char, int>('X',10));
        roman.insert(pair<char, int>('L',50));
        roman.insert(pair<char, int>('C',100));
        roman.insert(pair<char, int>('D',500));
        roman.insert(pair<char, int>('M',1000));
        int size=s.size();
        int ans=0;
        for(int i=size-1;i>=0;i--){
            if(i>0 && (roman[s[i]]>roman[s[i-1]])){
                ans=ans+(roman[s[i]]-roman[s[i-1]]);
                i--;
            }
            else{
                ans=ans+roman[s[i]];
            }
        }
        return ans;
    }


int main()
{
    string s;
    cin>>s;
    cout<<romanToInt(s)<<endl;
    return 0;
}