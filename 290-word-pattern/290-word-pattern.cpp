class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int cnt=0;
        vector<string> v;
        for(int i=0;i<s.size();i++){
            string str;
            while(s[i]!=' '&& i<s.size()){
                str.push_back(s[i]);  
                i++;
            }
            cnt++;
            v.push_back(str);
        }
      
        if(cnt!=pattern.size())return false;
        unordered_map<string,char> map;
        unordered_set<char> uset;
        for(int i=0;i<pattern.size();i++){
            if(map.find(v[i])==map.end() && uset.find(pattern[i])==uset.end()){
                uset.insert(pattern[i]);
                map[v[i]]=pattern[i];
            }else{
                if(map[v[i]]!=pattern[i])return false;
            }
        }
        return true;
    }
};