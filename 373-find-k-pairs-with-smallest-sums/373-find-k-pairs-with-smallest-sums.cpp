class Solution {
public:
    typedef tuple<int,int,int> mytuple;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    priority_queue<mytuple> heap;
    int idx1 = min(k,(int)nums1.size());
    int idx2 = min(k,(int)nums2.size());
    for(int i=0;i<idx1;i++){
        heap.push({-1*(nums1[i]+nums2[0]),i,0});
    }
    vector<vector<int>> res;
    while(heap.size() && k--){
        auto topp = heap.top();
        int i = get<1>(topp),j = get<2>(topp);
        heap.pop();
        res.push_back({nums1[i],nums2[j]});
        if(j<idx2-1)heap.push({-1*(nums1[i]+nums2[j+1]),i,j+1});

    }
    return res;  
    }
};