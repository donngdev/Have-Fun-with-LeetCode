#include <iostream>

using namespace std;

class Solution {
public:
  
  // Time complexity: O(1)
  // Space complexity: O(1)
  bool isPowerOfFour(int num)
  {
    long bit = 1;
    while (bit <= 0x40000000)
    {
      if (num == bit) return true;
      bit = bit << 2;
    }
    return false;
  }
};

int main()
{
  cout << Solution().isPowerOfFour(4) << endl;
  cout << Solution().isPowerOfFour(8) << endl;
  cout << Solution().isPowerOfFour(64) << endl;
  return 0;
}