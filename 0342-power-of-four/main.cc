#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
  // Time complexity: O(1)
  // Space complexity: O(1)
  bool isPowerOfFour(int num)
  {
    double r = log10(num) / log10(4);
    return r - static_cast<int>(r) == 0;
  }
};

int main()
{

  cout << Solution().isPowerOfFour(16) << endl;
  return 0;
}