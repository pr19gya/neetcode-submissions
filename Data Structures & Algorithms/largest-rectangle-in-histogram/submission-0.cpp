class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        stack<pair<int, int>> stack;
        int maxArea = 0;
        

        for(int i = 0; i < heights.size() ; i++) {
            int start = i;
            while(!stack.empty() && heights[i] < stack.top().second) {
                pair<int, int> top = stack.top();
                int index = top.first;
                int height = top.second;
                maxArea = max (maxArea, height * (i - index));
                start = index;
                stack.pop();
            }
            stack.push({start, heights[i]});
        }

        while( !stack.empty()) {
            int index = stack.top().first;
            int height = stack.top().second;
            maxArea = max(maxArea, height * (static_cast<int>(heights.size()) - index));
            stack.pop();
        }

        return maxArea;
    }
};
