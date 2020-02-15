#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
  // Time complexity: O(2n)
  // Space complexity: O(n)
  vector<int> findDisappearedNumbers(vector<int>& nums)
  {
    unordered_set<int> record;
    for (int i = 0; i < nums.size(); ++i)
      record.insert(nums[i]);

    vector<int> res;
    for (int i = 1; i <= nums.size(); ++i)
    {
      if (record.find(i) == record.end())
        res.push_back(i);
    }
    return res;
  }
};

int main()
{
  vector<int> nums = {4,3,2,7,8,2,3,1};
  Solution().findDisappearedNumbers(nums);
  return 0;
}