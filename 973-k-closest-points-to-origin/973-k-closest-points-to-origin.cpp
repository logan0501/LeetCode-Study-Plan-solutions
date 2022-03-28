class Solution {
public:
vector<vector<int>> kClosest(vector<vector<int>>& P, int k) {
    priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> heap;
    vector<vector<int>> res;
    for(auto &a:P){
        auto p = a;
        heap.push({(int)(pow(p[0],2)+pow(p[1],2)),p[0],p[1]});
    }
    while (k--)
    {
        auto top= heap.top();
        heap.pop();
        res.push_back({top[1],top[2]});
    }
    return res;
    
}
};