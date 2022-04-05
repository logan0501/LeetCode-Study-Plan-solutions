class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> hash;
        priority_queue<pair<int,char>> heap;
        string res="";
        for(auto a:s)hash[a]++;
        for(auto a:hash)heap.push({a.second,a.first});
        while(heap.size()){
            auto topp = heap.top();heap.pop();
            res+=string(topp.first,topp.second);
        }
        return res;
    }
};