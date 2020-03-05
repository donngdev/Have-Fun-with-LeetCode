// push O(n)
// pop  O(1)

class CQueue {
public:
    CQueue() {
    }
    
    void appendTail(int value) {
      while (!s1.empty())
      {
        s2.push(s1.top());
        s1.pop();
      }
      s1.push(value);
      while (!s2.empty())
      {
        s1.push(s2.top());
        s2.pop();
      }
    }
    
    int deleteHead() {
      if (s1.empty())
        return -1;
      int top_val = s1.top();
      s1.pop();
      return top_val;
    }
private:
  stack<int> s1;
  stack<int> s2;
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */