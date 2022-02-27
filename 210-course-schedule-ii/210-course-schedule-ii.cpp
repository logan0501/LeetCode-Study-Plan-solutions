class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prereq) {
        vector<int> res;
        vector<int> indeg(n,0);
        vector<vector<int>> graph(n);
        for(auto v:prereq){
            graph[v[1]].push_back(v[0]);
            indeg[v[0]]++;
            cout<<v[1]<<indeg[v[1]];
        }
        queue<int> q;
        for(int i=0;i<n;i++)if(indeg[i]==0)q.push(i);
        while(!q.empty()){
            auto top = q.front();
           
           
            q.pop();
            for(auto u:graph[top]){
                if(--indeg[u]==0)q.push(u);
            }
             res.push_back(top);
        }
        if(res.size()!=n)res.clear();
        return res;
    }
};