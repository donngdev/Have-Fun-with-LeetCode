#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n^2)
  // Space complexity: O(1)
  vector<int> twoSum(vector<int>& nums, int target)
  {
    for (int i = 0; i < nums.size(); ++i)
    {
      for (int j = i+1; j < nums.size(); ++j)
      {
        if (nums[i] + nums[j] == target)
          return {i, j};
      }
    }
    throw invalid_argument("the input has no sulution");
  }
};

void print_vec(vector<int>& res)
{
  for (int e : res)
    cout << e << " ";
  cout << endl;
}


int main()
{
  vector<int> nums = {2, 3, 7, 15};
  int target = 9;
  vector<int> res = Solution().twoSum(nums, target);

  print_vec(res);
  return 0;
}
