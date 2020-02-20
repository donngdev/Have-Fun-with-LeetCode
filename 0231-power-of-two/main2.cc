class Solution {
public:
    // Amazing
    // Time complixity: O(1)
    // Space complexity: (1)
    bool isPowerOfTwo(int n)
    {
      if (n < 1)
        return false;
      return (n & (n - 1)) == 0;
    }
};