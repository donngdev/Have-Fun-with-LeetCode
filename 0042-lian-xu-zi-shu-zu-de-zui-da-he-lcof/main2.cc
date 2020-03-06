#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    // Dynamic Programming
    // Time complexity: O(n)
    // Space complexity: O(1)
    int maxSubArray(vector<int>& nums)
    {
      assert(nums.size() > 0);

      int max_sum = nums[0];
      for (int i = 1; i < nums.size(); ++i)
      {
        if (nums[i - 1] > 0) // next
          nums[i] += nums[i - 1];
        
        max_sum = max(max_sum, nums[i]);
      }
      return max_sum;
    }
};

int main()
{
  vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
  cout << Solution().maxSubArray(nums) << endl;
  return 0;
}