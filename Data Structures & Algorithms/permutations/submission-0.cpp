class Solution {
public:
    void backtrack(vector<int>&nums, vector<vector<int>>&ans, vector<bool>&check, vector<int>&temp) {
        if(temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for(int i = 0 ; i < nums.size() ; i++) {
            if(!check[i]) {
                temp.push_back(nums[i]);
                check[i] = true;
                backtrack(nums,ans,check,temp);
                temp.pop_back();
                check[i] = false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> check(nums.size(), false);
        vector<vector<int>> ans;
        vector<int> temp;
        backtrack(nums, ans,check, temp);
        return ans; 
    }

};
