// https://leetcode-cn.com/problems/sort-integers-by-the-number-of-1-bits/
class Solution {
public:
  // Time complexity: O(nlogn)
  // space complexity: O(1)
  vector<int> sortByBits(vector<int>& arr)
  {
    sort(arr.begin(), arr.end(), [](int a, int b)
    {
        int abits = bits(a), bbits = bits(b);
        if(abits != bbits) return abits < bbits;
        return a < b;
    });

    return arr;
  }
 
 private:
  static int bits(int n)
  {
    if (n == 0)
      return 0;
    return bits(n & (n - 1)) + 1;
  }
};