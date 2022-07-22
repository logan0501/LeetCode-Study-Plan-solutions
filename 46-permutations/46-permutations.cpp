class Solution {
public:
    vector<vector<int>> res;
    void helper(int i,vector<int> &nums){
        if(i==nums.size()){
            res.push_back(nums);return;
        }
        for(int k=i;k<nums.size();k++){
            swap(nums[i],nums[k]);
            helper(i+1,nums);
            swap(nums[i],nums[k]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        helper(0,nums);
        return res;
    }
};