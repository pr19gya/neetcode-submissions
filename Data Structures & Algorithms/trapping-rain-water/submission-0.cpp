class Solution {
public:
    int trap(vector<int>& height) {
        int result=0;
        int leftMax=0, rightMax=0;
        int l=0,r=height.size()-1;

        while(l<r){
            if(height[l]<=height[r]){
                if(leftMax<=height[l])leftMax = height[l];
                else{
                    result += leftMax-height[l];
                }
                l++;
            }
            else{
                if(rightMax<=height[r])rightMax = height[r];
                else{
                    result += rightMax - height[r];
                }
                r--;
            }
        }

        return result;
    }
};
