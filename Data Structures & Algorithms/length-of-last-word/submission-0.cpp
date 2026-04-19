class Solution {
public:
    int lengthOfLastWord(string s) {

        int sizeS = s.length();
        int lastWord = 0;

        for(int i = sizeS - 1; i >= 0 ; i--) {
            if(lastWord == 0 && s[i] == ' ') {
                continue;
            }
            else if(lastWord > 0 && s[i] == ' ' ){
                break;
            }
            else{
                lastWord++;
            }
        }
        
        return lastWord;
    }
};