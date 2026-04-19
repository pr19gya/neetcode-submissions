class Solution {
public:

    string encode(vector<string>& strs) {
        string send="";
        for(string s : strs){
            send+=to_string(s.size())+",";
        }
        send+="#";
        for(string s : strs){
            send+=s;
        }
        return send;
    }

    vector<string> decode(string s) {
        vector<int>sizes;
        vector<string>ans;
        int i=0;
        while(s[i]!='#'){
            string size;
            while(s[i]!=','){
                size+=s[i];
                i++;
            }
            sizes.push_back(stoi(size));
            i++;
        }
        i++;
        int j=0;
        while(j<sizes.size()){
            string save=s.substr(i,sizes[j]);
            ans.push_back(save);
            i+=sizes[j];
            j++;
        }

        return ans;

    }
};
