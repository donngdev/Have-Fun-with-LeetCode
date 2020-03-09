// https://leetcode-cn.com/problems/find-numbers-with-even-number-of-digits/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(1)
    int findNumbers(vector<int>& nums)
    {
      int count = 0;
      for (int i = 0; i < nums.size(); ++i)
      {
        if (check(nums[i]) % 2 == 0)
          count++;
      }

      return count;
    }
 private:
  int check(int num)
  {
    int base = 10;
    int bits = 1;
    while (num / base)
    {
      base *= 10;
      bits++;
    }
    return bits;
  }
};
int main()
{
  vector<int> nums = {12,345,2,6,7896};
  cout << Solution().findNumbers(nums) << endl;
  return 0;
}
