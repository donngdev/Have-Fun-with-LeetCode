#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // NOTES: 1 <= nums[i] <= nums.size()
  // Time complexity: O(2n)
  // Space complexity: O(1)
  vector<int> findDisappearedNumbers(vector<int>& nums)
  {
    for (int i = 0; i < nums.size(); ++i)
    {
      nums[abs(nums[i]) - 1] = -abs(nums[abs(nums[i]) - 1]);
    }

    vector<int> res;  
    for (int i = 0; i < nums.size(); ++i)
    {
      if (nums[i] > 0)
        res.push_back(i+1);
    }
    return res;
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
  vector<int> nums = {4,3,2,7,8,2,3,1};
  vector<int> res = Solution().findDisappearedNumbers(nums);
  print_vec(res);
  return 0;
}