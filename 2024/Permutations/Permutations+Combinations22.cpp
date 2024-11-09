#include <iostream>
#include <vector>
using namespace std;


void combinations(int pos,vector<int>&v,vector<int>&path,int k){
    if(k==0){
        for(auto it:path){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }


    if(pos==v.size()){
        return;
    }

    for(int i=pos;i<v.size();i++){
        path.push_back(v[i]);
        combinations(i+1,v,path,k-1);
        path.pop_back();
    }
}


void permutations(vector<int>&v,vector<int>&path,vector<bool>&visited,int k){
     if(k==0){
        for(auto it:path){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=0;i<v.size();i++){
        if(visited[i]==false){
            path.push_back(v[i]);
            visited[i]=true;
            permutations(v,path,visited,k-1);
            path.pop_back();
            visited[i]=false;
        }
    }
}

int main()
{
    vector<int>v{1,2,3};
    vector<int>path;
    //combinations(0,v,path,2);
    vector<bool>visited(v.size(),false);
    permutations(v,path,visited,2);
    return 0;
}
