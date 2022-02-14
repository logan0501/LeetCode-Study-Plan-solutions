class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,mx_c=0;
        for(auto &a:nums){
            if(a==1)count++;
            else{
                mx_c=max(mx_c,count);
                count=0;
            }
        }
        mx_c=max(mx_c,count);
        return mx_c;
    }
};