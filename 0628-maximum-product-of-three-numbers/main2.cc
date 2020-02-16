#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Linear traverse
  // Time complexity: O(n)
  // Space complexity: O(1)
  int maximumProduct(vector<int>& nums)
  {
    assert(nums.size() >= 3);
    for (int i = 0; i < 3; ++i)  // Bubble 
    {
      for (int j = 1; j < nums.size() - i; ++j)
      {
        if (nums[j] < nums[j-1])
          swap(nums[j], nums[j-1]);
      }
    }

    for (int i = 0; i < 2; ++i)
    {
      for (int j = nums.size() - 2 ; j >= i; --j)
      {
        if (nums[j] > nums[j+1])
          swap(nums[j], nums[j+1]);
      }
    }

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