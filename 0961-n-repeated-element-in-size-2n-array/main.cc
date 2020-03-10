class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(1)
    int repeatedNTimes(vector<int>& A)
    {
      for (int i = 1; i <= 3; ++i)
      {
        for (int j = 0; j < A.size() - i; ++j)
        {
          if (A[j] == A[j + i])
            return A[j];
        }
      }

      throw invalid_argument("The input has no solution.")
    }
};