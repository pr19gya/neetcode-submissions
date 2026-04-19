class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;

        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        for(auto it=freq.begin();it!=freq.end();it++){
            pq.push({it->second, it->first});

            if(pq.size()>k){
                pq.pop();
            }
        }

        vector<int>ans;
        while(!pq.empty()){
            int element=pq.top().second;
            ans.push_back(element);
            pq.pop();
        }

        return ans;


    }
};
