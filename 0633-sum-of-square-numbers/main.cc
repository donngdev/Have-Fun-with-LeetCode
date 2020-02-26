#include <iostream>
#include <cmath>

using namespace std;


class Solution {
public:
  // Time complexity: ???
  // Space complexity: O(1)
  bool judgeSquareSum(int c)
  {
    unsigned int r = static_cast<int>(sqrt(c));
    unsigned int l = 0;
    while (l <= r)
    {
      unsigned int quadratic_sum = static_cast<unsigned int>(l*l + r*r);
      if (quadratic_sum == c)
        return true;
      else if (quadratic_sum < c)
        l++;
      else
        r--;
    }
    return false;
  }
};


int main()
{
  cout << Solution().judgeSquareSum(5) << endl;
  return 0;
}

