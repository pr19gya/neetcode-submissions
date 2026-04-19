class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater=0;
        int i=0,j=heights.size()-1;

        while(i<j){
            int quantity = min(heights[i], heights[j]) * (j-i);
            maxWater=max(maxWater, quantity);
            if(heights[j]<heights[i]){
                j--;
            }
            else{
                i++;
            }
        }

        return maxWater;
    }
};
