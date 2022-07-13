class Solution {
public:
int f(int i,int amount,vector<int> &coins, vector<vector<int>> &dp){
 
    if(i==0){
        if(amount%coins[i]==0)return amount/coins[i];
        else return 1e9;
    }
    if(dp[i][amount]!=-1)return dp[i][amount];
    int notpick = f(i-1,amount,coins,dp);
    int pick = 1e9;
    if(amount>=coins[i])pick = 1+f(i,amount-coins[i],coins,dp);
    return dp[i][amount]=min(notpick,pick);
}
int coinChange(vector<int>& coins, int amount) {
    int n = coins.size();
    vector<vector<int>> dp(n,vector<int>(amount+1,-1));
    int res= f(n-1,amount,coins,dp);
    return res>=1e9?-1:res;
}};