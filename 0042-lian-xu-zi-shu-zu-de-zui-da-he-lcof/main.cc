#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(1)
    int maxSubArray(vector<int>& nums)
    {
      int max_sum = INT32_MIN;
      int curr_sum = 0;
      for (int i = 0; i < nums.size(); ++i)
      {
        if (curr_sum <= 0) // next
          curr_sum = nums[i];
        else
          curr_sum += nums[i];
        
        max_sum = max(max_sum, curr_sum);
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