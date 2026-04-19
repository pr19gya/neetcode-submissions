class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>result;
        int preprod=1;
        for(int i=0;i<nums.size();i++){
            result.push_back(preprod);
            preprod*=nums[i];
        }
        int postprod=1;
        for(int i=nums.size()-1;i>=0;i--){
            result[i]*=postprod;
            postprod*=nums[i];
        }
        return result;
    }
};
