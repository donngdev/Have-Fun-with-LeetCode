#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  bool isSubsequence(string s, string t)
  {
    int index = -1;
    for (int e : s)
    {
      index = t.find(e, index + 1); // find form [index+1 .. t.size()-1]
      if (index == string::npos)
        return false;
    }
    return true;
  }
};


int main()
{

  return 0;
}
