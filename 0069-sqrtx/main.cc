#include <iostream>
using namespace std;

class Solution {
public:
  // Binary Search
  // Time complexity: O(logn)
  // Space complexity: O(1)
  int mySqrt(int x)
  {
    if (x <= 1)
      return x;

    int l = 1, r = x;
    while (r - l > 1)
    {
      int mid = l + (r - l) / 2;
      if (x / mid < mid)
        r = mid;
      else if (x / mid > mid)
        l = mid;
      else
        return mid;
    }
    return l;
  }
};

int main()
{

  for (int i = 0; i < 100; ++i)
  {
    cout << i << " - " << Solution().mySqrt(i) << endl;
  }
  cout << Solution().mySqrt() << endl;
  return 0;
}