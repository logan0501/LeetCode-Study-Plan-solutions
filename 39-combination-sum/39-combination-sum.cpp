class Solution {
public:
    vector<vector<int>> combs;
    vector<int> comb;
    void backtrack(vector<int> &nums,int target,int start){
        if(target==0){combs.push_back(comb);return;}
        if(target<0)return;
        for(int i=start;i<nums.size();i++){
            comb.push_back(nums[i]);
            backtrack(nums,target-nums[i],i);
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtrack(candidates,target,0);
        return combs;
    }
};