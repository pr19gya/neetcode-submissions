class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sizeS = s.size();
        int sizeT = t.size();
        int pointer = 0;
        for(int i = 0 ; i < sizeT ; i++){
            if(pointer < sizeS && s[pointer] == t[i]) {
                pointer++;
            }
            
        }
        if(pointer == sizeS) {
            return true;
        }
        return false;
    }
};