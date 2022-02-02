class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last=nums.size()-1,i;
        for(i=nums.size()-2;i>=0;i--)
            if(nums[i]+i>=last)last=i;
        return last==0;
    }
};