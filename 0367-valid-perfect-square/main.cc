class Solution {
public:
    // Newton iteration method
    // Time complexity: O(logn)
    // Space complexity: O(1)
    bool isPerfectSquare(int num)
    {
      if (num <= 1)
        return true;
      // num >= 2
      long r = num;
      while (r * r > num)
      {
        r = (r + num/r)/2;
        if (r * r == num)
          return true;
      }
      return false;
    }
};