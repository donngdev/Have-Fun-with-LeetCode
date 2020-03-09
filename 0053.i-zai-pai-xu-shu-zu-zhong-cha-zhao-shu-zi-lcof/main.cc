// https://leetcode-cn.com/problems/zai-pai-xu-shu-zu-zhong-cha-zhao-shu-zi-lcof/

class Solution {
public:
    // Binary Search
    // Time complexity: O(logn)
    // Space complexity: O(1)
    int search(vector<int>& nums, int target)
    {
      int l = 0, r = nums.size() - 1;
      int count = 0;
      int i = -1;
      while (l <= r)
      {
        i = l + (r - l) / 2;
        if (nums[i] == target)
          break;
        else if (nums[i] > target)
          r = i - 1;
        else
          l = i + 1;
      }
      l = i;
      r = i+1;
      while (l >= 0 && nums[l--] == target)
        count++;
      while (r < nums.size() && nums[r++] == target)
        count++;
      return count;
    }
};