class Solution {
public:
    // Linear Scan
    // Time complexity: O(n)
    // Space complexity: O(1)
    int titleToNumber(string s)
    {
        long base = 1; // 26^0
        int sum = 0;
        for (int i = s.size()-1; i >= 0; i--)
        {
          sum += ((s[i] - 'A' + 1) * base);
          base *= 26;
        }
        return sum;
    }
};