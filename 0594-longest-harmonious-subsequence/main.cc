#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(n)
  int findLHS(vector<int>& nums)
  {
    unordered_map<int, int> record;
    for (int e : nums)
      record[e]++;
    
    int res = 0;
    for (pair<int, int> e : record)
    {
      int curr = 0;
      if (record.find(e.first + 1) != record.end())
          curr = e.second + record.find(e.first + 1)->second;
      res = max(res, curr);
    }

    return res;
  }
};

int main()
{
  vector<int> nums = {1,3,2,2,5,2,3,7};
  cout << Solution().findLHS(nums) << endl;
  return 0;
}

