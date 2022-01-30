class Solution {
public:
    int helper(int n,int dp[]){
        if(n<=1)return n;
        if(dp[n]!=-1)return dp[n];
        return dp[n]=helper(n-1,dp)+helper(n-2,dp);
    }
    int fib(int n) {
        int dp[31];
        memset(dp,-1,sizeof(dp));
        return helper(n,dp);
    }
};