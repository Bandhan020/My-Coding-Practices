#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> sumZero(int n) {
        vector<int>res;
        int i;
        for(i=0;i<=n/2;i++){
            if(n%2!=0 && i==0){
                res.push_back(i);
                continue;
            }
            else if(n%2==0 && i==0){
                continue;
            }
            res.push_back(i);
            res.push_back(-i);
        }
        return res;
    }
    }
};

int main()
{

}
