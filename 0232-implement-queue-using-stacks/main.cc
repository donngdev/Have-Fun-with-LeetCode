// Time complexity:
// push : O(1)
// pop  : O(n)
// peek : O(n)

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue()
    {
      In = new stack<int>();
      Out = new stack<int>();
    }
    
    /** Push element x to the back of queue. */
    void push(int x)
    {
      In->push(x);    
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop()
    {
      assert(!Out->empty() || !In->empty());
      if (Out->empty())
      {
        while (!In->empty())
        {
          Out->push(In->top());
          In->pop();
        }
      }
      int e = Out->top();
      Out->pop();
      return e;
    }
    
    /** Get the front element. */
    int peek()
    {
      assert(!Out->empty() || !In->empty());
      if (Out->empty())
      {
        while (!In->empty())
        {
          Out->push(In->top());
          In->pop();
        }
      }
      return Out->top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty()
    {
      return Out->empty() ? In->empty() : false;
    }
 private:
  stack<int>* In;
  stack<int>* Out;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */