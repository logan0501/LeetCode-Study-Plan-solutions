class Solution {
public:

    void helper(int i,vector<int> &nums,vector<vector<int>> &res){
        if(i==nums.size()){res.push_back(nums);return;}
        unordered_set<int> st;
        for(int j=i;j<nums.size();j++){
            if(st.count(nums[j])==1)continue;
            st.insert(nums[j]);
            swap(nums[i],nums[j]);
            helper(i+1,nums,res);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        helper(0,nums,res);
        return res;
    }
};