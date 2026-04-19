class Solution {
public:
    bool isAnagram(string s, string t) {
        int s1=s.size(), s2=t.size();
        if(s1!=s2)return false;
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;

        for(int i=0;i<s1;i++){
            m1[s[i]-'a']++;
            m2[t[i]-'a']++;
        }

        for(int i=0;i<m1.size();i++){
            if(m1[i]!=m2[i])return false;
        }

        return true;
    }
};
