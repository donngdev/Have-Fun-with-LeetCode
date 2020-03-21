// https://leetcode-cn.com/problems/is-unique-lcci/

class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(1)
    bool isUnique(string astr)
    {
      vector<int> freq(26, 0);
      for (int i = 0; i < astr.size(); ++i)
      {
        if (freq[astr[i] - 'a'] != 0)
          return false;
        else
          freq[astr[i] - 'a']++;
      }
      return true;
    }
};