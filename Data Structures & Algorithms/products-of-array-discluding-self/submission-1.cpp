class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>output;
        int preorder=1;
        for(int num : nums){
            output.push_back(preorder);
            preorder*=num;
        }
        int postorder=1;
        for(int i=nums.size()-1;i>=0;i--){
            output[i]*=postorder;
            postorder*=nums[i];
        }
        return output;
    }
};
