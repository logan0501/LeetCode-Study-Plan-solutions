class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.empty())return res;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
          if (nums[i] > 0) break;
            if (i > 0 and nums[i] == nums[i-1]) continue;
             int l=i+1,r=n-1;
            while(l<r){
                int sum=nums[l]+nums[r]+nums[i];
                if(sum>0)r--;
                else if(sum<0)l++;
                else{
                    res.push_back({nums[i],nums[l],nums[r]});
                    int prevl=nums[l],prevr=nums[r];
                    while(l<r && nums[l]==prevl)l++;
                    while(l<r && nums[r]==prevr)r--;
                }
            }
        }
        return res;

    }
};