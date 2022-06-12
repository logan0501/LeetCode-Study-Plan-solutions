class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int res=0,sum=0;
        int i=0,j=0;
        unordered_set<int> uset;
        while(j<nums.size()){
            while(uset.count(nums[j])>0){
                sum-=nums[i];
                uset.erase(nums[i]);
                i++;
            }
            sum+=nums[j];
            uset.insert(nums[j]);
            j++;
            res=max(res,sum);
        }
        return res;
    }
};