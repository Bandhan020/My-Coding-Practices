#include <bits/stdc++.h>
using namespace std;

struct st{
    string name;
    int age;}S[100];

void sort(int n)
{
    //for(int i=0;i<n;i++) cout<<S[i].name<<' '<<S[i].age<<endl;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(S[j].age>S[j+1].age){
                st temp=S[j];
                S[j]=S[j+1];
                S[j+1]=temp;
            }
        }
    }
}

int main()
{
    string name;
    int n,age,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>name>>age;
        S[i].name=name;
        S[i].age=age;
    }
    sort(n);
    for(i=0;i<n;i++){
        cout<<S[i].name<<" "<<S[i].age<<endl;
    }
    return 0;
}

