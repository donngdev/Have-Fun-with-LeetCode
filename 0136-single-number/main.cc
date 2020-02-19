class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: (1)
    int singleNumber(vector<int>& nums)
    {
      int elem = nums[0];
      for (int i = 1; i < nums.size(); i++)
        elem ^= nums[i];
      return elem;
    }
};