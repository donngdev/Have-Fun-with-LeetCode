#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(1)
    bool repeatedSubstringPattern(string s) {
      string ss = s + s;
      return ss.find(s, 1) != s.size();
    }
};

int main()
{
  return 0;
}
