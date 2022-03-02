class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> hash(128,0);
        for(char c:s)hash[c]++;
        for(char c:t)hash[c]--;
        for(int i=0;i<128;i++)if(hash[i]==-1)return char(i);
        return '0';
    }
};