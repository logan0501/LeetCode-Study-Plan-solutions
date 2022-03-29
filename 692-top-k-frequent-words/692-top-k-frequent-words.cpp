class Solution {
public:
vector<string> topKFrequent(vector<string>& words, int k) {
    unordered_map<string,int> umap;
    for(auto a:words)umap[a]++;
    vector<string> res;
    priority_queue<pair<int,string>,vector<pair<int,string>>,MyComp> heap;
    for(auto a:umap){
        heap.push({a.second,a.first});
        if(heap.size()>k)heap.pop();
    }

    while(!heap.empty()){
        res.insert(res.begin(),heap.top().second);
        heap.pop();
    }
    return res;
}
class MyComp{
    public:
    bool operator()(const pair<int,string> a,const pair<int,string> b){
        if(a.first != b.first){
            return a.first > b.first;
        }else{
            return a.second < b.second;
        }
    }
};
};