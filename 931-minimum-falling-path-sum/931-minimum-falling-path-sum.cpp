class Solution {
public:
vector<vector<int>> dp;
int f(int i,int j,vector<vector<int>>& matrix){
    if(j<0 || j>=matrix[0].size())return INT_MAX;
    if(i==0)return matrix[i][j];   
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]=matrix[i][j]+min(f(i-1,j-1,matrix),min(f(i-1,j,matrix),f(i-1,j+1,matrix)));
}
int minFallingPathSum(vector<vector<int>>& matrix) {
    int minv=INT_MAX;
    int m=matrix.size(),n=matrix[0].size();
    dp.resize(m,vector<int>(n,-1));
    for(int i=0;i<matrix[0].size();i++){
       
        minv=min(minv,f(matrix.size()-1,i,matrix));
    }
    return minv;
}
};