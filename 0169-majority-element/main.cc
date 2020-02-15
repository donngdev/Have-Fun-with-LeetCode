#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: (1)
  // NOTES: 此算法要满足：主元素一定存在 
  // 若主元素不一定存在，则还需要遍历一遍 nums，统计 elem 的个数
  int majorityElement(vector<int>& nums)
  {
    int count = 0;
    int elem = nums[0];
    for (int i = 0; i < nums.size(); ++i)
    {
      if (count == 0)
      {
        elem = nums[i];
        count++;
      }
      else if (nums[i] == elem)
        count++;
      else
        count--;
    }
    return elem;
  }
};


int main()
{
  vector<int> nums = {3,3,4};
  cout << Solution().majorityElement(nums) << endl;
  return 0;
}


// 如果已知数组元素范围，则可以使用 Hash 一遍记录频次
// 第二遍统计结果即可