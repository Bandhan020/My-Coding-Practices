#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    int i =s.size()-1;
    int count=0;
    while(s[i]==' ' && i>=0){
        i--;
    }
    for(;i>=0;i--){
        if(s[i]==' '){
            break;
        }
        count++;
    }
    return count;
}


int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<lengthOfLastWord(s);
    return 0;
}