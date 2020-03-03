#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(n)
    int pivotIndex(vector<int>& nums)
    {
      if (nums.size() < 3)
        return -1;

      vector<int> sums(nums.size()+1, 0);
      for (int i = 0; i < nums.size(); ++i)
        sums[i+1] = nums[i] + sums[i];

      
      int i = 1, j = sums.size()-1;
      while (i <= j)
      {
        if (sums[i-1] == sums[j] - sums[i])
          return i-1;
        i++;
      }
      return -1;
    }
};

int main()
{
  vector<int> nums1 = {1, 7, 3, 6, 5, 6}; // 3
  vector<int> nums2 = {-1, -1, 0, 1, 1, 0}; // 5
  vector<int> nums3 = {1, 7}; //  -1
  vector<int> nums4 = {-1, -1, -1, 0, 1, 1}; // 0
  cout << Solution().pivotIndex(nums1) << endl;
  cout << Solution().pivotIndex(nums2) << endl;
  cout << Solution().pivotIndex(nums3) << endl;
  cout << Solution().pivotIndex(nums4) << endl;
  return 0;
}
