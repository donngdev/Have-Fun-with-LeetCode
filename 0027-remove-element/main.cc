#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  int removeElement(vector<int>& nums, int val)
  {
    int k = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
      if (nums[i] != val)
        nums[k++] = nums[i];
    }
    return k;
  }
};

void print_vector(std::vector<int> nums, int sz)
{
  for (int i = 0; i < sz; ++i)
    cout << nums[i] << " ";
  cout << endl;
}


int main()
{
  vector<int> nums = {0,1,2,2,3,0,4,2};
  int sz = Solution().removeElement(nums, 2);
  print_vector(nums, sz);
  return 0;
}
