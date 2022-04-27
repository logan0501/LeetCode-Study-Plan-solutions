class Solution {
public:
int par[1001];
int find(int a){
    if(par[a]<0)return a;
    return par[a]=find(par[a]);
}
void Union(int a,int b){
    par[a]=b;
}
int minCostConnectPoints(vector<vector<int>>& points) {
    int n=points.size();
    for(int i=0;i<n;i++)par[i]=-1;
    vector<pair<int,pair<int,int>>> graph;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int wt=abs(points[i][0] - points[j][0]) + 
                             abs(points[i][1] - points[j][1]);

            graph.push_back({wt,{i,j}});
        }
    }
    sort(graph.begin(),graph.end());
    int sum=0;
    for(int i=0;i<graph.size();i++){
        int s1=graph[i].second.first;
        int s2=graph[i].second.second;
        if(find(s1)!=find(s2)){
            sum+=graph[i].first;
            Union(find(s1),find(s2));
        }
    }
    return sum;

}
};