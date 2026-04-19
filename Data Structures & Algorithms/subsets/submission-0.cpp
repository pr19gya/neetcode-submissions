class Solution {
public:
    void backtrack(vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp, int index) {
        

        if(index >= nums.size()) {
            ans.push_back(temp);
            return;
        }

        
            temp.push_back(nums[index]);

            backtrack(nums, ans, temp, index + 1);

            temp.pop_back();

            backtrack(nums, ans,temp, index+1);
        


        


    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        backtrack(nums, ans,temp, 0);
        return ans;
    }
};
