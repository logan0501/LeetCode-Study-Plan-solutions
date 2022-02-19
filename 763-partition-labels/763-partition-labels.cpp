class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> hash(26,0);
        vector<int> res;
        int maxidx=0;
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']=i;
        }
        int count=1;
        for(int i=0;i<s.size();i++){
           
            if(hash[s[i]-'a']>maxidx){
                maxidx=hash[s[i]-'a'];
                
            }
            if(i==maxidx){res.push_back(count);count=0;maxidx=0;}
            count++;
           
        }
        return res;
    }
};