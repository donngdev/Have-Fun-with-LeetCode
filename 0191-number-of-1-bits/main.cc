class Solution {
public:
  // One cycle at a time, eliminating a 1
  // Time complexity: O(1)
  // Space complexity: O(1)
  int hammingWeight(uint32_t n) {
      int count = 0;
      while (n)
      {
        n = n & (n - 1);
        count++;
      }
      return count;
  }
};