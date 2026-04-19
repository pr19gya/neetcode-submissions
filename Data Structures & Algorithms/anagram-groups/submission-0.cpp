class Solution {
public:
    string getKey(string s){
        string key ="";
        vector<int>count(26);
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
        }

        for(int i=0;i<count.size();i++){
            key+=to_string(count[i]) + "#";
        }

        return key;

    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, vector<string>>m;

        for(string s : strs){
            string key = getKey(s);
            m[key].push_back(s);
            
        }

        for(auto it = m.begin();it!=m.end();it++){
            ans.push_back(it->second);
        }


        return ans;
    }
};
