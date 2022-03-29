class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int,vector<int>,greater<int>> heap;
    for(auto a:nums){
        heap.push(a);
        if(heap.size()>k)heap.pop();
    }
    return heap.top();
    }
};