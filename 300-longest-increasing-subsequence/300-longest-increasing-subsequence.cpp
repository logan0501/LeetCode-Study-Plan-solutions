class Solution {
public:

int lengthOfLIS(vector<int>& nums) {
    int n=nums.size();
    vector<int> dp(n+1,1);
    int maxv=INT_MIN;
    for(int i=0;i<nums.size();i++){
        for(int prev=i;prev>=0;prev--){
            if(nums[i]>nums[prev]){
                dp[i]=max(dp[i],1+dp[prev]);
             
            }
        }
        maxv=max(maxv,dp[i]);
    }
    return maxv;
}
};