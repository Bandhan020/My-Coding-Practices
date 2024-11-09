#include <iostream>
#include <vector>
using namespace std;


void combination(int pos,int k,vector<int>&v,vector<int>&path){
    if(k<0){
        return;
    }
    if(k==0){
        for(auto p:path){
            cout<<p;
        }
        cout<<endl;
    }

    for(int i=pos;i<v.size();i++){
        path.push_back(v[i]);
        combination(i+1,k-1,v,path);
        path.pop_back();
    }
}


void permutation(int k,vector<int>&v,vector<int>&path,vector<int>&visited){
    if(k<0){
        return;
    }
    if(k==0){
        for(auto p:path){
            cout<<p;
        }
        cout<<endl;
    }

    for(int i=0;i<v.size();i++){
        if(visited[i]!=1){
            path.push_back(v[i]);
            visited[i]=1;
            permutation(k-1,v,path,visited);
            path.pop_back();
            visited[i]=0;
        }

    }
}

int main()
{
    vector<int>v{1,2,3,4};
    vector<int>path;
    vector<int>visited(v.size(),0);
    //combination(0,2,v,path);
    permutation(2,v,path,visited);
    return 0;

}
