class Solution {
public:
    int mod = 1e9+7;
    int dfs(int i,int j,int mxm,int m,int n, vector<vector<vector<int>>> &dp){
        if(i==m || j==n || i<0 || j<0)return 1;
        if(mxm==0)return 0;
        long long count=0;
        int x[] ={-1,1,0,0};
        int y[]={0,0,1,-1};
        if(dp[i][j][mxm]!=-1)return dp[i][j][mxm];
        for(int k=0;k<4;k++){
            int xx = x[k]+i;
            int yy = y[k]+j;
            count+=dfs(xx,yy,mxm-1,m,n,dp)%mod;
        }
        return dp[i][j][mxm]= count%mod;
        
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn)     {
        vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int>(maxMove+1,-1)));
        
        return dfs(startRow,startColumn,maxMove,m,n,dp);
    }
};