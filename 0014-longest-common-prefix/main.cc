#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace  std;

class Solution {
public:
  // Linear Scan
  // Time complexity: O(S)  S is the total number of characters
  // Space complexity: O(1)
  string longestCommonPrefix(vector<string>& strs)
  {
    if (strs.size() == 0)
      return "";

    // The longest prefixes must be less or equal to the shortes string,
    // so, take strs[0] as the number of outer loops.
    for (int i = 0; i < strs[0].size(); i++)
    {
      char c = strs[0][i];
      for (int j = 1; j < strs.size(); j++)
      {
        if (i == strs[j].size() || strs[j][i] != c)
          return strs[0].erase(i);  // NOTES: If strs is "abcd", the result of erase(2) is "ab".
      }
    }
    return strs[0];
  }
};

int main()
{
  vector<string> strs = {"a"};
  cout << Solution().longestCommonPrefix(strs) << endl;
  return 0;
}

