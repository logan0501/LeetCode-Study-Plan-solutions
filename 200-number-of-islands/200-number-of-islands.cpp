class Solution {
public:
    void explore(vector<vector<char>>& grid,vector<vector<int>> &visited,int r,int c,int m,int n)     {      
        visited[r][c]=true;
      
        int dx[]={1,-1,0,0};
        int dy[]={0,0,-1,1};
        for(int k=0;k<4;k++){
            int nx=r+dx[k];
            int ny=c+dy[k];
            if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]=='1' && !visited[nx][ny]){
                explore(grid,visited,nx,ny,m,n);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int count=0;
        vector<vector<int>> visited(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            if(grid[i][j]=='1' && !visited[i][j])explore(grid,visited,i,j,m,n),count++;
            }
        }
        return count;
    }
};