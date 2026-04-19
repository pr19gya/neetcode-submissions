class Solution {
public:
    bool isValid(string s) {

        int n = s.size();
        stack<char>st;

        if(s[0] == '}' || s[0] == ')' || s[0] == ']')return false;

        for (char c : s){
            if (c == '(' || c == '{' || c == '['){
                st.push(c);
            }

            else if (!st.empty() && c == '}' && st.top() == '{') st.pop();

            else if (!st.empty() && c == ')' && st.top() == '(') st.pop();
            
            else if (!st.empty() && c == ']' && st.top() == '[') st.pop();

            else return false;
        }

        if(st.empty()) return true;

        return false;
        
    }
};
