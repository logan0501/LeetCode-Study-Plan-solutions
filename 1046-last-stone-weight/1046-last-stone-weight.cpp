class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap(stones.begin(),stones.end());
        while(heap.size()>1){
            int a = heap.top();
            heap.pop();
            int b = heap.top();
            heap.pop();
            if(a!=b){
                heap.push(a-b);
            }
        }
        return heap.size()==1?heap.top():0;
        
    }
};