class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left=0;
        if(nums.size()==0)return 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val)continue;
            else{
                nums[left++]=nums[i];
            }
        }
        return left;
    }
};