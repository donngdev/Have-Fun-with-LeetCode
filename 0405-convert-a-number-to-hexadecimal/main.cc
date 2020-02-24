#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  string toHex(int num)
  {
    if (num == 0)
      return "0";

    unsigned int unum = static_cast<unsigned int>(num);
    string hex;
    char code[16] = {'0', '1', '2', '3', '4',
                     '5', '6', '7', '8', '9',
                     'a', 'b', 'c', 'd', 'e', 'f'};
    while (unum)
    {
      int bit = unum % 16;
      hex.insert(hex.begin(), code[bit]);
      unum /= 16;
    }
    return hex;
  }
};

int main()
{
  for (int i = -10; i < 100; ++i)
    cout << Solution().toHex(i) << endl;
  return 0;
}
