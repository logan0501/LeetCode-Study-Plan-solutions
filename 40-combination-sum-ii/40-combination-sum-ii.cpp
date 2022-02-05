class Solution {
public:
    vector<vector<int>> combs;
    vector<int> comb;
    void backtrack(vector<int> &nums,int start,int target){
        if(target==0){
            combs.push_back(comb);
            return;
        }
        if(target<0)return;
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1])continue;
            comb.push_back(nums[i]);
            backtrack(nums,i+1,target-nums[i]);
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        backtrack(nums,0,target);
        return combs;
    }
};