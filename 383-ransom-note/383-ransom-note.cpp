class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ch1[26]={0},ch2[26]={0};
        for(char c:magazine)ch1[c-'a']++;
        for(char c:ransomNote)ch2[c-'a']++;
        for(int i=0;i<26;i++){
            if(ch2[i]>0){
                if(ch2[i]>ch1[i])return false;
            }
        }
        return true;
    }
};