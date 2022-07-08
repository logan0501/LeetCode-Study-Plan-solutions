class Solution {
public:
vector<vector<int>> dp;
int helper(int i,int j,vector<vector<int>> &grid){
    if(i==0 && j==0)return grid[i][j];
    if(i<0 || j<0)return INT_MAX;
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j] = grid[i][j]+min(helper(i-1,j,grid),helper(i,j-1,grid));
}
int minPathSum(vector<vector<int>>& grid) {
    int m=grid.size(),n=grid[0].size();
    dp.resize(m,vector<int>(n,-1));
    return helper(m-1,n-1,grid);  
}
};