class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
             int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int,int>> q,ch;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        
        int t=0;
        
        while(!q.empty() || !ch.empty()){
            
            while(!q.empty()){
                pair<int,int> p = q.front();
                q.pop();
                
                if(p.second+1<m && grid[p.first][p.second + 1]==1){
                    ch.push({p.first,p.second+1});
                    grid[p.first][p.second + 1] = 2;
                }
                if(p.second-1>=0 && grid[p.first][p.second - 1]==1){
                    ch.push({p.first,p.second-1});
                    grid[p.first][p.second - 1] = 2;
                }
                if(p.first+1<n && grid[p.first+1][p.second]==1){
                    ch.push({p.first+1,p.second});
                    grid[p.first+1][p.second] = 2;
                }
                if(p.first-1>=0 && grid[p.first-1][p.second]==1){
                    ch.push({p.first-1,p.second});
                    grid[p.first-1][p.second] = 2;
                }
            }
            
            queue<pair<int,int>> temp;
            q = ch;
            ch = temp;
            
            if(!q.empty()) t++;
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return t;  
    }
};