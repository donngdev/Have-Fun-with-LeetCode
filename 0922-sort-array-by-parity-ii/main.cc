// https://leetcode-cn.com/problems/sort-array-by-parity-ii/

class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(1)
    vector<int> sortArrayByParityII(vector<int>& A)
    {
      for (int i = 0; i < A.size(); ++i)
      {
        if ((i % 2 == 0 && A[i] % 2 == 0) || (i % 2 != 0 && A[i] % 2 != 0))
          continue;
        
        if (i % 2 == 0)
        {
          int j = A.size() - 1;
          while (A[j] % 2 != 0)
            j--;
          swap(A[i], A[j]);
        }
        else
        {
          int j = A.size() - 1;
          while (A[j] % 2 == 0)
            j--;
          swap(A[i], A[j]);
        }
      }
      return A;
    }
};