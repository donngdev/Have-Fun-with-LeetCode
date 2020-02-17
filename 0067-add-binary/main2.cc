#include <stack>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  // Time complexity: O(max(n, m))  n, m is size of string
  // Space complexity: O(1)
  string addBinary(string num1, string num2)
  {
    int i = num1.size() - 1, j = num2.size() - 1;
    int carry = 0;
    string sum;
    while (i >= 0 || j >= 0)
    {
      char a = '0', b = '0';
      if (i >= 0)
        a = num1[i--];
      if (j >= 0)
        b = num2[j--];
      
      if (a == '1')
        carry += 1;
      if (b == '1') 
        carry += 1;

      if (carry % 2 == 0)
        sum.insert(sum.begin(), '0');
      else
        sum.insert(sum.begin(), '1');
      
      carry /= 2;
    }

    if (carry == 1)
      sum.insert(sum.begin(), '1');
    
    return sum;
  }
};

int main()
{
  string a = "1", b = "0";
  cout << Solution().addBinary(a, b) << endl;
  return 0;
}
