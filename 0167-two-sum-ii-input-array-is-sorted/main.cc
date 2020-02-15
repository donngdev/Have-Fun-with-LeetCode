#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  vector<int> twoSum(vector<int>& numbers, int target) {
    assert(numbers.size() >= 2);
    int i = 0, j = numbers.size() - 1;
    while (i != j)
    {
      if (numbers[i] + numbers[j] == target)
        return {i+1, j+1};
      else if (numbers[i] + numbers[j] > target)
        j--;
      else
        i++;
    }
    throw invalid_argument("the input has no sulution.");
  }
};

// numbers = [2, 7, 11, 15], target = 9
// return [1,2]
int main()
{
  vector<int> numbers = {2, 7, 11, 15};
  int target = 9;
  vector<int> res = Solution().twoSum(numbers, target);
  cout << res[0] << " " << res[1] << endl;
  return 0;
}