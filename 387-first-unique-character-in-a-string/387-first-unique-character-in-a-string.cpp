class Solution {
public:
    int firstUniqChar(string s) {
        int ch[256]={0};
        for(char c:s){
            ch[c-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(ch[s[i]-'a']==1)return i;
        }
        return -1;
    }
};