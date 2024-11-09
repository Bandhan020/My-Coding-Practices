#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[500][500];
vector<int>vc;

int rec(int i,int Xor){
    //cout<<i<<' '<<n<<' '<<Xor<<endl;
    if(i>=n){
        if(Xor>0){
            return 1;
        }
        else{
            return 0;
        }
    }
    for(int j=0;j<m;j++){
        int x=rec(i+1, Xor^arr[i][j]);
        if(x==1){
             //   cout<<j<<endl;
            vc.push_back(j);
            return 1;
        }
    }

    return 0;


}

int main(){
int i,j;
cin>>n>>m;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
int ans=rec(0,0);
if(ans==1){
        cout<<"TAK\n";
    for(i=vc.size()-1;i>=0;i--){
        cout<<vc[i]+1<<" ";
    }
}
else{
    cout<<"NIE"<<endl;
}


return 0;
}
