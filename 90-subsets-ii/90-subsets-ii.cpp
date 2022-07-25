class Solution {
public:
set<vector<int>> res;
void f(int i,vector<int> &nums,vector<int> &temp){     
    if(i==nums.size()){
        res.insert(temp);
        return;
    }
   
    temp.push_back(nums[i]);
    f(i+1,nums,temp);
    temp.pop_back();
    f(i+1,nums,temp);
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {  
    vector<int> temp;
    sort(nums.begin(),nums.end());
    f(0,nums,temp);
    vector<vector<int>> ans;
    for(auto a:res)ans.push_back(a);
    return ans;
}
};