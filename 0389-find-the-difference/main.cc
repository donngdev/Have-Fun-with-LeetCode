#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  // Time complexity: O(nlogn) + O(n)
  // Space complexity: O(1)
  char findTheDifference(string s, string t)
  {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for (int i = 0; i < s.size(); ++i)
    {
      if (s[i] != t[i])
        return t[i];
    }
    return t[t.size() - 1];
  }
};

int main()
{
  string s = "abcd", t = "abcde";
  cout << Solution().findTheDifference(s, t) << endl;
  return 0;
}
