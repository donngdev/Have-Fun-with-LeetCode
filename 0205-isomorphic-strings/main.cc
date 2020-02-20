#include <iostream>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  bool isIsomorphic(string s, string t)
  {
    if (s.size() == 0)
      return true;
    int i = 0;
    while (i < s.size())
    {
      if (s.find(s[i]) != t.find(t[i]))
        return false;
      i++;
    }
    return true;
  }
};

int main()
{
  string s =  "cff";
  string t = "baa";
  cout << Solution().isIsomorphic(s, t);
  return 0;
}