class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        int n=s.size();
        if(n==0)return 0;
        vector<int> hash(256,0);
        int i=0,j=0;
        
        while(i<n && j<n){
            if(hash[s[j]]==0){
                hash[s[j]]=1;
               
                j++;
                maxlen=max(maxlen,j-i);
            }else{
                hash[s[i]]=0;
                i++;
            }
        }
        return maxlen;
    }
};