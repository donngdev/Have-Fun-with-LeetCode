#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Brute Force Time out!!!
  // Time complexity: O(n^2)
  // Space complexity: O(1)
  int findUnsortedSubarray(vector<int>& nums)
  {
    int l = nums.size() - 1, r = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = i+1; j < nums.size(); j++)
      {
        if (nums[j] < nums[i])
        {
          l = min(l, i);
          r = max(r, j);
        }
      }
    }

    return r > l ? r - l + 1 : 0;
  }
};



int main()
{
  vector<int> nums = {1, 2, 1, 0, 0, 6, 7};

  cout << Solution().findUnsortedSubarray(nums) << endl;
  return 0;
}
