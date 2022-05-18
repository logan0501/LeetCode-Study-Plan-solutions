class Solution {
public:
    vector<int> disc{0},low{0};
    vector<vector<int>> res;
    unordered_map<int,vector<int>> graph;
    int time=1;
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
     
        for(auto edge:connections){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        disc=vector<int>(n);
        low=vector<int>(n);
        dfs(0,-1);
        return res;
    }
    void dfs(int curr,int prev){
        disc[curr]=low[curr]=time++;
        for(auto nbr:graph[curr]){
            if(disc[nbr]==0){
                dfs(nbr,curr);
                low[curr]=min(low[curr],low[nbr]);
            }else if(nbr!=prev){
                low[curr]=min(low[curr],low[nbr]);
            }
            if(low[nbr]>disc[curr])res.push_back({curr,nbr});
        }
    }
};