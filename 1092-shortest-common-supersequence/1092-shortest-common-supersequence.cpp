class Solution {
public:
string shortestCommonSupersequence(string s, string t) {
    int n=s.size(),m=t.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    int i=n,j=m;
    string res="";

    while(i>0 && j>0){
        if(s[i-1]==t[j-1]){
            res+=s[i-1];
            i--;
            j--;
        }else{
            if(dp[i-1][j] > dp[i][j-1]){
                res+=s[i-1];
                i--;
            }else{
                res+=t[j-1];
                j--;
            }
        }
    }
    while(i>0){
        res+=s[i-1];
        i--;
    }
    while(j>0){
        res+=t[j-1];
        j--;
    }
    reverse(res.begin(),res.end());
    return res;
}
};