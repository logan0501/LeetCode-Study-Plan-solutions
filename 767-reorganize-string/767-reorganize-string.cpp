class Solution {
public:
    typedef pair<int,int> pii;
    string reorganizeString(string s) {
    unordered_map<char,int> umap;
    string res="";
    for(char &a:s)umap[a]++;
    priority_queue<pii> heap; 
    for(auto a:umap){
        if(a.second > s.size()/2 + s.size()%2)return "";
        heap.push({a.second,a.first});
    }   
    while(heap.size()>1){
        auto top1 = heap.top();heap.pop();
        auto top2 = heap.top();heap.pop();
        res+=top1.second;
        res+=top2.second;
        top1.first--;
        top2.first--;
        if(top1.first > 0)heap.push(top1);
        if(top2.first > 0)heap.push(top2);
    }
    if(heap.size()){
        res+=heap.top().second;
    }
    return res;      
    }
};