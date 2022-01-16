class Solution {
public:
    int maxSubArray(vector<int>& nums) {
            int maxv=nums[0],res=nums[0];
    for(int i=1;i<nums.size();i++){
       maxv=max(maxv+nums[i],nums[i]);
       res=max(res,maxv);
    }
    return res;
    }
};