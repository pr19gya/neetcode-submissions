class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

        for(vector<int>num : points) {
            int val = (num[0] * num[0]) + (num[1] * num[1]);
            pq.push({val, num[0], num[1]});
        }

        vector<vector<int>> ans;

        while(k > 0) {
            vector<int> front = pq.top();
            pq.pop();
            ans.push_back({front[1], front[2]});
            k--;
        }

        return ans;
    }
};
