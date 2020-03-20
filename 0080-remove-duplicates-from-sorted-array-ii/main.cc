// https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/

class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(1)
    int removeDuplicates(vector<int>& nums)
    {
      if (nums.size() < 2)
        return nums.size();

      int count = 1, j = 1;
      for (int i = 1; i < nums.size(); ++i)
      {
        if (nums[i] == nums[i - 1])
          count++;
        else
          count = 1;
        
        if (count <= 2)
          nums[j++] = nums[i];
      }

      return j;
    }
};