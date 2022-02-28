class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int len = nums.size(), i = 0, j;
        while (i < len) {
            try{
                         j = i + 1;
            while (j < len && nums[j]==nums[j-1] +1) j++;
            res.push_back(to_string(nums[i]) + (j - i > 1 ? "->" + to_string(nums[j - 1]) : ""));
            i = j;   
            }catch(...){
                cout<<nums[i]<<nums[i-1];
            }

        }
        return res;
    }
};