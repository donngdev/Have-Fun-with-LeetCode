// https://leetcode-cn.com/problems/split-a-string-in-balanced-strings/

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  int balancedStringSplit(string s)
  {
    int count = 0;
    int n = 0;
    for (int i = 0; i < s.size(); ++i)
    {
      if (s[i] == 'R')
        n++;
      if (s[i] == 'L')
        n--;
      if (n == 0)
        count++;
    }
    return count;
  }
};