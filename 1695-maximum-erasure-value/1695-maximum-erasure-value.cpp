class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int res=0,sum=0;
        int i=0;
        unordered_set<int> uset;
        for(int j=0;j<nums.size();j++){
            if(uset.find(nums[j])==uset.end()){
                sum+=nums[j];
                uset.insert(nums[j]);
                continue;
            }else{
                res=max(res,sum);
                while(uset.count(nums[j])>0 && i<j){
                    sum-=nums[i];
                    uset.erase(nums[i]);
                    i++; 
                } 
                sum+=nums[j];
                uset.insert(nums[j]);
            }
           
        }
        res=max(res,sum);
        return res;
    }
};