#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  bool validPalindrome(string s)
  {
    int i = 0, j = s.size() - 1;
    int times = 0;
    while (i < j)
    {
      if (s[i] != s[j])
        return is_valid(s, i, j-1) || is_valid(s, i+1, j);
      i++;
      j--;
    }
    return true;
  }
 private:
  bool is_valid(string s, int i, int j)
  {
    while (i < j)
    {
      if (s[i] != s[j])
        return false;
      i++;
      j--;
    }
    return true;
  }
};

int main()
{
  string s = "eeccccbebaeeabebccceea";
  cout << Solution().validPalindrome(s) << endl;
  return 0;
}

