class MyQueue {
public:
        stack<int> st1;
    MyQueue() {
      

    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() { 
        stack<int> st2;
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        int top = st2.top();
        st2.pop();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return top;
    }
    
    int peek() {
       stack<int> st2;
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        int top = st2.top();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return top;
    }
    
    bool empty() {
        return st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */