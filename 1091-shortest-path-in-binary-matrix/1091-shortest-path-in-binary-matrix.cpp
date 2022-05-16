class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int dx[]={-1,0,1,-1,1,-1,0,1};
        int dy[]={-1,-1,-1,0,0,1,1,1};
        queue<vector<int>> q;
        q.push({0,0,1});
        int n=grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1)return -1;
        while(q.size()){
            
            auto top = q.front();q.pop();
            int i=top[0];
            int j=top[1];
            int dist=top[2];
            if(i==n-1 && j==n-1)return dist;
            for(int k=0;k<8;k++){
                    int nx=i+dx[k];
                    int ny=j+dy[k];
                    if(nx>=0 and nx<n and ny>=0 and ny<n and grid[nx][ny]==0){
                        
                        q.push({nx,ny,dist+1});
                        grid[nx][ny]=1;
                    }
                }           
        }

        return -1;
    }
};