class Solution {
public:
    int f(int i,int j,int m,int n,vector<vector<int>> &dp){
        if(i==1 && j==1)return 1;
        if(i<1 || j<1)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int up = f(i-1,j,m,n,dp);
        int left = f(i,j-1,m,n,dp);
        return dp[i][j]=up+left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return f(m,n,m,n,dp);
    }
};