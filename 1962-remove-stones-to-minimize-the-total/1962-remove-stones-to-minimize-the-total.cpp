class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int sum = 0;
        priority_queue<int> heap(piles.begin(),piles.end());
        while(k--){
            int topp = heap.top();heap.pop();
            topp-=floor(topp/2);
            heap.push(topp);
        }
        while(heap.size()){
            sum+=heap.top();heap.pop();
        }
        return sum;
    }
};