class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> umap;
        priority_queue<int> pq;
        for(int a:arr)umap[a]++;
        for(auto p:umap)pq.push(p.second);
        int count=arr.size();
        int res=0;
        while(count>arr.size()/2){
            cout<<pq.top();
            count-=pq.top();
            pq.pop();
            res++;
        }
        
        return res;
    }
};