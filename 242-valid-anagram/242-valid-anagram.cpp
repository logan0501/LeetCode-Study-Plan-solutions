class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[26]={0};
        if(s.size()!=t.size())return false;
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
            hash[t[i]-'a']--;
        }
        for(auto a:hash){
            if(a>0)return false;
        }
        return true;
    }
};