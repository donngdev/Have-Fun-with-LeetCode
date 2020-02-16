#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  // Time cpmlexity: O(bits of x)
  // Space complexity: (1)
  bool isPalindrome(int x)
  {
    if (x < 0)
      return false;
    if (x > 0 && x % 10 == 0)
      return false;

    int base = 1;
    while (x / base >= 10)   // get the digits of x
      base *= 10;

    // compare
    while (x > 0)
    {
      int left = x / base;
      int right = x % 10;
      if (left != right)
        return false;
      x = (x % base) / 10;   // new x
      base /= 100;
    }
    return true;
  }
};


int main()
{
  cout << Solution().isPalindrome(121) << endl;
  cout << Solution().isPalindrome(122) << endl;
  cout << Solution().isPalindrome(222) << endl;
  cout << Solution().isPalindrome(2) << endl;
  cout << Solution().isPalindrome(1110) << endl;
  return 0;
}
