class Solution {
public:
    void dfs(vector<vector<int>> &matrix,vector<bool> &visited,int src){
        visited[src]=true;
        for(int j=0;j<matrix[src].size();j++){
            if(!visited[j] && matrix[src][j])dfs(matrix,visited,j);
        }
    }
    int findCircleNum(vector<vector<int>>& matrix) {
        vector<bool> visited(matrix.size(),false);
        int count=0;
        for(int i=0;i<matrix.size();i++){
            if(!visited[i]){
                dfs(matrix,visited,i);
                count++;
            }
        }
        return count;
    }
};