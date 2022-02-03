class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ch[26]={0};
        for(char c:magazine)ch[c-'a']++;
        for(char c:ransomNote)ch[c-'a']--;
        for(int i=0;i<26;i++)
            if(ch[i]<0)return false;
 
        return true;
    }
};