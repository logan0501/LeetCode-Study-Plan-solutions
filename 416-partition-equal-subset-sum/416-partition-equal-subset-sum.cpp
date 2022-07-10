class Solution {
public:
int helper(int n,int target,vector<int> &nums,vector<vector<int>> &dp){
    if(nums[n]==target)return true;
    if(n==0)return nums[0]==target;
    if(dp[n][target]!=-1)return dp[n][target];
    int nottaken = helper(n-1,target,nums,dp);
    int taken = false;
    if(nums[n]<target)taken = helper(n-1,target-nums[n],nums,dp);
    return dp[n][target]= nottaken | taken;
}
bool canPartition(vector<int>& nums) {
     int n=nums.size();
     int sum=accumulate(nums.begin(),nums.end(),0);
     if(sum%2)return false;
     vector<vector<int>> dp(n,vector<int>((sum/2)+1,-1));
     return helper(n-1,sum/2,nums,dp);   
}
};