class Solution {
public:
int f(int i,int target,vector<int> &nums){
    if(i==0){
        if(nums[0]==0 && target==0)return 2;
        if(target==0  || nums[0]-target==0){return 1;}
        return 0;
    }
    int notpick = f(i-1,target,nums);
    int pick=0;
    if(target>=nums[i])pick = f(i-1,target-nums[i],nums);

    return pick+notpick;
}
int findTargetSumWays(vector<int>& nums, int target) {
    int n=nums.size();
    int totalSum = accumulate(nums.begin(),nums.end(),0);
    int tempsum = target+totalSum;
    if(tempsum%2==1)return 0;
    if(tempsum<0)return 0;
    int s1=tempsum/2;

    return f(nums.size()-1,s1,nums);
}
};