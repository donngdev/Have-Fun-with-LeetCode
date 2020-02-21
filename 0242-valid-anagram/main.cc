#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  bool isAnagram(string s, string t)
  {
    if (s.size() != t.size())
      return false;

    vector<int> table(26, 0);
    for (int i = 0; i < s.size(); ++i)
      table[s[i] - 'a']++;
    for (int i = 0; i < t.size(); ++i)
    {
      table[t[i] - 'a']--;
      if (table[t[i] - 'a'] < 0)
        return false;
    }
    return true;
  }
};


int main()
{
  string s = "rat", t = "car";
  cout << Solution().isAnagram(s, t) << endl;
  return 0;
}