#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(n)
  int missingNumber(vector<int>& nums)
  {
    unordered_set<int> record;
    for (int e : nums)
      record.insert(e);
    
    int res = -1;
    for (int i = 0; i < nums.size(); ++i)
    {
      if (record.find(i) == record.end())
        res = i;
    }

    return res == -1 ? nums.size() : res;
  }
};

int main()
{
  vector<int> nums = {9,6,4,2,3,5,7,0,1};
  cout << Solution().missingNumber(nums) << endl;

  return 0;
}
