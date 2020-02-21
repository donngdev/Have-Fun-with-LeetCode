#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
  // 3^i = n  => i = log3(n) = log10(n)/log10(3)
  // Time complexity: O(1)
  // Space complexity: O(1)
  bool isPowerOfThree(int n)
  {
    double r = log10(n) / log10(3);
    return r - static_cast<int>(r) == 0;
  }
};

int main()
{
  cout << Solution().isPowerOfThree(10) << endl;
  return 0;
}
