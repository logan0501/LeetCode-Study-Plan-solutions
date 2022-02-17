class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        if(n<3)return 0;
        int mid=INT_MAX,low=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]>mid)return 1;
            if(nums[i]<low)low=nums[i];
            if(nums[i]>low && nums[i]<mid)mid=nums[i];
        }
        return 0;
    }
};