class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fastp=0,slowp=0;
        fastp=nums[nums[fastp]];
        slowp=nums[slowp];
        while(fastp!=slowp){
            fastp=nums[nums[fastp]];
            slowp=nums[slowp];
        }
        fastp=0;
        while(fastp!=slowp){
            fastp=nums[fastp];
            slowp=nums[slowp];
        }   
        return fastp;
    }
};