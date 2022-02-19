class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prereq) {
        vector<vector<int>> graph(n);
        vector<int> indegre(n,0);
        for(auto edge:prereq){
            graph[edge[1]].push_back(edge[0]);
            ++indegre[edge[0]];
        }
        queue<int> q;
        for(int i=0;i<n;i++)if(indegre[i]==0)q.push(i);
        int count=0;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            count++;
            for(auto v:graph[u]){
                if(--indegre[v]==0)q.push(v);
            }
        }
        return count==n;
    }
};