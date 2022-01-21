class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_set<int> uset(v.begin(),v.end());
        // return uset.size()!=v.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-1; i++) if(nums[i] == nums[i+1]) return true;
        return false;
    }
};