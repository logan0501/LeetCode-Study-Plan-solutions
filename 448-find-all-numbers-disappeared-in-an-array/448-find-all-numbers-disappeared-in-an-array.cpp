class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        unordered_set<int> uset(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
            if(uset.find(i)==uset.end())res.push_back(i);
        }
        return res;
    }
};