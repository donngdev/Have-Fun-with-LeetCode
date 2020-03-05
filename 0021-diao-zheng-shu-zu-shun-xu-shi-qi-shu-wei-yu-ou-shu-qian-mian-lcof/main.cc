#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> exchange(vector<int>& nums)
    {
      int i = 0, j = nums.size() - 1;
      while (i < j)
      {
        while (i < nums.size() && nums[i] % 2 != 0) // find even number
          i++;
        while (j >= 0 && nums[j] % 2 == 0) // odd number
          j--;
        
        if (i > j)
         break;

        swap(nums[i++], nums[j--]);
      }
      return nums;
    }
};


int main()
{
  vector<int> nums = {2,16,3,5,13,1,16,1,12,18,11,8,11,11,5,1};

  nums = Solution().exchange(nums);

  return 0;
}

