// https://leetcode-cn.com/problems/decompress-run-length-encoded-list/
#include <vector>

using namespace std;

class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(1)
    vector<int> decompressRLElist(vector<int>& nums)
    {
      vector<int> res;
      for (int i = 0; i < nums.size(); i += 2)
      {
        for (int j = 0; j < nums[i]; ++j)
          res.push_back(nums[i + 1]);
      }

      return res;
    }
};