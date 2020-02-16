#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Sorted: bad: change origin data
  // Time complexity: O(nlogn)
  // Space complexity: O(1)
  int maximumProduct(vector<int>& nums)
  {
    assert(nums.size() >= 3);

    sort(nums.begin(), nums.end());  // O(nlogn)

    return max(nums[0] * nums[1] * nums[nums.size() - 1],
              nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3]);
  }
};

int main()
{
  vector<int> nums = {1,2,3,4};
  cout << Solution().maximumProduct(nums) << endl;
  return 0;
}