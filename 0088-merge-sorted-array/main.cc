#include <iostream>
#include <vector>
#include <cassert>

using namespace std;
// nums1 = [1,2,3,0,0,0], m = 3
// nums2 = [2,5,6],       n = 3
// => [1,2,2,3,5,6]

class Solution {
public:
  // Time complexity: O(n)
  // Space comlexity: O(1)
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
  {
    assert(nums1.size() == m + n);
    int len = m+n-1;
    for (int k = len; k >= 0; --k)
    {
      if (m <= 0)
        nums1[k] = nums2[--n];
      else if (n <= 0)
        nums1[k] = nums1[--m];
      else if (nums1[m-1] > nums2[n-1])
        nums1[k] = nums1[--m];
      else
        nums1[k] = nums2[--n];
    }
  }
};

void print_vec(vector<int>& digits)
{
  for (int e : digits)
    cout << e << " ";
  cout << endl;
}

int main()
{
  vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  vector<int> nums2 = {2, 4, 5};
  int m = 3, n = 3;
  Solution().merge(nums1, m, nums2, n);
  print_vec(nums1);
  return 0;
}