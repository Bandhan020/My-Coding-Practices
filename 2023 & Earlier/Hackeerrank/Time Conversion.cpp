#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    int i,t,j,n, h=0;
    char c;
    if(s[s.size()-2]!='A'){
        for(i=0;i<2;i++){
            h=h*10+s[i]-'0';
        }
        if(h==12){
            n=h;
        }
        else{
        n=12+h;
        }
        int cont=0;
        while(n!=0){
            c=n%10;
            n/=10;
            if(cont==0){
                s[1]=c+'0';
            }
            else{
                s[0]=c+'0';
            }
            cont++;
        }
    }
    else{
        for(i=0;i<2;i++){
            h=h*10+s[i]-'0';
        }
        if(h==12){
            s[1]='0';
            s[0]='0';
        }
    }

    return s;
}


int main()
{
    int i;
    string str1,str2=" ";
    cin>>str1;
    str2=timeConversion(str1);
    for(int i=0;i<str2.size()-2;i++) {
        cout<<str2[i];
    }
    cout<<endl;
}

