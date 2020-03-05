class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(1)
    string reverseLeftWords(string s, int n)
    {
      reverse(s,  0, n-1);
      reverse(s, n, s.size() - 1);
      reverse(s, 0, s.size() - 1);
      
      return s;
    }
 
 private:
  void reverse(string &s, int i, int j)
  {
    while (i < j)
      swap(s[i++], s[j--]);
  }
};