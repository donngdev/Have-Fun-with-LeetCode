#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(n)
  bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> record;
    for (int i = 0; i < nums.size(); ++i)
    {
      auto it = record.find(nums[i]); // hash table time complexity is O(1).
      if (it == record.end())
        record.insert(pair<int, int>(nums[i], i));
      else
      {
        if (i - it->second <= k)
          return true;
        else
          it->second = i;  // update the value of nums[i].
      }
    }
    return false;
  }
};

int main()
{
  vector<int> nums = {1, 0, 1, 1};
  int k = 1;
  cout << Solution().containsNearbyDuplicate(nums, k) << endl;
  return 0;
}