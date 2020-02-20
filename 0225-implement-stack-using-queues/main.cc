// Time complexity
// push(x): O(n)
// pop()  : O(1)
// top()  : O(1)

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
        q1 = new queue<int>();
    }
    
    /** Push element x onto stack. */
    void push(int x)
    {
      q1->push(x);
      int size = q1->size() - 1;
      for (int i = 0; i < size; i++)
      {
        int e = q1->front();
        q1->pop();
        q1->push(e);
      }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop()
    {
      int val = q1->front();
      q1->pop();
      return val;
    }
    
    /** Get the top element. */
    int top()
    {
       return q1->front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty()
    {
      return q1->empty();
    }
 private:
  queue<int>* q1;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */