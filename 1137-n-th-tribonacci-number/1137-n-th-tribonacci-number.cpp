class Solution {
public:
    int tribonacci(int n) {
        long long dp[38]={0};
        dp[1]=dp[2]=1;
        dp[3]=2;
        for(int i=4;i<=n;i++)dp[i]=2*dp[i-1]-dp[i-4];
        return dp[n];
    }
};