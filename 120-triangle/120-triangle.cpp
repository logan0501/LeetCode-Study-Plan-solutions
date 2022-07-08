class Solution {
public:
vector<vector<int>> dp;
int helper(int i,int j,vector<vector<int>> &triangle){
    if(i==triangle.size()-1)return triangle[i][j];
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]=triangle[i][j] +min(helper(i+1,j,triangle),helper(i+1,j+1,triangle));
}
int minimumTotal(vector<vector<int>>& triangle) {
    int n=triangle.size();
    dp.resize(n,vector<int>(n,-1));
    return helper(0,0,triangle);
}
};