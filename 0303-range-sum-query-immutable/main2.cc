#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class NumArray {
public:
    // Time complexity: O(n) --> O(1) 
    // Space complexity: O(n) // cache sum
    NumArray(vector<int>& nums)
    {
      if (nums.size() == 0)
        return;

      sum.reserve(nums.size());
      sum[0] = nums[0];
      for (int i = 1; i < nums.size(); ++i)
        sum[i] = sum[i - 1] + nums[i];
    }
    
    int sumRange(int i, int j)
    {
      return i == 0 ? sum[j] : sum[j] - sum[i - 1];
    }
 private:
  vector<int> sum;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */

int main()
{
  vector<int> nums = {-2, 0, 3, -5, 2, -1};
  NumArray* obj = new NumArray(nums);
  int i = 2;
  int j = 5;
  int param_1 = obj->sumRange(i,j);
  cout << param_1 << endl;
  return 0;
}