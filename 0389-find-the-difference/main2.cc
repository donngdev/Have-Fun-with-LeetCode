#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  char findTheDifference(string s, string t)
  {
    vector<int> record(26, 0);
    for (int i = 0; i < s.size(); ++i)
      record[s[i] - 'a']++;

    for (int i = 0; i < t.size(); ++i)
    {
      record[t[i] - 'a']--;
      if (record[t[i] - 'a'] < 0)
        return t[i];
    }
    return ' ';
  }
};

int main()
{
  string s = "abcd", t = "abcde";
  cout << Solution().findTheDifference(s, t) << endl;
  return 0;
}
