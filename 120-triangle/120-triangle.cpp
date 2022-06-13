class Solution {
public:
int minimumTotal(vector<vector<int>>& triangle) {
    int n = triangle.size();
    vector<vector<int>> dp(n,vector<int>(n,0));
    dp[0][0]=triangle[0][0];
    for(int i=1;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j>0){
                if(j!=i)dp[i][j]=triangle[i][j]+min(dp[i-1][j],dp[i-1][j-1]);
                else dp[i][j]=triangle[i][j]+dp[i-1][j-1];
            }
            else dp[i][j]=triangle[i][j]+dp[i-1][j];
        }
    }
    int res=INT_MAX;
    for(int i=0;i<n;i++){
        res=min(res,dp[n-1][i]);
    }  
    
    return res;
}
};