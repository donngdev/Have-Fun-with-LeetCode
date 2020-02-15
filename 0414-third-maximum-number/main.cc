#include <iostream>
#include <vector>
#include <set>  // Tree set

using namespace std;

// C++ Notes:
// get a set min value : *record.begin()
// get a set max value : *record.rbegin()

// Time complexity must be O(n)
class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)   NOTES: use a set of size 3
  int thirdMax(vector<int>& nums)
  {
    set<int> record;
    for (int i = 0; i < nums.size(); ++i)
    {
      if (record.size() < 3)
        record.insert(nums[i]);
      else
      {
        int min_value = *record.begin(); // get min value
        if (nums[i] > min_value)
        {
          record.erase(record.begin());  // remove min value
          record.insert(nums[i]);        // insert a new value
        }
      }
    }
    return record.size() < 3 ? *record.rbegin() : *record.begin();
  }
};


void print_vec(vector<int>& nums)
{
  for (int e : nums)
    cout << e << " ";
  cout << endl;
}


int main()
{
  vector<int> nums = {2,2,3,1};
  print_vec(nums);
  cout <<  Solution().thirdMax(nums) << endl;
  return 0;
}
