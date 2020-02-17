#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  // Linear Scan
  // Time complexity: O(n)
  // Space complexity: O(1)
  int lengthOfLastWord(string s)
  {
    if (s.size() == 0)
      return 0;
    int count = 0;
    int i = s.size() - 1; // last character index

    while (i >= 0 && s[i] == ' ')
      i--;

    while (i >= 0 && s[i] != ' ')
    {
      count++;
      i--;
    }

    return count;
  }
};



int main()
{

  string s = "a ";
  cout << Solution().lengthOfLastWord(s) << endl;
  return 0;
}