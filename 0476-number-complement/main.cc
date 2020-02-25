#include <iostream>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)  0 <= n <= 32
  // Space complexity: O(1)
  int findComplement(int num)
  {
    if (num == 0)
      return 1;

    unsigned int base = 1;
    int res = 0;
    while (num)
    {
      int bit = num % 2;
      res += base * (bit ^ 1);
      num /= 2;
      base = static_cast<unsigned int>(base * 2);
    }
    return res;
  }
};


int main()
{
  int i = 2147483647;
  cout << Solution().findComplement(i) << endl;
  return 0;
}
