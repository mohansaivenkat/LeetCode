class MinStack {
public:

    vector<int> st;
    int mini=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push_back(val);
            mini=val;
        }
        else{
            st.push_back(val);
            mini=min(mini,val);
        }
    }
    
    void pop() {
        st.pop_back();
        mini=INT_MAX;
        for(auto i : st){
            mini=min(mini,i);
        }
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return mini;
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