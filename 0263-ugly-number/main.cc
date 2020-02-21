#include <iostream>

using namespace std;

class Solution {
public:
  // Time complexity: ???
  // Space complexity: O(1)
  bool isUgly(int num)
  {
    if (num < 1)
      return false;

    while (num % 2 == 0)
      num /= 2;
    while (num % 3 == 0)
      num /= 3;
    while (num % 5 == 0)
      num /= 5;

    return num == 1;
  }
};


int main()
{
  for (int i = 0; i < 20; ++i)
    cout <<  i << " " << Solution().isUgly(i) << endl;

  return 0;
}