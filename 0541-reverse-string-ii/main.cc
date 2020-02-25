class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(1)
    string reverseStr(string s, int k)
    {
      for (int i = 0; i < s.size(); i += (2 * k))
      {
        reverse(s, i, i + k);
      }
      return s;
    }
 private:
  void reverse(string &s, int i, int j)
  {
    j = min(j, static_cast<int>(s.size()));
    j--;
    while (i < j)
      swap(s[i++], s[j--]);
  }
};