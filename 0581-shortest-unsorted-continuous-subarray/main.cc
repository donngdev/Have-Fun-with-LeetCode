#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Sorted
  // Time complexity: O(nlogn) + O(n)
  // Space complexity: O(n)
  int findUnsortedSubarray(vector<int>& nums)
  {
    if (nums.size() <= 1)
      return 0;
    // size >= 2
    vector<int> sorted_snums = nums;
    sort(sorted_snums.begin(), sorted_snums.end());
    int start = nums.size(), end = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
      if (sorted_snums[i] != nums[i])
      {
        start = min(start, i);
        end = max(end, i);
      }
    }
    return end >= start ? end - start + 1 : 0;
  }
};



int main()
{
  vector<int> nums = {1, 2, 1, 0, 0, 6, 7};

  cout << Solution().findUnsortedSubarray(nums) << endl;
  return 0;
}
