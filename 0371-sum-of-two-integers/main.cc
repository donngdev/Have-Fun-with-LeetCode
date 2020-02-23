#include <iostream>

using namespace std;

class Solution {
public:
    // Time complexity: O(1)  // O(1) ~ O(32)
    // Space complexity: O(1)
    int getSum(int a, int b)
    {
      int sum = a;
      while (b != 0)
      {
        sum = a ^ b;
        unsigned int carry = static_cast<unsigned int>(a & b);  // NOTE: A negative shift in LeetCode causes an error.
        carry = carry << 1;
        a = sum;
        b = carry;
      }
      return sum;
    }
};


int main()
{
  int a = -12, b = -8;
  cout << Solution().getSum(a, b) << endl;
  return 0;
}

