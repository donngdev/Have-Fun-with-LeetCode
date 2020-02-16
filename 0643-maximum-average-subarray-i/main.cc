#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
  // Slide Window
  // Time complexity: O(n)
  // Space complexity: O(1)
  double findMaxAverage(vector<int>& nums, int k)
  {
    assert(k >= 1 && k <= nums.size());
    int sum = 0;
    for (int i = 0; i < k; ++i)
      sum += nums[i];

    int  res = sum;
    for (int i = k; i < nums.size(); ++i)
    {
      sum += nums[i] - nums[i - k];
      res = max(sum, res);
    }

    return static_cast<double>(res) / k;
  }
};

int main()
{
  vector<int> nums = {1,12,-5,-6,50,3};
  int k = 4;
  cout << Solution().findMaxAverage(nums, k) << endl;
  return 0;
}
