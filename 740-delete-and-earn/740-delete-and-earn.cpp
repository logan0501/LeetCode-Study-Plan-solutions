class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> dp;
        vector<int> freq(*max_element(nums.begin(),nums.end())+1,0);
        for(auto &a:nums){freq[a]+=a;}
        dp.resize(10001,-1);
        dp[0]=freq[0];
        dp[1]=freq[1];
        for(int i=2;i<freq.size();i++){
            dp[i]=max(dp[i-1],dp[i-2]+freq[i]);
        }
        return dp[freq.size()-1];   
    }
};