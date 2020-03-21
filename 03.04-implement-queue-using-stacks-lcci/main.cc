// https://leetcode-cn.com/problems/implement-queue-using-stacks-lcci/

// Time complexity
// push: O(n)
// pop: O(1)
// peek: O(1)
// empty: O(1)

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue()
    {
      while (!s1.empty())
        s1.pop();
      while (!s2.empty())
        s2.pop();
    }
    
    /** Push element x to the back of queue. */
    void push(int x)
    {
      while (!s1.empty())
      {
        s2.push(s1.top());
        s1.pop();
      }
      s1.push(x);
      while (!s2.empty())
      {
        s1.push(s2.top());
        s2.pop();
      }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop()
    {
      assert(!s1.empty());
      int top_val = s1.top();
      s1.pop();
      return top_val;
    }
    
    /** Get the front element. */
    int peek()
    {
      assert(!s1.empty());
      return s1.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty()
    {
      return s1.empty();
    }
 private:
  stack<int> s1;
  stack<int> s2;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */