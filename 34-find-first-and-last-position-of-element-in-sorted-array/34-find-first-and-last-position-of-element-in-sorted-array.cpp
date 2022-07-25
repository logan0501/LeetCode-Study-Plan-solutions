class Solution {
public:
    int helper1(int l,int h,vector<int> &nums,int target){
    
        while(l<=h){
            int mid = l+(h-l)/2;
            if(target==nums[mid]){
                if(mid==0 || nums[mid]!=nums[mid-1])return mid;
                else h=mid-1;
            }else if(nums[mid]>target){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return -1;
    }
    int helper2(int l,int h,vector<int> &nums,int target){
     
        while(l<=h){
               int mid = l+(h-l)/2;
            if(target==nums[mid]){
                if(mid==nums.size()-1 || nums[mid]!=nums[mid+1])return mid;
                else l=mid+1;
            }else if(nums[mid]>target){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();
        int f=helper1(0,n-1,nums,target);
        int l=helper2(0,n-1,nums,target);
        return {f,l};
    }
};