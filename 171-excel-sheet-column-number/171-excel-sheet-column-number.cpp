class Solution {
public:
    int titleToNumber(string text) {
        int cnt=0,res=0;
        for(char c:text){
            res=res*26+(c-'A'+1);
            cnt++;
        }
        return res;
    }
};