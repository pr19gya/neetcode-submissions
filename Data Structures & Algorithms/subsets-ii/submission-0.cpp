class Solution {
public:
    void backtrack( vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp, int index) {
        if(index == nums.size()) {
            ans.push_back(temp);
            return;
        }


        temp.push_back(nums[index]);
        backtrack(nums, ans, temp, index + 1);
        temp.pop_back();
        while(index < nums.size() - 1 && nums[index] == nums[index + 1]) {index++;}
        backtrack(nums,ans,temp,index + 1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        backtrack(nums, ans, temp, 0);
        return ans;
    }
};
