#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n+m)
  // Space complexity: O(1)
  void merge(vector<int>& A, int m, vector<int>& B, int n)
  {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while (i >= 0 || j >= 0)
    {
      if (i < 0)
        A[k--] = B[j--];
      else if (j < 0)
        A[k--] = A[i--];
      else if (A[i] > B[j])
        A[k--] = A[i--];
      else
        A[k--] = B[j--];
    }
  }
};
int main()
{
  vector<int> A = {1,2,3,0,0,0};
  vector<int> B = {2, 5, 6};
  Solution().merge(A, 3, B, 3);
  return 0;
}
