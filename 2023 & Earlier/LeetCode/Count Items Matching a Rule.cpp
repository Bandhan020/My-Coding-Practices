#include <bits/stdc++.h>
using namespace std;

 int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int i,j,k,countt=0;
        if(ruleKey=="type"){
            k=0;
        }
        else if(ruleKey=="color"){
            k=1;
        }
        else{
            k=2;
        }
         for(i=0;i<items.size();i++){
                if(items[i][k]==ruleValue){
                    countt++;
                }
        }
        return countt;
    }


int main(){
}
