class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        unordered_map<string,vector<string>>store;

        for(int i=0;i<strs.size();i++){
            string key = getKey(strs[i]);
            store[key].push_back(strs[i]);
            

        }
        
        for(auto it=store.begin();it!=store.end();it++){
            result.push_back(it->second);
        }


        return result;
    }

    string getKey(string s){
        vector<int>mp(26);

        for(int i=0;i<s.size();i++){
            mp[s[i]-'a']++;
        }

        string ans="";
        for(int i=0;i<mp.size();i++){
            ans+=to_string(mp[i])+"#";
        }

        return ans;

    }
};
