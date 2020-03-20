// https://leetcode-cn.com/problems/maximum-69-number/

class Solution {
public:
    // Time complexity: O(1)
    // Space complexity: O(1)
    int maximum69Number (int num)
    {
      string s = to_string(num);
      for (int i = 0; i < s.size(); ++i)
      {
        if (s[i] == '6')
        {
          s[i] = '9';
          break;
        }
      }

      return stoi(s);
    }
};