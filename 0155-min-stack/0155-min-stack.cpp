class MinStack {
public:
    stack<int> yo;
    stack<int> min;
    MinStack() {
        
    }
    void push(int val) {
        yo.push(val);
        if(min.empty() == true) min.push(val);
        else if(val <= min.top()) min.push(val);
    }
    void pop() {
        if(yo.top() == min.top()) min.pop();
        yo.pop();
    }
    
    int top() {
        return yo.top();
    }
    
    int getMin() {
        return min.top();
    };
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */