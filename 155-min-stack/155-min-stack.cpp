class MinStack {
public:
    
    stack<int> s1;
    stack<int> s2;
    
    MinStack() {
        stack<int> s1;
        stack<int> s2;
    }
    
    void push(int val) {
        s1.push(val);
        if(s2.empty() || s2.top()>=val)
            s2.push(val);
    }
    
    void pop() {
        int val = s1.top();
        s1.pop();
        if(val==s2.top())
            s2.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        if(s2.empty()) return -1;
        else return s2.top();        
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