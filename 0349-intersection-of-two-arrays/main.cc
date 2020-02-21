#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
// Hash Set
// Time complexity: O(len(nums1) + len(nums2))
// Space Complexity: O(len(nums1))
  vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
  {
    unordered_set<int> record(nums1.begin(), nums1.end());
    
    unordered_set<int> ins;
    for (int e : nums2)
    {
      if (record.find(e) != record.end())
        ins.insert(e);
    }
    return vector<int>(ins.begin(), ins.end());
  }
};

int main()
{
  vector<int> nums1 = {1,2,2,1};
  vector<int> nums2 = {2,2};
  vector<int> ins = Solution().intersection(nums1, nums2);
  for (int e : ins)
    cout << e << " ";
  cout << endl;
  return 0;
}
