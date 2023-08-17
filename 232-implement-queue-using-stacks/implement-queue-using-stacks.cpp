class MyQueue {
stack<int> s;
public:

    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int> s2,s3;
         
        while(s.size()){
            s3.push(s.top());
            s.pop();
        }
       s2.push(x);
       while(s3.size()){
           s2.push(s3.top());
           s3.pop();
       }
        s = s2;
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
        return s.empty();
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