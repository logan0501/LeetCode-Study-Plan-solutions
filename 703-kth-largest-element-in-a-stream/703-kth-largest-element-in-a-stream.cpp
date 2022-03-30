class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int m_k;
    KthLargest(int k, vector<int>& nums) {
        m_k=k;
        for(auto x:nums)add(x);
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>m_k){
            pq.pop();
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */