#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
  // greedy algorithm
  // Time complexity: O(n)
  // Space complexity: O(1)
  int maxSubArray(vector<int>& nums)
  {
    int curr_max = nums[0];
    int max_sum = nums[0];
    for (int i = 1; i < nums.size(); ++i)
    {
      curr_max = max(nums[i], curr_max + nums[i]);
      max_sum  = max(curr_max, max_sum);
    }
    return max_sum;
  }
};


int main()
{

  return 0;
}