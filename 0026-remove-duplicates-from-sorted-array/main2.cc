#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space comlexity: O(1)
  int removeDuplicates(vector<int>& nums)
  {
    if (nums.size() == 0)
      return 0;
    int k = 0;
    nums[k++] = nums[0];
    for (int i = 1; i < nums.size(); ++i)
    {
      if (nums[i] != nums[k-1])
        nums[k++] = nums[i];
    }
    return k;
  }
};

void print_vector(std::vector<int> nums)
{
  for (int e : nums)
    cout << e << " ";
  cout << endl;
}

int main()
{
  vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

  Solution().removeDuplicates(nums);

  print_vector(nums);
  return 0;
}