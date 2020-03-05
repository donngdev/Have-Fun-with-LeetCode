class Solution {
public:
    // Time complexity: O(1)
    // Space complexity: O(1)
    int hammingWeight(uint32_t n)
    {
      int count = 0;
      while (n)
      {
        n = n & (n-1);
        count++;
      }
      return count;
    }
};