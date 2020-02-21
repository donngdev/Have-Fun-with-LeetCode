// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    // Binary Search
    // Time complexity: O(logn)
    // Space complexity: O(1)
    int firstBadVersion(int n)
    {
      int l = 1, r = n;
      while (r - l > 1)
      {
        int mid = l + (r - l) / 2;
        if (isBadVersion(mid))
          r = mid;
        else if (!isBadVersion(mid))
          l = mid;
        
      }
      return isBadVersion(l) ? l : r;
    }
};