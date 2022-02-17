class Solution {
public:
    int longestPalindrome(string s) {
        int res=0;
        int hash[128]={0};
        for(char c:s)hash[c]++;
        for(int i=0;i<128;i++){
            res+=hash[i]/2*2;
            if(hash[i]%2==1 && res%2==0)res++;
        }
        return res;
    }
};