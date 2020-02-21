#include <unordered_map>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Hash map
  // Time complexity: O(n)
  // Space complexity: O(n)
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
  {
    unordered_map<int, int> record;
    for (int e : nums1)
      record[e] += 1;
    
    vector<int> ins;
    for (int e : nums2)
    {
      if (record[e] > 0)
      {
        ins.push_back(e);
        record[e]--;
      }
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