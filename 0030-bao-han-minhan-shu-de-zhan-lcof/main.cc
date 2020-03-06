// s1 is a normal stack
// s2 is a store  `int a = x > s2.top() ? s2.top() : x;`

// Time complexity: O(1)
// Space complexity: O(n)

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack()
    {
      // s1.clear();
      // s2.clear();
    }
    
    void push(int x)
    {
      s1.push(x);
      if (s2.empty())
        s2.push(x);
      else
      {
        int a = x > s2.top() ? s2.top() : x;
        s2.push(a);
      }
    }
    
    void pop()
    {
      s1.pop();
      s2.pop();
    }
    
    int top()
    {
      return s1.top();
    }
    
    int min()
    {
      return s2.top();
    }
 private:
  stack<int> s1;
  stack<int> s2;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */