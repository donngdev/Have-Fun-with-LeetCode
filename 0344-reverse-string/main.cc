class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: (1)
  void reverseString(vector<char>& s)
  {
    int i = 0, j = s.size() - 1;
    while (i < j)
      swap(s[i++], s[j--]);
  }
};