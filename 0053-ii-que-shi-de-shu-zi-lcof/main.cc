// https://leetcode-cn.com/problems/que-shi-de-shu-zi-lcof/

class Solution {
public:
  // Binary Search
  // Time complexity: O(logn)
  // Space complexity: O(1)
  int missingNumber(vector<int>& nums)
  {
    int l = 0, r = nums.size() - 1;
    while (l <= r)
    {
      int mid = l + (r - l) / 2;
      if (nums[mid] == mid)
        l = mid + 1;
      else
        r = mid - 1;
    }
    return l;
  }
};