class MyQueue {
public:

    stack<int> st;
    stack<int> tempst;
    int front;

    MyQueue() {
        
    }
    
    void push(int x) {
        if(st.size()==0){
        front=x;
        }
        st.push(x);
    }
    
    int pop() {
       while (st.size() > 1) {
            tempst.push(st.top());
            st.pop();
        }

       
        int popped = st.top();
        st.pop();

        
        if (!tempst.empty()) {
            front = tempst.top();
        }

       
        while (!tempst.empty()) {
            st.push(tempst.top());
            tempst.pop();
        }

        return popped;
    }
    
    int peek() {
        return front;
    }
    
    bool empty() {
        return st.size()==0;
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