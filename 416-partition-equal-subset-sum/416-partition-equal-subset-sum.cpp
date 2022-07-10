class Solution {
public:
bool canPartition(vector<int>& nums) {
     int n=nums.size();
     int sum=accumulate(nums.begin(),nums.end(),0);
     if(sum%2)return false;
     int k=sum/2;
     vector<vector<bool>> dp(n,vector<bool>(k+1,0));
     for(int i=0;i<n;i++)dp[i][0] = 1;
     if(nums[0]<=k)dp[0][nums[0]]=1;
     for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){    
            int nottaken = dp[i-1][j];
            int taken=false;
            if(nums[i]<=j)taken=dp[i-1][j-nums[i]];
            dp[i][j]=nottaken|taken;
        }
     }
     return dp[n-1][k];  
}
};