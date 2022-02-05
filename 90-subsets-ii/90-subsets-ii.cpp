class Solution {
public:
    vector<vector<int>> powerset;
    vector<int> subset;
    void backtrack(vector<int> &nums,int start){
        powerset.push_back(subset);
        for(int i =start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1])continue;
            subset.push_back(nums[i]);
            backtrack(nums,i+1);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        backtrack(nums,0);
        return powerset;
    }
};