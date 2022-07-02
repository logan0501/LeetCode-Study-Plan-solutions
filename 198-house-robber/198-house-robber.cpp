class Solution {
public:
int rob(vector<int>& nums) {
    vector<int> dp(nums.size(),-1);
    dp[0]=nums[0];
    for(int i=1;i<nums.size();i++){
        int curr=nums[i];
        if(i>1)curr+=dp[i-2];
        dp[i]=max(curr,dp[i-1]);
    }
    return dp[nums.size()-1];
}
};