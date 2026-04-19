class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                mp[nums[i]]++;
            }
            else{
                mp.insert({nums[i], 1});
            }
        }

        for(auto it= mp.begin() ; it!= mp.end();it++){
            pq.push({it->second, it->first});
            if(pq.size()>k){
                pq.pop();
            }
        }

        vector<int>ans;
        while(!pq.empty()){
            int idx = pq.top().second;
            ans.push_back(idx);
            pq.pop();
        }

        return ans;
    }
};
