class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left=1,right=1;
        vector<int> res(nums.size(),1);
        for(int i=0;i<nums.size();i++){
            res[i]*=left;
            left*=nums[i];
            res[nums.size()-i-1]*=right;
            right*=nums[nums.size()-i-1];
        }
        return res;
    }
};