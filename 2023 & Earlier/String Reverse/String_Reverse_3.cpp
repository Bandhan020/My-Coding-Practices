#include <bits/stdc++.h>
using namespace std;
int main()

{
    char ch[20];
    int i, len=0;
    cout<<"Enter a string \n";
    gets(ch);
    for(i=0;ch[i]!='\0';i++){
        len++;
    }
    for(;len>=0;len--){
        cout<<ch[len];
    }

    return 0;
}
