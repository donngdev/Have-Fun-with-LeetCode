class Solution {
public:
    // Time complexity: O(logn)
    // Space complexity: O(1)
    string convertToTitle(int n)
    {
      vector<char> sys = {'Z', 'A', 'B', 'C', 'D',
                          'E', 'F', 'G', 'H',
                          'I', 'J', 'K', 'L',
                          'M', 'N', 'O', 'P',
                          'Q', 'R', 'S', 'T',
                          'U', 'V', 'W', 'X', 'Y'};
      string s;
      while (n)
      {
        int bit = n % 26;
        s.insert(s.begin(), sys[bit]);
        n = (n-1) / 26;
      }
      return s;
    }
};