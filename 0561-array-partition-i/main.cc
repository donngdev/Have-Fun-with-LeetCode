
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(nlogn) // sort
  // Space complexity: (1)
  int arrayPairSum(vector<int>& nums)
  {
    sort(nums.begin(), nums.end());
    int sum = 0;
    for (int i = 0; i < nums.size(); i += 2)
    {
      sum += nums[i];
    }

    return sum;
  }
};

int main()
{
  vector<int> nums = {1,4,3,2};

  cout << Solution().arrayPairSum(nums);
  
  return 0;
}