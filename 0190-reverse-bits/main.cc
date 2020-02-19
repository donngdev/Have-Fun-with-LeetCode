#include <iostream>

using namespace std;

class Solution {
public:
    // Time complexity: O(sizeof n)
    // Space complexity: O(1w)
    uint32_t reverseBits(uint32_t n)
    {
      uint32_t r = 0;
      for (int i = 31; i >= 0; i--)
        r |= (( (n >> (31-i)) & 1) << i);
      return r;
    }
};

int main()
{
  int r = 10;
  cout << Solution().reverseBits(r) << endl;
  
  return 0;
}