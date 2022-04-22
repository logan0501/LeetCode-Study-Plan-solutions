class Solution {
public:
vector<int> dp;
int helper(int i,vector<int> freq){
    if(i>=freq.size())return 0;
    if(dp[i]!=-1)return dp[i];
    return dp[i]=max(helper(i+2,freq)+freq[i],helper(i+1,freq));
}
int deleteAndEarn(vector<int> nums) {
     vector<int> freq(*max_element(nums.begin(),nums.end())+1,0);
     for(auto &a:nums){freq[a]+=a;}
     dp.resize(10001,-1);
     return helper(0,freq);  
}
};