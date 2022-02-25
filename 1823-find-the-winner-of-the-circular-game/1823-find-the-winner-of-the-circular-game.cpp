class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1;i<=n;i++) q.push(i); // initalising the queue
        
        while(q.size()>1) // breaks when only 1 element i.e the answer is present
        {
            for(int i=1;i<k;i++) // performs k-1 iterations, pushing the element to the back.
            {
                q.push(q.front());
                q.pop();
            }
            q.pop(); // removes the element to be deleted from the queue
        }
		
        return q.front();

    }
};