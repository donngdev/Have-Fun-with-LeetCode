#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  string addStrings(string num1, string num2)
  {
    char numbers[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    string s;
    int carry = 0;
    while (i >= 0 || j >= 0)
    {
      int a = 0, b = 0;
      if (i >= 0)
        a = num1[i--] - '0';
      if (j >= 0)
        b = num2[j--] - '0';

      s.insert(s.begin(), numbers[(a + b + carry) % 10]);
      carry = (a + b + carry) / 10;
    }
    if (carry == 1)
      s.insert(s.begin(), numbers[carry]);
    
    return s;
  }
};



int main()
{
  string num1 = "87";
  string num2 = "45";
  cout << Solution().addStrings(num1, num2) << endl;
  return 0;
}
