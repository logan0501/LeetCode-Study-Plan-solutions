class Solution {
public:
    bool dfsHelper(vector<int> g[],int src,int dest,bool *visited){
        if(src==dest)return true;
        if(visited[src])return false;
        visited[src]=true;
        for(auto nbr:g[src]){
            if(dfsHelper(g,nbr,dest,visited))return true;
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> g[n];
        bool *visited=new bool[n]{false};
        for(auto v:edges){
            g[v[0]].push_back(v[1]);
            g[v[1]].push_back(v[0]);
        }

        return dfsHelper(g,source,destination,visited);
        
    }
};