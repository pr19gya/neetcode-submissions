class Solution {
public:
    int appendCharacters(string s, string t) {

        int sizeOfS = s.size();
        int sizeOfT = t.size();
        int pointerT = 0;

        for(int i = 0 ; i < sizeOfS ; i++) {
            if(s[i] == t[pointerT]) { 
                pointerT++;
            }
        }

        return sizeOfT - pointerT;

    }
};