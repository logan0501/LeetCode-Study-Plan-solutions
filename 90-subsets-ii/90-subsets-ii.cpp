class Solution {
public:
vector<vector<int>> res;
void f(int i,vector<int> &nums,vector<int> &temp){     
   res.push_back(temp);
   for(int j=i;j<nums.size();j++){
    if(j!=i && nums[j]==nums[j-1])continue;
    temp.push_back(nums[j]);
    f(j+1,nums,temp);
    temp.pop_back();
   }   
    
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {  
    vector<int> temp;
    sort(nums.begin(),nums.end());
    f(0,nums,temp);
    return res;
}
};