#include <stack>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  string addBinary(string aa, string bb)
  {
    int i = aa.size() - 1, j = bb.size() - 1;
    char carry = '0';
    stack<char> record;
    while (i >= 0 || j >= 0)
    {
      char a, b;
      if (i < 0)
        a = '0';
      else
        a = aa[i];
      if (j < 0)
        b = '0';
      else   
        b = bb[j];

      if ((a == '0' && b == '0') && carry == '0')
      {
        record.push('0');
        carry = '0';
      }
      else if ((a == '0' && b == '0') && carry == '1')
      {
        record.push('1');
        carry = '0';
      }

      else if ((a == '0' && b == '1') && carry == '1')
      {
        record.push('0');
        carry = '1';
      }
      else if ((a == '0' && b == '1')  && carry == '0')
      {
        record.push('1');
        carry = '0';
      }

      else if ((a == '1' && b == '0') && carry == '0')
      {
        record.push('1');
        carry = '0';
      }
      else if ((a == '1' && b == '0')  && carry == '1')
      {
        record.push('0');
        carry = '1';
      }

      else if ((a == '1' && b == '1') && carry == '0')
      {
        record.push('0');
        carry = '1';
      }
      else if ((a == '1' && b == '1') && carry == '1')
      {
        record.push('1');
        carry = '1';
      }
      i--;
      j--;
    }

    if (carry == '1')
      record.push('1');
    string sum;
    while (!record.empty())
    {
      sum.insert(sum.end(), record.top());
      record.pop();
    }

    return sum;
  }
};

int main()
{
  string a = "11", b = "1";
  cout << Solution().addBinary(a, b) << endl;
  return 0;
}
