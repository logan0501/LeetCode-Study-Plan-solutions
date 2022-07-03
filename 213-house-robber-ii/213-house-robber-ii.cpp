class Solution {
public:
int houseRob(int i,vector<int> &nums,vector<int> &dp){
    if(i<0)return 0;
  
    if(dp[i]!=-1)return dp[i];
    if(i==0)return nums[0];
    return dp[i]=max(nums[i]+houseRob(i-2,nums,dp),houseRob(i-1,nums,dp));
}
int rob(vector<int>& nums) {
    if(nums.size()==1)return nums[0];
    vector<int> dp1(nums.size(),-1),dp2(nums.size(),-1);

    vector<int> v1(nums.begin(),nums.end()-1);
    vector<int> v2(nums.begin()+1,nums.end());

    return max(houseRob(v1.size()-1,v1,dp1),houseRob(v2.size()-1,v2,dp2));
}
};