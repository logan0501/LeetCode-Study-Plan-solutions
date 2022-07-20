class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<vector<int>> graph(n);      
        vector<int> indeg(n,0);
        for(auto a:p){
            graph[a[1]].push_back(a[0]);
            ++indeg[a[0]];
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indeg[i]==0)q.push(i);
        }
        int c=0;
        while(q.size()){
            int topp = q.front();q.pop();
            c++;
            for(auto nbr:graph[topp]){
                indeg[nbr]--;
                if(indeg[nbr]==0)q.push(nbr);
            }
        }
        cout<<c<<endl;
        return c==n;
    }
};