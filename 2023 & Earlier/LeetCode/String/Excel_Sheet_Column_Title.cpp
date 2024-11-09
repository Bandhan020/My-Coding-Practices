#include <bits/stdc++.h>
using namespace std;

char letter[26];

void fill_letters(){
    char c='A';
    for(int i=0;i<26;i++){
        letter[i]=c;
        c++;
    }
}

int main()
{
    int n,r,d;
    cin>>n;
    stack<char>title;
    fill_letters();
    if(n<=26){
        cout<<letter[n-1]<<endl;
    }
    else{
        while(n>26){
            r=n%26;
            title.push(letter[r-1]);
            n=n/26;
        }
        title.push(letter[n-1]);
    }

    while(!title.empty()){
        cout<<title.top();
        title.pop();
    }
    cout<<endl;

}
