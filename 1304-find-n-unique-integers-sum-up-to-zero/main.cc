// https://leetcode-cn.com/problems/find-n-unique-integers-sum-up-to-zero/


class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(n)
    vector<int> sumZero(int n)
    {
      vector<int> res;
      int sum = 0;
      for (int i = 0; i < n - 1; ++i)
      {
        res.push_back(i);
        sum += i;
      }
      res.push_back(-sum);
      return res;
    }
};