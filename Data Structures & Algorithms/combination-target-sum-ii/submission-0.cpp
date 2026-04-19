class Solution {
public:
    void backtrack(vector<int>& candidates, vector<vector<int>>& ans, vector<int>& temp, int target, int track, int index) {
        if(track == target) {
            ans.push_back(temp);
            return ;
        }
        if(track > target || index == candidates.size()) return;
        

        temp.push_back(candidates[index]);
        track += candidates[index];
        backtrack(candidates, ans, temp, target, track, index + 1);

        temp.pop_back();
         track -= candidates[index];
        while(index < candidates.size() - 1 && candidates[index] == candidates[index+1] ) {index++;}
        backtrack(candidates, ans, temp, target, track, index + 1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, ans, temp, target, 0, 0);

        return ans;
    }
};
