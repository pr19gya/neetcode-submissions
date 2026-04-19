class Solution {
public:
    bool isAnagram(string s, string t) {
        int size1 = s.length();
        int size2 = t.length();
        if(size1 != size2) {
            return false;
        }
        unordered_map<char, int>countOfS;
        unordered_map<char, int>countOfT;

        for(int i = 0 ; i < size1 ; i++ ) {
            countOfS[s[i]]++;
            countOfT[t[i]]++;
        }

        for( int i = 0 ; i < size1 ; i++ ) {
            if(countOfS[s[i]] != countOfT[s[i]]) {
                return false;
            }
        }

        return true;
    }
};