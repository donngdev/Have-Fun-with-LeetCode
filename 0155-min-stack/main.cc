
// Time complexity:
// push(): O(1)
// pop(): O(1)
// top(): O(1)
// getMin(): O(1)

// Space complexity: O(n)
// Use 'record' to record the minimum value in the stack.
// For example: normal stack: 3 2 5 1 0 -2
//                    record: 3 2 2 1 0 -2
// If the normal stack executes pop(), record pop() too.
// The minimum value is stored at the top of the "record".
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack()
    {
      normal_stack = new vector<int>();
      record = new vector<int>();    
    }
    
    void push(int x)
    {
      normal_stack->push_back(x);
      if (record->size() == 0)
        record->push_back(x);
      else
        record->push_back(min(record->back(), x)); // It is simple :)
    }
    
    void pop()
    {
      assert(normal_stack->size() > 0);
      normal_stack->pop_back();
      record->pop_back();
    }
    
    int top()
    {
      assert(normal_stack->size() > 0);
      return normal_stack->back();
    }
    
    int getMin()
    {
      assert(normal_stack->size() > 0);
      return record->back();
    }
 private:
  vector<int>* normal_stack;
  vector<int>* record;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */