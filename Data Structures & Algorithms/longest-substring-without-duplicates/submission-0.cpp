class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>chars;
        int maxLen=0;
        int l=0;
        for(int i=0;i<s.size();i++){
            while(chars.find(s[i])!=chars.end()){
                chars.erase(s[l]);
                l++;
            }
            chars.insert(s[i]);
            maxLen=max(maxLen, i-l+1);
        }
        return maxLen;
    }
};
