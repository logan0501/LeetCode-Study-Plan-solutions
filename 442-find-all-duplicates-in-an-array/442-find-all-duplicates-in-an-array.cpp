class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int idx = abs(nums[i])-1;
            if(nums[idx]>0)nums[idx]*=-1;
            else res.push_back(abs(nums[i]));
        }
        return res;
    }
};