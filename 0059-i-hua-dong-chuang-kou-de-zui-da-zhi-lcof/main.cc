#include <iostream>
#include <set> // tree set
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(k)
  vector<int> maxSlidingWindow(vector<int>& nums, int k)
  {
    // The bottom of the multiset is implemented by the red-black tree.
    multiset<int> wnd;
    vector<int> res;
    for (int i = 0; i < nums.size(); ++i)
    {
      if (wnd.size() >= k)
        wnd.erase(wnd.find(nums[i - k])); // O(logn)
      
      wnd.insert(nums[i]);  // O(logn)

      if (wnd.size() >= k)
        res.push_back(*wnd.rbegin());   // O(logn)
    }

    return res;
  }
};


void print_vec(vector<int>& res)
{
  for (int e : res)
    cout << e << " ";
  cout << endl;
}

int main()
{
  vector<int> nums = {1,3,-1,-3,5,3,6,7};
  vector<int> res = Solution().maxSlidingWindow(nums, 3);
  print_vec(res);
  return 0;
}
