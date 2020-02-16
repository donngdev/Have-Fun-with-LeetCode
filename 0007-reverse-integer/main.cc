#include <iostream>

using namespace std;

class Solution {
public:
  // Time complexity: O(bits)
  // Space complexity: O(1)
  int reverse(int x)
  {
    int res = 0;
    while (x)
    {
      int bit = x % 10;
      if (res > INT32_MAX / 10 || res == INT32_MAX && bit > 7)
        return 0;
      if (res < INT32_MIN / 10 || res == INT32_MIN && bit < -8)
        return 0;
      res  = (res * 10) + bit;
      x /= 10;
    }
    return res;
  }
};

int main()
{
  
  cout << Solution().reverse(1230) << endl;
  return 0;
}

