class Solution {
public:
    // Time complexity: O(1)
    // Space complexity: O(1)
    int add(int a, int b)
    {
      return b == 0 ? a : add(a ^ b, static_cast<unsigned int>(a & b) << 1);
    }
};