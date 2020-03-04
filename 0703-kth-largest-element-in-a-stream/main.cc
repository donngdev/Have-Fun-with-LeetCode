#include <iostream>
#include <vector>
#include <cassert>
#include <set>

using namespace std;

// Use multiset ----> Priority Queue

class KthLargest {
public:
    KthLargest(int k, vector<int>& nums)
    {
      this->k = k;
      for (int e : nums)
        add(e);
    }
    
    int add(int val)
    {
      if (min_heap.size() < k)
        min_heap.insert(val);
      else
      {
        if (val >= *min_heap.begin())
        {
          min_heap.erase(min_heap.begin());
          min_heap.insert(val);
        }
      }
      return *min_heap.begin();
    }

private:
  multiset<int> min_heap;
  int k;
};


/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

int main()
{
  vector<int> nums = {};
  int k = 3;
  KthLargest* kthLargest = new KthLargest(k, nums);
  cout << kthLargest->add(1) << endl;
  cout << kthLargest->add(1) << endl;
  cout << kthLargest->add(1) << endl;
  cout << kthLargest->add(1) << endl;
  cout << kthLargest->add(1) << endl;
  cout << kthLargest->add(1) << endl;
  cout << kthLargest->add(3) << endl;
  cout << kthLargest->add(3) << endl;
  return 0;
}
