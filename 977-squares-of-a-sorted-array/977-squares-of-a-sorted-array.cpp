class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        for(auto &a:nums)a=abs(a);
        int i=0,j=nums.size()-1;
        for(int k=j;k>=0;k--){
            if(nums[j]>nums[i]){res[k]=nums[j]*nums[j--];}
            else {res[k]=nums[i]*nums[i++];}
        }
        return res;
    }
};