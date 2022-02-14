class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,l=0,r=0,n=nums.size(),minl=INT_MAX;
        while(r<n){
            sum+=nums[r++];
            while(sum>=target){
                minl=min(minl,r-l);
                sum-=nums[l];
                l++;
            }
        }
        return minl==INT_MAX?0:minl;
    }
};