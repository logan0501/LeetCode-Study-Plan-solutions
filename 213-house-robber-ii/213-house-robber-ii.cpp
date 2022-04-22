class Solution {
public:

int helper(vector<int> &nums){
    int dp[nums.size()+1];
    dp[0]=nums[0];
    dp[1]=max(nums[0],nums[1]);
    for(int i=2;i<nums.size();i++){
        dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
    }
    return dp[nums.size()-1];
}

int rob(vector<int>& nums) {
    if(nums.empty())return 0;
    if(nums.size()==1)return nums[0];
    if(nums.size()==2)return max(nums[0],nums[1]);
    vector<int> num1(nums.begin()+1,nums.end());
    vector<int> num2(nums.begin(),nums.end()-1);
    return max(helper(num1),helper(num2));
}
};