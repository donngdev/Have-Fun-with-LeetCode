#include <iostream>

using namespace std;

class Solution {
public:
    // Time out
    // Time complexity: O(n^2)
    // Space complexity: O(1)
    vector<int> twoSum(vector<int>& nums, int target)
    {
      for (int i = 0; i < nums.size(); ++i)
      {
        for (int j = i+1; j < nums.size(); ++j)
        {
          if (nums[i] + nums[j] == target)
            return {i, j};
        }
      }
      throw invalid_argument("this input has no sulotion.");
    }
};