#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: (n)
  vector<int> twoSum(vector<int>& nums, int target)
  {
    unordered_map<int, int> record;
    for (int i = 0; i < nums.size(); ++i)
    {
      int complecomt = target - nums[i];
      if (record.find(complecomt) != record.end())
        return {record[complecomt], i};
      
      record[nums[i]] = i;
    }

    throw invalid_argument("the input has no solution.");
  }
};

void print_vec(vector<int>& res)
{
  for (int e : res)
    cout << e << " ";
  cout << endl;
}

int main()
{
  vector<int> nums = {2, 3, 7, 15};
  int target = 9;
  vector<int> res = Solution().twoSum(nums, target);

  print_vec(res);
  return 0;
}
