class Solution {
public:
    int count=0;
    void helper(int i,int j,int m,int n,vector<vector<int>> &grid){
      
        grid[i][j]=0;
        count++;
  
        int x[]={-1,1,0,0};
        int y[]={0,0,-1,1};
      
        for(int k=0;k<4;k++){
            int xx = i+x[k],yy=j+y[k];
            
            if(xx<m && yy<n && xx>=0 && yy>=0 && grid[xx][yy]==1){
              
                helper(xx,yy,m,n,grid);
            }
        }
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxv=0,m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                count=0;
                 helper(i,j,m,n,grid);
                  
                    maxv=max(maxv,count);
                }
            }
        }
        return maxv;
    }
};