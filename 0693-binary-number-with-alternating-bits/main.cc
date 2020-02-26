class Solution {
public:
    // Time complexity: O(1)  // O(0 - 32)
    // Space complexity: O(1)
    bool hasAlternatingBits(int n)
    {
      while (n)
      {
        int bit = n % 2; // last bit
        int pbit = (n / 2)%2;
        if (bit == pbit)
          return false;
        n /= 2;  
      }
      
      return true;
    }
};