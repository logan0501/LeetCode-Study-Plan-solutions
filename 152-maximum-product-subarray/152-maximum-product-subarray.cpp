class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int res=nums[0];
        int maxp=res,minp=res;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
               swap(maxp,minp);

            }
            
        maxp=max(nums[i],maxp*nums[i]);
            minp=min(nums[i],minp*nums[i]);
            res=max(res,maxp);
        }
        return res;
    }
};