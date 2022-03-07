class Solution {
public:
vector<vector<int>> res;
void helper(int j,vector<int> nums){
    if(j==nums.size()-1){
        res.push_back(nums);
        return;
    }
    for(int i=j;i<nums.size();i++){
        swap(nums[j],nums[i]);
        helper(j+1,nums);
        swap(nums[j],nums[i]);
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    helper(0,nums);
    return res;
}
};