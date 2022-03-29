class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> umap;
    for(auto &i:nums)umap[i]++;
    vector<int> res;
    priority_queue<pair<int,int>> heap;
    for(auto a:umap){
       
        heap.push({a.second,a.first});
        if(heap.size() > umap.size()-k)  {
            res.push_back(heap.top().second);
            heap.pop();
        }

    }
    return res;  
    }
};