// https://leetcode-cn.com/problems/how-many-numbers-are-smaller-than-the-current-number/submissions/

class Solution {
public:
    // Brute Force
    // Time complexity: O(n^2)
    // Space complexity: O(1)
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
      vector<int> res;
      for (int i = 0; i < nums.size(); ++i)
      {
        int count = 0;
        for (int j = 0; j < nums.size(); ++j)
        {
          if (i != j)
          {
            if (nums[j] < nums[i])
              count++;
          }
        }
        res.push_back(count);
      }
      return res;
    }
};