class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(1)
    int majorityElement(vector<int>& nums)
    {
      assert(nums.size() > 0);
      
      int m = nums[0]; // majority Element
      int count = 1;
      for (int i = 0; i < nums.size(); ++i)
      {
        if (nums[i] == m)
          count++;
        else
        {
          count--;
          if (count == 0)
          {
            m = nums[i];  // update majority Element
            count = 1;
          }
        }
      }
      return m;
    }
};