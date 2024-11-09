class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i,j,maxx=0,sum;
        for(i=0;i<accounts.size();i++){
            sum=0;
            for(j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            if(sum>maxx){
                maxx=sum;
            }
        }
        return maxx;
    }
};
