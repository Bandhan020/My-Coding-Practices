class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int i,maxx=0;
        vector<bool> result(candies.size());
        for(i=0;i<candies.size();i++){
            if(candies[i]>maxx){
                maxx=candies[i];
            }
        }
         for(i=0;i<candies.size();i++){
            if(maxx-candies[i]<=extraCandies){
                result[i]=1;
            }
            else{
                result[i]=0;
            }
        }
        return result;
    }
};
