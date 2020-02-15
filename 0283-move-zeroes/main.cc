#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  void moveZeroes(vector<int>& nums)
  {
    int i = 0;
    for (int j = 0; j < nums.size(); ++j)
    {
      if (nums[j] != 0)
        swap(nums[i++], nums[j]);
    }
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
  vector<int> nums = {0,1,0,3,12};
  print_vec(nums);
  Solution().moveZeroes(nums);
  print_vec(nums);
  return 0; 
}


  // 非 0 元素的相对位置无法保证
  // void moveZeroes(vector<int>& nums)
  // {
  //   assert(nums.size() > 0);
  //   int i = 0, j = nums.size();
  //   while (true)
  //   {
  //     while (i < nums.size() && nums[i] != 0) // find 0
  //       i++;
  //     while (j >= 0 && nums[j] == 0) // avoid 0
  //      j--;

  //     if (i > j)
  //       break;
      
  //     swap(nums[i], nums[j]);
  //     i++;
  //     j++;
  //   }
  // }