#include <bits/stdc++.h>
using namespace std;
int k=0;
void permute(string str,int l,int r){
    if(l==r){
        cout<<"Printing: "<<str<<endl;
        return;
    }
    else{
        for(int i=l;i<=r;i++){
            swap(str[l],str[i]);
            cout<<"l="<<l<<"  i="<<i<<"                "<<"swap ( str["<<l<<"], "<<"str["<<i<<"]"<<"           str = "<<str<<endl;
            cout<<"Recursive call: "<<++k<<endl;
            permute(str,l+1,r);
            swap(str[l],str[i]);
        }
  }
}

int main()
{
    string str;
    cin>>str;
    permute(str,0,str.size()-1);
    return 0;

}
