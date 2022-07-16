class Solution {
public:
int f(int i,int target,vector<int> &nums){
    if(i==0){
        if(nums[0]==0 && target==0)return 2;
        if(nums[0]+target==0  || nums[0]-target==0){return 1;}
        else return 0;
    }
  
    int neg = f(i-1,target-nums[i],nums);
    int pos = f(i-1,target+nums[i],nums);
    return neg+pos;
}
int findTargetSumWays(vector<int>& nums, int target) {
    return f(nums.size()-1,-target,nums);
}
};