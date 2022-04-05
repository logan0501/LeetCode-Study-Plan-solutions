class Solution {
public:
typedef pair<int,int> pii;

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<pii> g[n+1];
    for(auto &edge:times){
        g[edge[0]].push_back({edge[1],edge[2]});
    }   
    vector<int> dis(n+1,INT_MAX);
    dis[k]=0;
    priority_queue<pii,vector<pii>,greater<pii>> pq; 
    pq.push({0,k});
    while(pq.size()){
        auto topp = pq.top();pq.pop();
        int u =topp.second;
        for(auto &nbr:g[u]){
            int v = nbr.first,w = nbr.second;
            if(dis[v]>dis[u]+w){
                dis[v]=dis[u]+w;
                pq.push({dis[v],v});
            }
        }
    }
    int res = *max_element(dis.begin()+1,dis.end());
    return res!=INT_MAX?res:-1;
}
};