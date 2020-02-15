#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(nlogn)
  // Space complexity: O(1)
  int missingNumber(vector<int>& nums)
  {
    sort(nums.begin(), nums.end());
    int res = -1;
    for (int i = 0; i < nums.size(); ++i)
    {
      if (nums[i] != i)
      { 
        res = i;
        break;
      }
    }

    return res == -1 ? nums.size() : res;
  }
};

int main()
{
  vector<int> nums = {9,6,4,2,3,5,7,0,1};
  cout << Solution().missingNumber(nums) << endl;

  return 0;
}
