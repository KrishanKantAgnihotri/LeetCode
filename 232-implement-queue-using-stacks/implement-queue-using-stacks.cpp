class MyQueue {
stack<int> s;
public:

    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int> s3;
         
        while(s.size()){
            s3.push(s.top());
            s.pop();
        }
       s.push(x);
       while(s3.size()){
           s.push(s3.top());
           s3.pop();
       }
        
    }
    
    int pop() {
        int x = s.top();
        s.pop();
        return x;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.size() == 0;
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