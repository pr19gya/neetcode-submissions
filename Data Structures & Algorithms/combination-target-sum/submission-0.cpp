class Solution {
public:

    void backtrack(vector<int> &nums, vector<vector<int>>& ans, vector<int>& temp, int track, int target, int index) {
        if(track > target || index >= nums.size()) {
            return;
        }
        if(track == target) {
            ans.push_back(temp);
            return;
        }
        

        temp.push_back(nums[index]);
        track += nums[index];
        backtrack(nums, ans, temp, track, target, index);

        temp.pop_back();
        track -= nums[index];
        backtrack(nums, ans, temp, track, target, index + 1); 
    }


    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        backtrack(nums, ans, temp,0, target, 0);

        return ans;
    }
};
