class Solution {
public:
    // Time complixity: O(1)
    // Space complexity: (1)
    bool isPowerOfTwo(int n)
    {
      if (n > 0x40000000 || n < 1)
        return false;

      unsigned int bit = 1;
      while (bit < n)
        bit = bit << 1;
      return bit == n;
    }
};