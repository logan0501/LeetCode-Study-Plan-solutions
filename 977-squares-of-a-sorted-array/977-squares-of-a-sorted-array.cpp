class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> res(n);
        int index=n-1,l=0,h=n-1;
        while(l<=h){
            int lsq=nums[l]*nums[l];
            int hsq=nums[h]*nums[h];
            if(lsq>hsq){
                res[index--]=lsq;
                l++;
            }else{
                res[index--]=hsq;
                h--;
            }
        }
        return res;
    }
   
};