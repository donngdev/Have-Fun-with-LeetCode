#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  vector<int> sortArrayByParityII(vector<int>& A)
  {
    int j = 1;
    for (int i = 0; i < A.size(); i += 2)
    {
      if (A[i] % 2 != 0)
      {
        while (j < A.size() && A[j] % 2 != 0)
          j += 2;
        swap(A[i], A[j]);
      }
    }

    return A;
  }
};

int main()
{
  vector<int> nums = {4,2,5,7};
  nums = Solution().sortArrayByParityII(nums);
  return 0;
}

