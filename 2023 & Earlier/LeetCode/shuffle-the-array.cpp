class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>reform(2*n);
        int i=0,j=n,k=0;
       while(i<n){
            reform[i]=nums[k];
            i++;
            k++;
            reform[i]=nums[j];
            j++;
            i++;
       }
        return reform;
    }

};















/*
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i = 0;
        vector<int> ans;
        while(i < n){
            ans.push_back(nums[i]) ;
            ans.push_back(nums[i+n]) ;
            i++;
        }
        return ans;
    }
};


/* Method 2

class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] res = new int[2 * n];
        int i = 0;
        int j = n;
        int curr = 0;
        while (i < n) {
            res[curr] = nums[i];
            curr++;
            i++;
            res[curr] = nums[j];
            curr++;
            j++;
        }
        return res;
    }
}

*/
