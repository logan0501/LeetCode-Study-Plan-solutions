class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(uset.find(nums[i])!=uset.end()){
                res=nums[i];
                break;
            }
            uset.insert(nums[i]);
        }
        return res;
    }
};