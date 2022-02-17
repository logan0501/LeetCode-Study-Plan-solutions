class MinStack {
public:
    stack<int> st;
    int min=INT_MAX;
    
    MinStack() {
        
    }
    
    void push(int val) {
        if(min>=val){
            st.push(min);
            min=val;
        }
        st.push(val);
    }
    
    void pop() {
        if(min==st.top()){
            st.pop();
            min=st.top();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */