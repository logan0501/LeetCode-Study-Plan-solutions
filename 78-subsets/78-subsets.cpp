class Solution {
public:
    vector<vector<int>> powerset;
    vector<int> subset;
    void backtrack(vector<int> &nums,int start){
        powerset.push_back(subset);
        for(int i=start;i<nums.size();i++){
            subset.push_back(nums[i]);
            backtrack(nums,i+1);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums,0);
        return powerset;
    }
};