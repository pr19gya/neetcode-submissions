class Solution {
public:

    string encode(vector<string>& strs) {
        
        string s="";
        for(int i=0;i<strs.size();i++){
            s+=to_string(strs[i].size()) +',';
        }

        s+='#';

        for(string st : strs){
            s+=st;
        }

        return s;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        vector<int>sizes;
        
        string num="";
        int i=0;
        
        while(s[i]!='#'){
            if(s[i]==','){
                sizes.push_back(stoi(num));
                num="";
            }
            else{
                num+=s[i];
            }
            
            i++;
        }
        i=i+1;
        
        
        for(int size : sizes){
            string p=s.substr(i, size);
            
            ans.push_back(p);
            i+=size;
        }
        return ans;
        


        



    }
};
