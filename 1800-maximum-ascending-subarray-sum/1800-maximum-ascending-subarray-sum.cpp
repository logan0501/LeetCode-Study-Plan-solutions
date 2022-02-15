class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxval=INT_MIN,sum=nums[0];
        for(int i=1;i<nums.size();i++){
            cout<<nums[i];
            if(nums[i]>nums[i-1])sum+=nums[i];
            else{
                maxval=max(maxval,sum);
                sum=nums[i];
            }
        }
        maxval=max(maxval,sum);
        return maxval;
    }
};