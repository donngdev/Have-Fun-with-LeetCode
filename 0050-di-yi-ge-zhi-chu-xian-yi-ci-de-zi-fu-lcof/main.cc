class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  char firstUniqChar(string s)
  {
    vector<int> freq(26, 0);
    for (int i = 0; i < s.size(); i++)
      freq[s[i] - 'a']++;
    
    for (int i = 0; i < s.size(); i++)
    {
      if (freq[s[i] - 'a'] == 1)
        return s[i];
    }

    return ' ';
  }
};