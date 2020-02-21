#include <unordered_map>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Sorted
  // Time complexity: O(nlogn)
  // Space complexity: O(n)
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
  {
    sort(nums1.begin(), nums1.end()); // O(nlogn)
    sort(nums2.begin(), nums2.end());

    int i = 0, j = 0;
    vector<int> ins;
    while (i < nums1.size() && j < nums2.size())
    {
      if (nums1[i] == nums2[j])
      {
        ins.push_back(nums1[i]);
        i++;
        j++;
      }
      else if (nums1[i] > nums2[j])
        j++;
      else
        i++;
    }
    return ins;
  }
};

int main()
{
  vector<int> nums1 = {1,2,2,1};
  vector<int> nums2 = {2,2};
  vector<int> ins = Solution().intersect(nums1, nums2);
  for (int e : ins)
    cout << e << " ";
  cout << endl;
  return 0;
}