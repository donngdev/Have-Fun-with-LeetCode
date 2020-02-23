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
    char a = 0;
    for (int i = 0; i < s.size(); ++i)
      a ^= s[i];
    for (int i = 0; i < t.size(); ++i)
      a ^= t[i];

    return a;
  }
};

int main()
{
  string s = "abcd", t = "abcde";
  cout << Solution().findTheDifference(s, t) << endl;
  return 0;
}
