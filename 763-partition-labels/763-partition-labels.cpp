class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> hash;
        vector<int> res;
        int maxidx=0;
        for(int i=0;i<s.size();i++){
            hash[s[i]]=i;
        }
        int count=1;
        for(int i=0;i<s.size();i++){
           
            if(hash[s[i]]>maxidx){
                maxidx=hash[s[i]];
                
            }
            if(i==maxidx){res.push_back(count);count=0;maxidx=0;}
            count++;
           
        }
        return res;
    }
};