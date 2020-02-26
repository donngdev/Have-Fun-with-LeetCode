#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  int findLengthOfLCIS(vector<int>& nums)
  {
    if (nums.size() == 0)
      return 0;

    int curr_len = 1;
    int res = 1;
    for (int i = 1; i < nums.size(); ++i)
    {
      if (nums[i] > nums[i-1])
        curr_len++;
      else
      {
        res = max(res, curr_len);
        curr_len = 1;
      }
    }

    return max(res, curr_len);
  }
};

int main()
{
  vector<int> nums = {1,3,5,7};
  cout << Solution().findLengthOfLCIS(nums) << endl;
  return 0;
}
