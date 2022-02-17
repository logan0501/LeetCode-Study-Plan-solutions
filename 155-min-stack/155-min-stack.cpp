class MinStack {
public:
    vector<pair<int,int>> stack;
    MinStack() {
        
    }
    
    void push(int val) {
        if(stack.empty())stack.push_back({val,val});
        else stack.push_back({val,min(stack.back().second,val)});
    }
    
    void pop() {
        return stack.pop_back();
    }
    
    int top() {
        return stack.back().first;
    }
    
    int getMin() {
        return stack.back().second;
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