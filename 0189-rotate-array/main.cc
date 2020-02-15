#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

class Solution {
public:
  // 手摇算法
  // Time complexity: O(n)
  // Space complexity: O(1)
  void rotate(vector<int>& nums, int k)
  {
    k = k % nums.size();
    reverse(nums, 0, nums.size() - 1);
    reverse(nums, 0, k-1);
    reverse(nums, k, nums.size() - 1);
  }

 private:
  void reverse(vector<int>& nums, int start, int end)
  {
    int i = start, j = end;
    while (i < j) {
      swap(nums[i++], nums[j--]);
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
  vector<int> nums = {1, 2, 3};
  print_vec(nums);
  Solution().rotate(nums, 2);
  print_vec(nums);
  return 0;
}