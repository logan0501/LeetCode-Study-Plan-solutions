class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> heap;int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                heap.push(matrix[i][j]);
                if(heap.size()>k)heap.pop();
            }      
        }
        return heap.top();
    }
};