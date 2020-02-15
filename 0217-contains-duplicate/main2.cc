#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
  // Time complexity: O(nlogn) + O(n)
  // Space complexity: O(1)
  bool containsDuplicate(vector<int>& nums)
  {
    sort(nums.begin(), nums.end()); // The complexity is O(n log n)
    for (int i = 1; i < nums.size(); ++i)
    {
      if (nums[i] == nums[i-1])
        return true;
    }
    return false;
  }
};

void print_vec(vector<int>& nums)
{
  for (int e : nums)
    cout << e << " ";
  cout << endl;
}

int main()
{
  vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
  cout << Solution().containsDuplicate(nums);
  print_vec(nums);
  return 0;
}