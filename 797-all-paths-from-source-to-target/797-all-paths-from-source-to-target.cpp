class Solution {
public:
    vector<vector<int>> res;
    vector<int> temp;
    int target;
    void dfs(vector<vector<int>> &graph,int src){
        temp.push_back(src);
        if(src==target)res.push_back(temp);
        else{
            for(int nbr:graph[src])dfs(graph,nbr);
        }
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        target = graph.size()-1;
        dfs(graph,0);
        return res;
    }
};