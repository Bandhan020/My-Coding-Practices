#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a='a',str[26], word[10];
    int i,j,k,h[26],length,mx=0,unit;
    for(i=0;i<26;i++){
        cin>>h[i];
    }
    for(i=0;i<26 && a<= 'z';i++,a++){
        str[i]=a;
    }
    cin>>word;
    length=strlen(word);
    for(i=0;word[i]!='\0';i++){
        for(j=0;j<26;j++){
            if(word[i]==str[j]){
                if(h[j]>mx){
                    mx=h[j];
                    break;
                }
            }
        }
    }
    unit=mx*length;
    cout<<unit<<endl;
    return 0;
}
