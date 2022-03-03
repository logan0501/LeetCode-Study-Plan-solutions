class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)return true;
        int c=0;
        int hash[26]={0};
        for(char &c:s1)hash[c-'a']++;
        for(char &c:s2)hash[c-'a']--;
        for(auto &i:hash)if(i!=0)return false;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])c++;
            if(c>2)return false;
        }
        if(c==2)return true;
        return false;
    }
};