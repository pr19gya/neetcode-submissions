class Solution {
public:
    bool isPallindrome(string s, int i, int j) {
        while(i < j) {
            if(s[i] != s[j]){
                return false;
            }
           
                i++;
                j--;
            
            
        }
        return true;
    }
    void backtrack(string s, vector<vector<string>> &ans, vector<string> &temp, int index) {
        if(index >= s.length()) {
            ans.push_back(temp);
            return;
        }

        
        for( int j = index ; j < s.length() ; j++) {
            if(isPallindrome(s, index, j)) {
                temp.push_back(s.substr(index, j - index + 1));
                backtrack(s,ans,temp,j + 1);
                temp.pop_back();
            }
        }
    }


    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;

        backtrack(s, ans, temp, 0);

        return ans;
    }
};
