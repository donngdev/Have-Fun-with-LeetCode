class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  int findMaxConsecutiveOnes(vector<int>& nums)
  {
    int count = 0, sum = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
      if (nums[i] == 1)
        count++;
      else
      {
        sum = max(sum, count);
        count = 0;
      } 
    }
  return max(sum, count);
  }
};