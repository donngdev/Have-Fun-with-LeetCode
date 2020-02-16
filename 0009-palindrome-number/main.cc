#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  // Time cpmlexity: O(bits x)
  // Space complexity: (1)
  bool isPalindrome(int x)
  {
    if (x < 0)
      return false;
    string str = to_string(x);
    int i = 0, j = str.size() - 1;
    while (j > i)
    {
      if (str[i++] != str[j--])
        return false;
    }
    return true;
  }
};


int main()
{
  cout << Solution().isPalindrome(0) << endl;
  return 0;
}
