#include <bits/stdc++.h>
using namespace std;

void revers_string(char a[],int i){
    if(a[i]!='\0'){
        revers_string(a,i+1);
        cout<<a[i];

    }
    return;
}
int main()
{
    char a[100];
    cin>>a;
    revers_string(a,0);
    return 0;
}
