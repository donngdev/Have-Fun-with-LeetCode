class Solution {
public:
    // Time complexity: O(nlogn)
    // Space complexity: O(1)
    int findRepeatNumber(vector<int>& nums)
    {
      sort(nums.begin(), nums.end());

      for (int i = 1; i < nums.size(); i++)
      {
        if (nums[i] == nums[i-1])
          return nums[i];
      }

      return -1;
    }
};