#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    // Counting and Check
    // Time complexity: O(n)
    // Space complexity: O(1)
    int firstUniqChar(string s)
    {
      vector<int> record(26, 0);
      for (int i = 0; i < s.size(); ++i)
        record[s[i] - 'a']++;
      for (int i = 0; i < s.size(); ++i)
      {
        if (record[s[i] - 'a'] == 1)
          return i;
      }
      return -1;
    }
};

int main()
{
  string s = "loveleetcode";
  cout << Solution().firstUniqChar(s) << endl;
  return 0;
}
