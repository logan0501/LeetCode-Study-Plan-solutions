class Solution {
public:
int minFallingPathSum(vector<vector<int>>& matrix) {
    int minv=INT_MAX;
    int m=matrix.size(),n=matrix[0].size();
    vector<vector<int>> dp(m,vector<int>(n,0));
    for(int i=0;i<n;i++)dp[0][i]=matrix[0][i];
  
    for(int i=1;i<m;i++){
       for(int j=0;j<n;j++){
         
            dp[i][j]=matrix[i][j];
            int ld=INT_MAX,rd=INT_MAX;
            if(j>=1)ld=dp[i-1][j-1];
            if(j+1<n)rd=dp[i-1][j+1];
            dp[i][j]+=min(dp[i-1][j],min(ld,rd));
       }
        
    }
    for(int i=0;i<n;i++){
        minv=min(dp[m-1][i],minv);
    }
    return minv;
}
};