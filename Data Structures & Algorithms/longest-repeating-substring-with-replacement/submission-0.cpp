class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>chars;
        int l=0;
        int maxLen=0;
        int maxFreq=0;
        
        for(int i = 0; i < s.size(); i++){
            chars[s[i]]++;
            maxFreq=max(maxFreq, chars[s[i]]);

            if((i-l+1) - maxFreq > k ){
                chars[s[l]]--;
                l++;
            }

            maxLen= max(maxLen, i-l+1);
        }

        return maxLen;
    }
};
