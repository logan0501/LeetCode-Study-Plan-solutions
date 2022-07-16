class Solution {
public:
int f(int i,int target,vector<int> &nums,unordered_map<string,int> &dp){
    if(i==0){
        if(nums[0]==0 && target==0)return 2;
        if(nums[0]+target==0  || nums[0]-target==0){return 1;}
        else return 0;
    }
    string temp = to_string(i)+"-"+to_string(target);
    if(dp.count(temp))return dp[temp];
    int neg = f(i-1,target-nums[i],nums,dp);
    int pos = f(i-1,target+nums[i],nums,dp);
    return dp[temp]=neg+pos;
}
int findTargetSumWays(vector<int>& nums, int target) {
    int n=nums.size();
    unordered_map<string,int> dp;
    return f(nums.size()-1,-target,nums,dp);
}
};