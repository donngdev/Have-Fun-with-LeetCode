#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space comlexity: O(n)
  int removeDuplicates(vector<int>& nums)
  {
    unordered_set<int> record;
    int k = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
      if (record.find(nums[i]) != record.end())
        continue;
      else
      {
        record.insert(nums[i]);
        nums[k++] = nums[i];
      }
    }
    return record.size();
  }
};

void print_vector(std::vector<int> nums)
{
  for (int e : nums)
    cout << e << " ";
  cout << endl;
}

int main()
{
  vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

  Solution().removeDuplicates(nums);

  print_vector(nums);
  return 0;
}