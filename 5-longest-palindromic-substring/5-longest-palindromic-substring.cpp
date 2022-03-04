class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() == 0) return "";
        int n = s.size();
        int table[n][n];
        memset(table,-1,sizeof(table)); 
        for (int i = 0; i < n; ++i) 
            table[i][i] = 1; 
        int maxLen = 1;
        int start = 0; 
        for (int i = 0; i < n - 1; ++i) { 
            if (s[i] == s[i + 1]) { 
                table[i][i + 1] = 1; 
                start = i;  
                maxLen = 2; 
            } 
        }
        for(int k=3;k<=n;k++){ 
            for(int i=0;i<n - k + 1;i++){
                int j = i + k - 1; 
                if(table[i+1][j-1] == 1 && s[i] == s[j]){
                    table[i][j] = 1;
                    if (k > maxLen) { 
                        start = i; 
                        maxLen = k; 
                    } 
                }
            }
        }
        return s.substr(start, maxLen);
    }
};