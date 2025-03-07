class MinStack {
public:

    vector<int> st;
    stack<int> minst;
    
    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
        if(minst.empty()){
            minst.push(val);
        }
        else{
            if(minst.top()>=val){
                minst.push(val);
            }
        }
    }
    
    void pop() {
        if(st.back()!=minst.top()){
            st.pop_back();
        }
        else{
            st.pop_back();
            minst.pop();
        }
        
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return minst.top();
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